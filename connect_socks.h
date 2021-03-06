#define _GNU_SOURCE
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <dlfcn.h>
#ifndef CONNECT_SOCKS_H
#define CONNECT_SOCKS_H
extern int proxy_fds[];
extern int len_proxy_fds;
struct addrinfo *get_socks_addr(char *host, char *port);
int get_socks_fd(struct addrinfo *res);
int connect_socks(int sockfd, struct addrinfo *res);
int set_socks_addr(char *host, char *port);
extern char * socks_host;
extern char * socks_port;
void set_socks_info(char * host, char * port);
#endif
