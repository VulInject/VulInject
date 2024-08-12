FUN1(const char *VAR1, char **VAR2, int *VAR3)
{
    struct VAR4 *VAR5;
    struct addrinfo VAR6;
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR7 = VAR8;
    FUN2(getaddrinfo(VAR1, NULL, &VAR6, &VAR5) == 0);
    *VAR3 = VAR5->VAR9;
    *VAR2 = FUN3(char, *VAR3);
    memcpy(*VAR2, VAR5->VAR10, *VAR3);