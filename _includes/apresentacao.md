O portal {{ site.url }} é uma iniciativa dos alunos do Instituto de Informática
da Universidade Federal de Goiás que tem como objetivo ser um centralizador de
informações sobre programação competitiva, em especial a Maratona de
Programação, para os entusiastas de tais competições no estado de Goiás e em
toda a região Centro-Oeste.

A idéia é que aqui sejam divulgadas notícias sobre as competições acontecendo,
universidades divulguem seus treinos abertos a participantes de outras
instituições, e principalmente que este seja um ponto de bastante
compartilhamento de conhecimento. Todos são convidados a contribuir não só com
notícias mas também com conteúdo didático. Resolveu um problema e achou
interessante? Compartilhe! Aprendeu uma técnica nova? Compartilhe! Ficou
sabendo de um desafio no [topCoder][topcoder] que vai sortear alguns dólares
entre aqueles que conseguirem resolver? Compartilhe! Viu algo de errado em
algum post ou tem alguma idéia pra complementá-lo? Não fique parado e contribua!

O {{ site.title }} é hospedado no [GitHub][gh-pages] e construindo usando a
plataforma [Jekyll][jekyll], que gera sites estáticos com conteúdo feito em
[Markdown][markdown]. Estudando o básico dessas tecnologias você já está
pronto para colaborar.

O passo a passo sugerido para contribuir é bem simples:

1. Primeiramente faça um [fork][gh-fork] do [repositório][repositorio] do
{{ site.title }}, assim você pode ir fazendo suas alterações e mantendo
controle delas no GitHub.
2. Baixe o código fonte do site para o seu computador e faça as alterações
que deseja. (Não se esqueça de rodar gerar o site localmente e ter certeza
de que está tudo funcionando como esperado.)
3. Ao terminar suas modificações e enviá-las para seu fork do projeto no
GitHub, crie um [pull request][gh-pullreq] para o repositório do maratona e
aguarde até que o mesmo seja aprovado. Assim que algum dos colaboradores com
autorização para aceitar pull requests aprovar sua solicitação seu conteúdo
estará ao vivo no site.

Para adicionar novos posts basta adicionar um arquivo na pasta `_posts` com um
nome que segue a convenção `YYYY-MM-DD-name-of-post.ext`. Na pasta `_drafts` há
alguns exemplos e o arquivo `1990-07-17-post-template.md` tem o objetivo de 
servir como ponto de partida para novos posts.

Além disso é possível também adicionar outros tipos de páginas, como esta, ou
a página com a lista de todos os posts do site. Estas páginas podem ser 
acessadas a partir do menu superior e se encontram na pasta `_pages`. 

Se não estiver gostando do layout do site e quiser mudar alguma coisa, todo
tipo de colaboração é bem vinda e o processo é o mesmo que já foi descrito.

## Recursos disponíveis

### Syntax highlight

O Jekyll oferece bastante facilidades, uma delas é um poderoso suporte a syntax
highlighting. O modo sugerido para compartilhamento de código no site será 
através de [gists][gh-gist]. Adicionando a seguinte tag no seu post:

{% highlight html %}
{% raw %}
{% gist paulocezar/930377b8e57b64072391 cilindros.cpp %}
{% endraw %}
{% endhighlight %}

O gist referenciado será adicionado na página usando o esquema de syntax
highlighting do gist, e o resultado será algo bem agradável como:

{% gist paulocezar/930377b8e57b64072391 cilindros.cpp %}

Além de um resultado bonito, esse é o método sugerido pela facilidade em
alterar o código compartilhado caso algum problema seja detectado. 
Qualquer modificação no código é refletida no site com uma simples
atualização da página, sem a necessidade de um novo pull request. Outro 
método é usando a tag `{% raw %}{% highlight %}{% endraw %}`. Para compartilhar
um código em C++ direto no Markdown é só adicionar a tag:

{% highlight html %}
{% raw %}
{% highlight c++ linenos %}
#include <bits/stdc++.h> 

int main() {
  std::cout << "Hello world!";
  return 0;
}
{% endhighlight %}
{% endraw %}
{% endhighlight %}

que esse resultado será gerado:

{% highlight c++ linenos %}
#include <bits/stdc++.h> 

int main() {
  std::cout << "Hello world!";
  return 0;
}
{% endhighlight %}

### LaTeX

A biblioteca [kramdown][kramdown] usada para conversão de Markdown em html
é capaz de renderizar expressões matemáticas escritas em LaTeX, sejam 
expressões simpes em uma linha, como: $$ x^2 + y^2 = z^2 $$ ou equações um
pouco mais elaboradas como:

$$
\begin{align*}
  & \phi(x,y) = \phi \left(\sum_{i=1}^n x_ie_i, \sum_{j=1}^n y_je_j \right)
  = \sum_{i=1}^n \sum_{j=1}^n x_i y_j \phi(e_i, e_j) = \\
  & (x_1, \ldots, x_n) \left( \begin{array}{ccc}
      \phi(e_1, e_1) & \cdots & \phi(e_1, e_n) \\
      \vdots & \ddots & \vdots \\
      \phi(e_n, e_1) & \cdots & \phi(e_n, e_n)
    \end{array} \right)
  \left( \begin{array}{c}
      y_1 \\
      \vdots \\
      y_n
    \end{array} \right)
\end{align*}
$$

We got you covered. Não precisa ficar se preocupando em como descrever
aquela recorrência maluca ou fórmula bolada que você penseu pra resolver
um problema. Basta adicionar no seu Markdown o LaTeX que deseja exibir
entre `$$`. As expressões acima, por exemplo, foram geradas da seguinte
maneira:

{% highlight latex %}
{% raw %}
$$
\begin{align*}
  & \phi(x,y) = \phi \left(\sum_{i=1}^n x_ie_i, \sum_{j=1}^n y_je_j \right)
  = \sum_{i=1}^n \sum_{j=1}^n x_i y_j \phi(e_i, e_j) = \\
  & (x_1, \ldots, x_n) \left( \begin{array}{ccc}
      \phi(e_1, e_1) & \cdots & \phi(e_1, e_n) \\
      \vdots & \ddots & \vdots \\
      \phi(e_n, e_1) & \cdots & \phi(e_n, e_n)
    \end{array} \right)
  \left( \begin{array}{c}
      y_1 \\
      \vdots \\
      y_n
    \end{array} \right)
\end{align*}
$$
{% endraw %}
{% endhighlight %}

## That's all folks! (for now...)

Bem, pra começar é isso. O site está só começando e e ainda tem muito o que
evoluir. Acompanhem, participem e comecem a contribuir o quanto antes.

[topcoder]:     https://www.topcoder.com/challenge-details/30051072/?type=develop
[gh-pages]:     https://pages.github.com/
[jekyll]:       http://jekyllrb.com
[markdown]:     http://daringfireball.net/projects/markdown/
[gh-fork]:      https://help.github.com/articles/fork-a-repo/
[gh-pullreq]:   https://help.github.com/articles/using-pull-requests/
[gh-gist]:      https://help.github.com/articles/about-gists/
[kramdown]:     http://kramdown.gettalong.org/index.html
[repositorio]:  https://github.com/maratonago/maratonago.github.io
