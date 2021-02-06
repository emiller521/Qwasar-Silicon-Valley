#include "tar.h"

/*int main(int ac, char **av)
{
    int fd;
    t_elem *elem;
    t_options *opt;


    opt = read_options(ac, av);
    //checking_input(av);  
}
*/

int main (int ac, char **av)
{
    t_options *options;

    options = read_options(ac, av);
    print_options(options);
    if (options->opt_c && options->opt_f)
    {
        create_archive(options->archive_name, options->file_list);
    }
/*    if (options->opt_x && options->opt_f)
    {
        extract_archive(options->archive_name);
    }    
    */
}