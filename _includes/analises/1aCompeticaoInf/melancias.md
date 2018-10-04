## H - Melâncias
<div id="melancias"></div>

Autor: <font color = "blue">Humberto Longo</font>

Suponha que uma camada da pilha seja um triangulo com <b>i</b> melancias por lado. Isso significa que esse triangulo tem <b>i + (i-1) + ... + 1</b> melancias. 
Assim, basta começar da camada superior e, a cada iteração, aumentar uma camada e verificar se a quantidade total de triangulos excedeu o limite.

Um exemplo de implementação segue abaixo:

{% gist wellvolks/ef9f1d83fe24f4311e83e44cb10cbb1b melancias_longo.cpp %}
