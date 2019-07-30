# Programação Funcional em Python

## Conceitos

*   Função pura: não modifica estado fora de seu escopo.
*   Paradigma funcional:
    *   Composição de funções para a resolução de um problema;
    *   **Imutabilidade**:
        *   constantes para o desenvolvimento. Sem efeito colateral.
        *   É como uma função $f(x) = x+2$, ao passar x = 3 sempre retornará a mesma coisa e, além disso, x se mantém imutável.
*   **First class functions**: funções usadas como valores.
*   **High order functions**: funções podem ter outras funções como parâmetros, e retorná-las ou não como resultado.
*   Vantagens da programação por função: modularidade, brevidade, concorrência (funções puras são `thread-safe`), testabilidade.

```py
import string
# Função pura
def butlast(mylist):
    return mylist[:-1]

# Função não pura
def remove_last_item(mylist):
    mylist.pop(-1)
# Função de primeira classe
a = string
# Função de primeira ordem
def finalf(x, fx):
    return fx(x) + x + 1

a = finalf(2, lambda x: x**2)
```

## Funções para programação funcional

*   **map**:
    *   Aplica uma função para cada item de um iterável.
    *   `list comprehension` pode representar `map`.
    *   Assinatura: `map(function, iterable)`.
```py
a = map(lambda x: '!' + x + '!', ['Alô', 'teste'])
# > ['!Alô!', '!teste!']
```

*   **filter**:
    *   Filtra itens baseados no critério da função.
    *   `list comprehension` pode representar `filter`.
    *   Assinatura: `filter(function or None, iterable)`.
```py
str1 = 'walle'
list1 = ['ellaw', 'josset', 'waell', 'liket']
a = filter(lambda x: (Counter(str1) == Counter(x)), list1)
# > ['ellaw', 'waell']
```

*   **reduce**:
    *   `from functools import reduce`.
    *   Aplica uma função em todos os elementos de maneira a reduzí-los a um valor final.
    *   Assinatura: `functools.reduce(function, iterable)`.

```py
product = reduce((lambda x, y: x * y), range(1, 6))
# > 120
```

## Funções úteis

*   enumerate:
```py
items = [chr(ord('a')+i) for i in range(5)]
for i, item in enumerate(items):
    print(i, item)
```

*   all/any():
```py
# verificar se todos satisfazem a dado predicado
if all(map(lambda x: x > 0, [0, 2, 3])):
    print('ALL')
elif any(map(lambda x: x > 0, [0, 2, 3])):
    print('ANY')
# > ANY
```

*   zip(iter1, [, iter2 [...]]):
    *   Combina múltiplas sequências em tuplas.
```py
keys = ['Walle', 'chan', 'mothership']
a = dict(zip(keys, map(len, keys)))
# > {'Walle': 5, 'chan': 4, 'mothership': 10}
```