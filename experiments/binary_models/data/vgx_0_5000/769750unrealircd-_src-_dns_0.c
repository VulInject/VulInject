struct hostent *unreal_create_hostent(const char *name, const char *ip);
static void unrealdns_freeandremovereq(DNSReq *r);
void unrealdns_removecacherecord(DNSCache *c);


extern void proceed_normal_client_handshake(Client *client, struct hostent *he);



ares_channel resolver_channel; 

DNSStats dnsstats;

static DNSReq *requests = NULL; 

static DNSCache *cache_list = NULL; 
static DNSCache *cache_hashtbl[DNS_HASH_SIZE]; 

static unsigned int unrealdns_num_cache = 0; 

static char siphashkey_dns_ip[SIPHASH_KEY_LENGTH];

static void unrealdns_io_cb(int fd, int revents, void *data)
{
ares_socket_t read_fd, write_fd;
FDEntry *fde;

read_fd = write_fd = ARES_SOCKET_BAD;
fde = &fd_table[fd];

if (revents & FD_SELECT_READ)
read_fd = fde->fd;

if (revents & FD_SELECT_WRITE)
write_fd = fde->fd;

ares_process_fd(resolver_channel, read_fd, write_fd);
}