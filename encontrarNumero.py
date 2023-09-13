def busca (lista, valor):
    contador = 0
    indices = []
    for i, elemento in enumerate(lista):
        if elemento == valor:
            indices.append(i)
            contador += 1
        elif elemento > valor:
            break
    return indices, contador

    

lista_ordenada = [1, 2, 2, 3, 4, 4, 4, 5, 6, 7]
valor_procurado = 4
resultados,contagem = busca(lista_ordenada, valor_procurado)

if resultados:
    print(f"O valor {valor_procurado} foi encontrado no indices: {resultados}")
    print(f"O valor {valor_procurado} se repete {contagem} vezes na lista")
else:
    print(f"O valor {valor_procurado} nao foi encontrado na lista")