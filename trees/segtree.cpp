// D. Distinct Characters Queries

// https://codeforces.com/contest/1234/problem/D

#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

struct Node {
	Node(int v = 0) {
		ans = v;
	}
	Node(Node l, Node r) {
		// merge
		ans = l.ans | r.ans;
	}
 
	int val() {
		int bits = 0;
		for(int i = 0; i < 26; i++) {
			if(ans & (1 << i)) {
				bits++;
			}
		}
		return bits;
	}
	// atributes
	int ans;
};
 
template <class i_t, class e_t>
class SegmentTree {
public:
	void init(std::vector<e_t> base) {
		n = base.size();
		tree.resize(2 * n);
		for(int i = 0; i < n; i++) {
			tree[i + n] = i_t(base[i]);
		}
		for(int i = n - 1; i > 0; i--) {
			tree[i] = i_t(tree[i + i], tree[i + i + 1]);
		}
	}
	
	i_t qry(int l, int r) {
		i_t lp, rp;
		for(l += n, r += n; l < r; l /= 2, r /= 2) {
			if(l & 1) lp = i_t(lp, tree[l++]);
			if(r & 1) rp = i_t(tree[--r], rp);
		}
		return i_t(lp, rp);
	}
	
	void upd(int pos, e_t v) {
		pos += n;
		tree[pos] = i_t(v);
		for(pos /= 2; pos > 0; pos /= 2) {
			tree[pos] = i_t(tree[pos + pos], tree[pos + pos + 1]);
		}
	}
	
private:
	int n;
	std::vector<i_t> tree;
};

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
    SegmentTree<Node, int> myseg;
    vector<int> myvs;
    string s;
    cin >> s;
    for(int i = 0; i < len(s); i++) {
        myvs.push_back(1 << (s[i]-'a'));
    }
    myseg.init(myvs);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int cmd;
        cin >> cmd;
        if (cmd == 1) {
            int pos; char c;
            cin >> pos >> c;
            myseg.upd(pos-1, 1 << (c-'a')); // pos indexado a partir do 1
        }
        else {
            int l, r;
            cin >> l >> r;
            cout << myseg.qry(l-1, r).val() << '\n'; // l indexado a partir do 1
                                                     // [1, 4] = [0, 3] no vetor
                                                     // r é subtraído dentro do método
        }
    }

    return 0;
}