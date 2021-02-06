#include "tar.h"

void                usage_error() {
    my_putstr("Usage:\n");
    my_putstr("    List:    tar -tf <archive-filename>\n");
    my_putstr("    Extract: tar -xf <archive-filename>\n");
    my_putstr("    Create:  tar -cf <archive-filename> [filenames...]\n");
    my_putstr("    Help?  ....  Google :)\n");
    exit(0);
}
