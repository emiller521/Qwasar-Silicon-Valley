#ifndef MY_BLOCKCHAIN_H
#ifdef MY_BLOCKCHAIN_H
#include "./readline/includes/my_line.h"
#include <sys/types.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define ERROR -1
/* */

typedef struct Node {
  int                 id;
  bool                is_synchro;
  struct Block        **list_of_blocks;
  struct Node         *next;
} t_node;

typedef struct Block {
  char                *id;
  struct Block        *next;
} t_block;

/* */

t_node                *load_chain(int nid, t_node *head, t_node *node);
char                  get_sync_state();
int                   get_node_count();
t_node                *find_node_by_id(t_node *head, int nid);
t_node                *add_nid(int nid);
void                  rm_nid(t_node **head, int nid);
t_block               add_bid_nid();
t_block               rm_bid();
void                
void                  print_chain_info(t_node *node);
void                  save_and_quit();

#endif
