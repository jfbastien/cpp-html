#ifndef __﹤html﹥__
#define __﹤html﹥__

#include <stdio.h>
#include <string>
#include <vector>

struct indent {
    inline static int indentation = 0;

    indent()
    {
        ++indentation;
    }

    ~indent()
    {
        --indentation;
    }

    static void print_indent()
    {
        for(auto i = indentation; i > 0; --i) {
            fputs("    ", stdout);
        }
    }
};


struct list_item {
    template<class... StrParts>
    list_item(const char* thing)
        : text{thing}
    {
    }

    void print(std::string s)
    {
        indent::print_indent();
        printf("%s\t%s", s.c_str(), text.c_str());
    }

    std::string text;
};

struct ignore_me_t {};
auto ignore_me = ignore_me_t{};

struct ordered_list {
    std::vector<list_item> items;
    indent ind;

    template<class... ListItems>
    ordered_list(ignore_me_t, ListItems... listItemsPack)
        : items{listItemsPack...}
    {
        for(int i{}; i != items.size(); ++i) {
            items[i].print(std::to_string(i + 1));
            puts("");
        }
        puts("");
    }
};

struct unordered_list {
    std::vector<list_item> items;
    indent ind;

    template<class... ListItems>
    unordered_list(ignore_me_t, ListItems... listItemsPack)
        : items{listItemsPack...}
    {
        for(int i{}; i != items.size(); ++i) {
            items[i].print("*");
            puts("");
        }
        puts("");
    }
};

#define ﹤html﹥ int main() {
#define ﹤／html﹥ return 0; }
#define ﹤head﹥ 
#define ﹤／head﹥ 
#define ﹤body﹥ 
#define ﹤／body﹥ 
#define ﹤p﹥(...) puts(#__VA_ARGS__
#define ﹤／p﹥ );
#define ﹤ol﹥ ordered_list {ignore_me
#define ﹤／ol﹥ };
#define ﹤ul﹥ unordered_list {ignore_me
#define ﹤／ul﹥ };
#define ﹤li﹥(...) , list_item{#__VA_ARGS__
#define ﹤／li﹥ }

#endif
