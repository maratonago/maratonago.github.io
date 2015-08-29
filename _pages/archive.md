---
layout: page
title: Arquivo
permalink: /arquivo/
---

## Postagens Antigas

{% for post in site.posts %}
  * {{ post.date | date_to_string }} &raquo; [ {{ post.title }} ]({{ post.url }})
{% endfor %}