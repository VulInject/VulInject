static struct VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    struct addrinfo VAR6, *VAR7;
    int VAR8;
    VAR4 *VAR9 = NULL;
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR10 = VAR11 | VAR12 | VAR13;
    VAR6.VAR14 = FUN2(VAR3, &VAR9);
    VAR6.VAR15 = VAR16;
    if (VAR9)
    {
        FUN3(VAR5, VAR9);
        return NULL;
    }
    if (VAR3->VAR17 == NULL || VAR3->VAR18 == NULL)
    {
        FUN4(VAR5, "");
        return NULL;
    }
    VAR8 = getaddrinfo(VAR3->VAR17, VAR3->VAR18, &VAR6, &VAR7);
    if (VAR8 != 0)
    {
        FUN4(VAR5, "", VAR3->VAR17, VAR3->VAR18, FUN5(VAR8));
        return NULL;
    }
    return VAR7;
}