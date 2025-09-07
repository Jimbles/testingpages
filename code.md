---
title: Code Browser
---

# Code Browser

Below are all `.c` files found in `/code`. Click **Download** for the raw file, or view the inlined source.

{% for file in site.static_files %}
  {% if file.path contains '/code/' and file.extname == '.c' %}
## {{ file.name }}
[Download]({{ file.path | relative_url }})

{% highlight c linenos %}
{% include_relative {{ file.path | remove_first: '/' }} %}
{% endhighlight %}
  {% endif %}
{% endfor %}
