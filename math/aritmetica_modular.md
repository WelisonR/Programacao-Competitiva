# Propriedades em Aritmética Modular

## Fórmulas

1. $(a+b)\%c = (a\%c+b\%c)\%c$.
2. $(a*b)\%c = ((a\%c)*(b\%c))\%c$.
3. $(a-b)\%c = ((a\%c)-(b\%c)+c)\%c$.
4. $(a/b)\%c = ((a\%c)*(b^{-1}\%c))\%c$.

*   Uso: seja $a = 10^{18}, b = 10^{18}, c = 10^{9}+7$ e $(a*b)\%c$, para evitar overflow no tipo inteiro, faz-se necessário aplicar o módulo: $((a\%c)*(b\%c))\%c=(49*49)\%(10^{9}+7) = 2401$.

*   Observação: $b^{-1}$ é o inverso multiplicativo modular entre b e c.

// TODO: exemplo com divisão.
// TODO: demonstração das propriedades 3 e 4.


## Exemplos

Para a fórmula 3, precisa-se somar `+c` visto os possíveis resultados negativos:

*   a = 12, b = 15, c = 4:
    *   $(12-15)\%4 = (12\%4-15\%4 + 4)\%4 = (0-3+4)\%4 = 1$.

*   Observação: em python, $-4\%3 = 2$, já em C++, $-4\%3 = -1$.

# Propriedades Importantes

*   $a * b = LCM(a, b) * GCD(a, b)$.
*   $a\%b = a - a/b *b$.

# Algoritmo Estendido de Euclides

*   $gcd(a, b)$ sempre pode ser representado como $Ax+By = GCD(a, b)$.
    *   Os coeficientes x e y são utilizados para encontrar o inverso multiplicativo modular.
*   Algoritmo recebe duas entradas A e B; retorna GCD(A, B) e os coeficientes como saída.
*   Exemplo, A = 30 e B = 20;
    *   30*1+20(-1) = 10.
*   Uso: Este algoritmo é usado quando A e B são co-primos (primos entre si). Nesses casos, x se torna o inverso multiplicativo modular de A no módulo B e y se torna o inverso multiplicativo modular de B no módulo A.
*   Complexidade: `O(log(max(A, B)))`.

// TODO: demonstração da ideia de como é obtido X e Y no algoritmo de Euclides.

# Inverso Multiplicativo Modular

*   Se $A*B = 1$, B é o inverso multiplicativo de A, isto é, $B = 1/A ou B = A^{-1}$.
*   Inverso multiplicativo modular: é o valor de B tal que $(A*B)\%M = 1$.
    *   B é o inverso multiplicativo modular de A no módulo M.
*   Formalmente: $A*B \equiv 1 (mod M)$, onde B está no intervalo [1, M-1].
    *   Naive approach: procurar B no intervalo [1, M-1]. Complexidade: O(M).
*   O inverso multiplicativo modular só existe caso A e M sejam co-primos, isto é, $GCD(A, M) = 1$.
*   Exemplo, A = 5 e M = 12:
    *   $(A*5)\%M = (5*5)\%12 = 1$. Aqui, 5 é o inverso multiplicativo modular de 5 no módulo 12.
*   Se A e M são co-primos ($Ax+My = 1$), logo, x é o valor de interesse e pode ser obtido com o algoritmo estendido de Euclides. Complexidade: O(log(max(A, M))).

// TODO: estender explicação para o Pequeno Teorema de Fermat.

// TODO: implementação do módulo inverso.
