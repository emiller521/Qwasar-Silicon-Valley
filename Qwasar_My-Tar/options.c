/*
**
*/
#include "tar.h"

/*
**
*/

/*void	opt_activated(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while(ac > i)
    {
        j = 1;
        while(av[i][0] == '-' && av[i][j])
        {
            if ((av[i][j] >= 'a' && av[i][j] <= 'z') || (av[i][j] >= 'A' && av[i][j] <= 'Z'))
                printf("Option activiated ->%c\n", av[i][j]);
            else if (!(av[i][j] >= 'a' && av[i][j] <= 'z') || (av[i][j] >= 'A' && av[i][j] <= 'Z'))
                printf("Invalid option :(\n");
            j++;
        }
        i++;
}
*/

t_options *init_opt() {
    t_options *opt;

    opt = (t_options *)malloc(sizeof(t_options));
    my_bzero((char *)opt, sizeof(t_options));

    return opt;     
}


int is_an_option(char c) //Function used to check and see if the beginning of argument found is a '-'
{
    if (c == '-') //If the first character is a '-' 
        return TRUE; //Return 1 for True
    return FALSE; //Return 0 for false is '-' is not found
}

int                do_option(t_options *opt, int cur_pos, int ac, char **av) {
    int	            j;
    char            *str;

    str = av[cur_pos];
    j = 0;
    while (str[j]) {
        if (str[j] == 'f')
            cur_pos = set_f_option(opt, cur_pos, ac, av);
        if (str[j] == 'c')
            cur_pos = set_c_option(opt, cur_pos, ac, av);
        if (str[j] == 'x')
            cur_pos = set_x_option(opt, cur_pos, ac, av);
        if (str[j] == 'u')
            cur_pos = set_u_option(opt, cur_pos, ac, av);
        if (str[j] == 't')
            cur_pos = set_t_option(opt, cur_pos, ac, av);
        if (str[j] == 'r')
            cur_pos = set_u_option(opt, cur_pos, ac, av);
        
        
        j++;
    }

    return cur_pos;
}

int         add_to_(t_options *opt, int cur_pos, int ac, char **av) {
    //something to do
    create_archive(av[cur_pos]);
    printf("next opt [%s]\n", av[cur_pos]);
    return cur_pos;
}
    

t_options	        *read_options(int ac, char **av)
{
    int i;
    t_options *opt;
     
    i = 1; //Set to 1 to avoid the excutable called to called
    opt = init_opt(); //Set the pointer to the struct equal to one full node
    while (i < ac)
    {
     /*   if (av[i][0] == 'c') {
            if(av[i][1] == 'f'){
                opt->archive_name = av[i + 1]; //Turning the file found after the 'f' option into our archive file
                read_files(&av); //Reading files found after archive file
            }
            else
                read_files(&av);
        }
        else 
        */
        if (is_an_option(av[i][0]) == TRUE) {
            i = do_option(opt, i, ac, av);
        }
        else
        {
            i = add_filename_to_list(opt->file_list, av[i]); 
        } 
        i++;
    }
    return (opt);
} 

void    print_options(t_options *opt)
{
    printf("Option C ->%s\n" , bool_to_str(opt->opt_c));
    printf("Option F ->%s\n" , bool_to_str(opt->opt_f));
    printf("Option X ->%s\n" , bool_to_str(opt->opt_x));
    printf("Option U ->%s\n" , bool_to_str(opt->opt_u));
    printf("Option R ->%s\n" , bool_to_str(opt->opt_r));
    printf("Option T ->%s\n" , bool_to_str(opt->opt_t));
}