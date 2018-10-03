## <div id="soma">Soma Máxima</div>

Autor: Rafael Castro

O primeiro passo da solução será aplicar o máximo possível de operações sobre os números negativos (se eles existirem), começando do menor número negativo até o maior. Se após aplicado o primeiro passo ainda sobrarem algumas operações, então escolha o menor número Ai atual, e aplique as operações restantes sobre Ai, que pode ser feito aplicadas uma a uma , ou apenas olhando a paridade dessa quantidade restante. Dessa forma será garantido que as operações serão executadas de forma a gerar o maior valor possível.
O resultado será a soma dos números após executado os passos acima.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/dd47980d0cbffe5b2c0bc6bb87042fd8 soma_rafael_castro.cpp %}
