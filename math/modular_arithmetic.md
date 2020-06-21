# Propriedades em Aritmética Modular

## Fórmulas

1. $(a+b)\%c = (a\%c+b\%c)\%c$.
2. $(a*b)\%c = ((a\%c)*(b\%c))\%c$.
3. $(a-b)\%c = ((a\%c)-(b\%c)+c)\%c$.
4. $(a/b)\%c = ((a\%c)*(b^{-1}\%c))\%c$.

*   Uso: seja $a = 10^{18}, b = 10^{18}, c = 10^{9}+7$ e $(a*b)\%c$, para evitar overflow no tipo inteiro, faz-se necessário aplicar o módulo: $((a\%c)*(b\%c))\%c=(49*49)\%(10^{9}+7) = 2401$.

*   Observação: $b^{-1}$ é o inverso multiplicativo modular entre b e c.

## Exemplos

Fórmula 3: precisa-se somar `+c` visto os possíveis resultados negativos:

*   a = 12, b = 15, c = 4:
    *   $(12-15)\%4 = (12\%4-15\%4 + 4)\%4 = (0-3+4)\%4 = 1$.

Fórmula 4: a divisão modular só está definida se o inverso modular do denominador existe. O inverso modular de x é um inteiro y tal que $1 \equiv x*y (mod ~ c)$.

*   a = 8, b = 3, m = 5.
    *   $(a/b)\%m = ((a\%m)*(b^{-1}\%m))\%m$
    *   $(a/b)\%m = ((8\%5)*(2\%5))\%5$
    *   $(a/b)\%m = 1$

*   $b^{-1}$:
    *   $gcd(3, 5) == 1$, logo, existe inverso modular.
    *   $1 \equiv 3 \cdot x (mod ~ 5)$, logo, $x = 2$.

*   Observação: em python, $-4\%3 = 2$, já em C++, $-4\%3 = -1$.

# Propriedades Importantes

*   $a * b = lcm(a, b) * gcd(a, b)$.
*   $a\%b = a - a/b *b$.

# Algoritmo Estendido de Euclides

*   Algoritmo de Euclides pode ser representado na forma: $Ax+By = gcd(a, b)$.
    *   Se $gcd(A, B) == 1$, x e y são inversos modulares de A e B, respectivamente.
    *   Os coeficientes x e y podem ser negativos.
*   Exemplo, A = 30 e B = 20;
    *   30*1+20(-1) = 10.
*   Uso: Este algoritmo é usado quando A e B são co-primos (primos entre si). Nesses casos, x se torna o inverso multiplicativo modular de A no módulo B e y se torna o inverso multiplicativo modular de B no módulo A.
*   Complexidade: `O(log(max(A, B)))`.

Demonstração:

*   $Ax+By = gcd(A, B)$ (1). Porém, $gcd(A, B) = gcd(B, A\%B)$.
*   $Bx+(A\%B)y = gcd(A, B)$. Porém, $A\%B = A-A/B*B$.
*   $Bx+(A-A/B*B)y = gcd(A, B)$. Colocando B em evidência:
*   $B(x-A/B)+Ay = gcd(A, B)$.

Logo, evidencia-se que:
*   $y = (x_1 - A/B \cdot y_1)$
*   $x = y_1$.

*   A divisão é inteira.

# Inverso Multiplicativo Modular

*   Inverso multiplicativo modular: é o valor de B tal que $(A*B)\%M = 1$.
    *   B é o inverso multiplicativo modular de A no módulo M.
*   Formalmente: $A*B \equiv 1 (mod M)$, onde B está no intervalo [1, M-1].
    *   Naive approach: procurar B no intervalo [1, M-1]. Complexidade: O(M).
*   O inverso multiplicativo modular só existe caso A e M sejam co-primos, isto é, $gcd(A, M) = 1$.
*   Exemplo, A = 5 e M = 12 (Algoritmo de Euclides):
    *   $(A*5)\%M = (5*5)\%12 = 1$. Aqui, 5 é o inverso multiplicativo modular de 5 no módulo 12.
    *   Se A e M são co-primos ($Ax+My = 1$), logo, x é o valor de interesse e pode ser obtido com o algoritmo estendido de Euclides. Complexidade: O(log(max(A, M)).

# Pequeno Teorema de Fermat

Definição: se $p$ é um número primo e $p \nmid a$, logo, $a^{p-1} \equiv 1 (mod ~ p)$.

## Exemplo

*   $3^{100000}\%53$.
    *   $53$ é primo e $53 \nmid 3$.
    *   $3^{53-1} \equiv 1 (mod ~ 53)$
    *   $(3^{52})^{1923} \equiv 1^{1923}$
    *   $3^{99996} \equiv 1 (mod ~ 53)$
    *   $3^{4} \cdot 3^{99996} \equiv 1 \cdot 3^{4} (mod ~ 53)$
    *   $3^{100000} \equiv 28 (mod ~ 53)$

*   Observação: $a \cdot 2a \cdot ... \cdot (p-1)a \equiv 1 \cdot 2 \cdot ... \cdot (p-1) ~ (mod ~ p)$

# Inverso Multiplicativo Modular com Pequeno Teorema de Fermat

*   Como $A^{P-1} \equiv 1 (mod ~ P)$, multiplicando-se os dois lados por $A^{-1}$:
    *   $A^{-1} \equiv A^{P-2} (mod ~ P)$
*   Complexidade: `O(log M)`.
