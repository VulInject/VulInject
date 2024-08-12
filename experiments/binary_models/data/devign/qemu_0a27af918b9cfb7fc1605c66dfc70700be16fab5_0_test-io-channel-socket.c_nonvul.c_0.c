static int FUN1(bool *VAR1, bool *VAR2)
{
    struct sockaddr_in VAR3 = {
        .VAR4 = VAR5,
        .VAR6 = {.VAR7 = FUN2(VAR8)},
    };
    struct sockaddr_in6 VAR9 = {
        .VAR10 = VAR11,
        .VAR12 = VAR13,
    };
    if (FUN3((struct VAR14 *)&VAR3, sizeof(VAR3), VAR1) < 0)
    {
        return -1;
    }
    if (FUN3((struct VAR14 *)&VAR9, sizeof(VAR9), VAR2) < 0)
    {
        return -1;
    }
    return 0;
}