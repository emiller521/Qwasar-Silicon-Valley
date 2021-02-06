/*
**
*/
#ifndef TAR_H
#define TAR_H
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0

/*
** print full list of filenames
   fill 
*/
typedef struct stat *stats;
typedef struct dirent *dp;
typedef struct file *filp;

typedef struct s_elem {
    char name[100];               /*   0 */
    char mode[8];                 /* 100 */
    char uid[8];                  /* 108 */
    char gid[8];                  /* 116 */
    char size[12];                /* 124 */
    char mtime[12];               /* 136 */
    char chksum[8];               /* 148 */
    char typeflag;                /* 156 */
    char linkname[100];           /* 157 */
    char magic[6];                /* 257 */
    char version[2];              /* 263 */
    char uname[32];               /* 265 */
    char gname[32];               /* 297 */
    char devmajor[8];             /* 329 */
    char devminor[8];             /* 337 */
    char prefix[155];             /* 345 */
    struct s_elem *next;
} t_elem;


typedef struct s_options {
    int opt_c; //Creates archive file which holds specific items 
    int opt_r; //Creates archive file but only adds new files
    int opt_t; //List all the content of the archive file
    int opt_u; //Only adds files that have been create after the files that are already added (time modification)
    int opt_x; //Extracts files from archive
    int opt_f; /*

Option -f is used to read or write an archive from a

    */
    char *archive_name; //Storing the archive name of the file found after the 'f' option
    t_elem *file_list; //List that holds the file name of all the individual files that you will need to grab info for
} t_options;


/*
**
*/
t_options	            *read_options(int, char **);
void	                opt_activated(int, char **);
t_options	            *init_opt();
int	                    is_an_options(char c);
void                    my_bzero(char *, int size);
void                    my_putstr(char *);
void                    my_putchar(char c);
void	                usage_error();
void                    print_options(t_options *);
char*                   bool_to_str(int value);
void	                create_archive(char *, t_elem *);
int                     do_option(t_options *opt, int cur_pos, int ac, char **av);
int                     set_c_option(t_options *opt, int cur_pos, int ac, char **av);
int                     set_f_option(t_options *opt, int cur_pos, int ac, char **av);
int                     set_u_option(t_options *opt, int cur_pos, int ac, char **av);
int                     set_t_option(t_options *opt, int cur_pos, int ac, char **av);
int                     set_r_option(t_options *opt, int cur_pos, int ac, char **av);
int                     set_x_option(t_options *opt, int cur_pos, int ac, char **av);





#endif