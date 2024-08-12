static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    struct sockaddr_in VAR10;
    struct in_addr VAR11, *VAR12;
    if (FUN2(&VAR10, VAR5) < 0)
        return -1;
    if (VAR6 != NULL)
    {
        if (FUN3(VAR6, &VAR11) == 0)
            return -1;
        VAR12 = &VAR11;
    }
    else
    {
        VAR12 = NULL;
    }
    VAR9 = FUN4(&VAR10, VAR12);
    if (VAR9 < 0)
        return -1;
    VAR8 = FUN5(VAR2, VAR3, VAR4, VAR9, 0);
    if (!VAR8)
        return -1;
    VAR8->VAR13 = VAR10;
    snprintf(VAR8->VAR14.VAR15, sizeof(VAR8->VAR14.VAR15), "", FUN6(VAR10.VAR16), FUN7(VAR10.VAR17));
    return 0;
}