#include <linux/string.h>
#include <linux/fantasma.h>

static const char *fantasma_names[] = {
    "magisk",
    "kernelsu",
    "ksu",
    "zygisk",
    "apatch",
    "su"
};

int fantasma_match(const char *name)
{
    int i;

    if (!name)
        return 0;

    for (i = 0; i < ARRAY_SIZE(fantasma_names); i++) {
        if (strstr(name, fantasma_names[i]))
            return 1;
    }

    return 0;
}
EXPORT_SYMBOL_GPL(fantasma_match);
