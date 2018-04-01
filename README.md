C++ ﹤HTML﹥
==========

The Web is all about frameworks. You can't go a week without a new hot thing
coming out. C++ is really missing on this trend, and that's a shame. 😔

After having worked on
[NaCl / PNaCl](https://en.wikipedia.org/wiki/Google_Native_Client),
[WebAssembly](https://en.wikipedia.org/wiki/WebAssembly), I've determined that
we should try something new and interesting. Instead of putting C++ into the
browser, let's put HTML into  the C++.

This is a personal project and I've only outlined the basic idea. I'm sure that
the amazing thing that is 🕺 Open Source 💃 will bring me many amazing pull
requests. I can see this framework going far.

[Here](https://github.com/jfbastien/cpp-html/blob/master/hello.html.cpp)'s the
classic `Hello, World!` example in C++ ﹤HTML﹥:

```cpp
#include "cpp.html.h"

﹤html﹥
    ﹤head﹥
    ﹤／head﹥
    ﹤body﹥
        ﹤p﹥(Hello, World!)﹤／p﹥
    ﹤／body﹥
﹤／html﹥
```
