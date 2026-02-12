static int net_open(char const *node, char const *service) {
int sd;
int status;
struct addrinfo *ai_return;
struct addrinfo *ai_list;


struct addrinfo ai_hints = {.ai_family = AF_INET, .ai_socktype = SOCK_STREAM};

status = getaddrinfo(node, service, &ai_hints, &ai_return);
if (status != 0) {
INFO("apcups plugin: getaddrinfo failed: %s",
(status == EAI_SYSTEM) ? STRERRNO : gai_strerror(status));
return -1;
}


sd = -1;
for (ai_list = ai_return; ai_list != NULL; ai_list = ai_list->ai_next) {
sd = socket(ai_list->ai_family, ai_list->ai_socktype, ai_list->ai_protocol);
if (sd >= 0)
break;
}


if (sd < 0) {
DEBUG("apcups plugin: Unable to open a socket");
freeaddrinfo(ai_return);
return -1;
}

status = connect(sd, ai_list->ai_addr, ai_list->ai_addrlen);

freeaddrinfo(ai_return);

if (status != 0) 
{
INFO("apcups plugin: connect failed: %s", STRERRNO);
close(sd);
return -1;
}

DEBUG("apcups plugin: Done opening a socket %i", sd);

return sd;
} 