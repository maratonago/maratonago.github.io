---
layout: page
title: Sobre
permalink: /sobre/
---

`/** Todo. Write an about me page */`  
`#include <about.h>`  
`#include <blog.h>`  
`#include <awesome.h>`  

A simple Jekyll theme inspired by Google's new visual language, Material Design.

Here is some dummy text to be replaced with some non-dummy text later:

# Sola pensandum illos comitum estque fato petit

## Deforme sperata ita quae pennaeque sumat retinebat

Lorem markdownum cognoscit tacitaque supremis, grates auxilium purpura, vocalia
meae coniciunt remissos. Ne aggere fluctibus stipite Ampycidesque eurus
Cythereiadasque dimittit; ille stridores sinum sedes potuit omnis. Dextra nefas:
latet [cum](http://twitter.com/search?q=haskell) illa quoque est ponto usus
fuerat tepidique. Nomina inferias; per Philemon prius vanos faciam tincta
frustra. Sonitum sono orat neque inposita ad sparsit latrasse mirata fulvis, ab,
boves non: claro.

> Videt pronus *et factaque* Lycus deum est [omnibus medium
> hanc](http://www.wtfpl.net/) vincula effugies. Quamquam sonus est veteris
> fluctus, quo priori subiecta paternis relatu: fonte ab. Ut quaeritur corpore!
> Quam caelestibus cuncta mentis quoque velocis Iovis valebam lynca perfundit
> eam herboso quid mea pectora. Simul [illa est](http://www.uselessaccount.com/)
> actutum atque qui.

Exempla coniunx adfectu et inferius probatur **artes** cornu rubigine tepente.
Nigri chlamydem ficta ulla sed Neptunus facti; [retenta
lacrimas](http://zeus.ugent.be/) pontum pulvere forte! Et prioribus, montis:
gaudete herbas perdideris passa, breve sua lux. Est ave quantam iussus **vitam**
iacentes esse furit piceis, *medium*, quod.


## Ipsa trium quoque induruit nec

Moles illo mole; per mille caelesti magnae. Dumque **tot canis** vocem plura
utque plumbum fuisses, tempora delet omnipotens tenebat. Saepius tota.

1. Non Aeolidis oracla
2. Fore videam habet armandique Achille virtus
3. Vultus minuunt potuisse inquit
4. Generum haud
5. Frondes quo

Aequoris iam volucres leviter cervum, mori inplet vera, hanc fit, nutu desinat
procul [Orpheus](http://seenly.com/), lumina est. Retro corpus pertulerint
medio, **dant** notum *traxit* Athenae veras. Haec remittas, coniunx? Eris nervi
saucius bene dabant nominibus in sive, non mortalis, et. Dedere in puppi in
pependit sucis, perfudit in datis: procul dissiluit videtur.

Et modum accepti, longoque sibi iussere. Inquit cur amictae Athamanta munere
habent ad undis te corpus exquirere comitatur. Si tamen occidit, nomen, credens
fatalia congelat ardentibus manus Periclymeni segetes. Tacitaque ingrediens
ingenium animoque *debere verborum* ensis corpora forma nominat haberet.


{% highlight css %}
#container {
  float: left;
  margin: 0 -240px 0 0;
  width: 100%;
}
{% endhighlight %}

{% highlight html %}
{% raw %}
<nav class="pagination" role="navigation">
{% if page.previous %}
<a href="{{ site.url }}{{ page.previous.url }}" class="btn" title="{{ page.previous.title }}">Previous article</a>
{% endif %}
{% if page.next %}
<a href="{{ site.url }}{{ page.next.url }}" class="btn" title="{{ page.next.title }}">Next article</a>
{% endif %}
</nav><!-- /.pagination -->
{% endraw %}
{% endhighlight %}

{% highlight ruby %}
  module Jekyll
  class TagIndex < Page
  def initialize(site, base, dir, tag)
  @site = site
  @base = base
  @dir = dir
  @name = 'index.html'
  self.process(@name)
  self.read_yaml(File.join(base, '_layouts'), 'tag_index.html')
  self.data['tag'] = tag
  tag_title_prefix = site.config['tag_title_prefix'] || 'Tagged: '
  tag_title_suffix = site.config['tag_title_suffix'] || '&#8211;'
  self.data['title'] = "#{tag_title_prefix}#{tag}"
  self.data['description'] = "An archive of posts tagged #{tag}."
  end
  end
  end
{% endhighlight %}
