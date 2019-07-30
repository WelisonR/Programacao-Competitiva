# itertools

```py
import itertools
```

## Análise Combinatória - Iteradores de combinação

*   **Produto cartesiano**:
    *   Resultado em ordem lexicográfica. (inputs em ordem)
    *   Assinatura: `product(*args, repeat= 1)`.
```py
a = itertools.product([1, 2, 3], ['A', 'B']) # iterator
# > [(1, 'A'), (1, 'B'), (2, 'A'), (2, 'B'), (3, 'A'), (3, 'B')]
```

*   **Permutação**:
    *   Todas as combinações, sem repetições. ('AB' != 'BA')
    *   Resultado em ordem lexicográfica. (inputs em ordem)
    *   Repetição? usar `set` antes.
    *   Assinatura: `permutation(iterable, r=None)`;
        *   r = tamanho da permutação.
```py
a = itertools.permutations('ABC', 2)
# > [('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'C'), ('C', 'A'), ('C', 'B')]
b = itertools.permutations(set('ABB'), 2)
# > [('A', 'B'), ('B', 'A')]
```

*   **Combinação**:
    *   Resultado em ordem lexicográfica. (input em ordem)
    *   Combinação: 'AB' == 'BA'.
    *   Assinatura: `combinations(iterable, r)`.
        *   r = tamanho da combinação.

```py
a = itertools.combinations(range(4), 2)
# > [(0, 1), (0, 2), (0, 3), (1, 2), (1, 3), (2, 3)]
```

*   **Combinação com repetição**:
    *   Resultado em ordem lexicográfica. (input em ordem)
    *   Combinação: 'AB' == 'BA'.
    *   Pode-se repetir elementos.
    *   Assinatura: `combinations_with_replacement(iterable, r)`.
        *   r = tamanho da combinação.

```py
a = itertools.combinations_with_replacement('ABC', 2)
# > [('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'B'), ('B', 'C'), ('C', 'C')]
```