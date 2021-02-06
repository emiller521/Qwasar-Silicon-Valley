#include "tar.h"

int                set_f_option(t_options *opt, int cur_pos, int ac, char **av) {
    opt->opt_f = TRUE;
    opt->archive_name = av[cur_pos + 1];

    return (cur_pos + 1);
}

int                set_x_option(t_options *opt, int cur_pos, int ac, char **av) {
    opt->opt_x = TRUE;
    if (opt->opt_c == TRUE)
        usage_error();
    if (opt->opt_t == TRUE)
        usage_error();
    if (opt->opt_u == TRUE)
        usage_error();
    return cur_pos;
}

int                set_c_option(t_options *opt, int cur_pos, int ac, char **av) {
    opt->opt_c = TRUE;
    if (opt->opt_x == TRUE)
        usage_error();
    if (opt->opt_t == TRUE)
        usage_error();
    if (opt->opt_u == TRUE)
        usage_error();
    return cur_pos;
}