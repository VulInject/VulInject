sockaddr_t str2sockaddr(const char *address, const char *port) {
struct addrinfo *ai, hint = {0};
sockaddr_t result = {0};
int err;

hint.ai_family = AF_UNSPEC;
hint.ai_flags = AI_NUMERICHOST;
hint.ai_socktype = SOCK_STREAM;

err = getaddrinfo(address, port, &hint, &ai);

if(err || !ai) {
logger(DEBUG_SCARY_THINGS, LOG_DEBUG, "Unknown type address %s port %s", address, port);
result.sa.sa_family = AF_UNKNOWN;
result.unknown.address = xstrdup(address);
result.unknown.port = xstrdup(port);
return result;
}

memcpy(&result, ai->ai_addr, ai->ai_addrlen);
freeaddrinfo(ai);

return result;
}