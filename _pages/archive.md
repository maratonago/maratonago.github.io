---
layout: page
title: Arquivo
permalink: /arquivo/
---

## Postagens Anteriores

{% for post in site.posts %}
  * {{ post.date | date: "%Y/%m/%d" }} &raquo; [ {{ post.title }} ]({{ post.url }})
{% endfor %}