## <div id="log">Log Bactérias</div>

Autor: Misael Mateus

Multiplique todos elementos dos dois arrays e verifique qual gera maior resultado. Como o valor dos elementos pode ser até 10^8, o produto dos elementos do mesmo array pode ultrapassar o valor dos inteiros. Para lidar com isso podemos usar logaritmo.
Se a > b, onde a, b são positivos, então log(a) > log(b)

Usando as propriedades do logaritmo
log(a*b) = log(a)+log(b)

Então, basta somar o logaritmo de cada elemento do array, e verificar qual dos dois arrays tem um resultado maior.
