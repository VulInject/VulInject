static int FUN1(const char *VAR1, bool *VAR2)
{
    int VAR3 = -1;
    struct addrinfo VAR4, *VAR5 = NULL;
    int VAR6;
    int VAR7 = -1;
    memset(&VAR4, 0, sizeof(VAR4));
    VAR4.VAR8 = VAR9 | VAR10 | VAR11;
    VAR4.VAR12 = VAR13;
    VAR4.VAR14 = VAR15;
    VAR6 = getaddrinfo(VAR1, NULL, &VAR4, &VAR5);
    if (VAR6 != 0)
    {
        if (VAR6 == VAR16 || VAR6 == VAR17)
        {
            *VAR2 = false;
            goto VAR18;
        }
        goto VAR19;
    }
    VAR3 = FUN2(VAR5->VAR12, VAR5->VAR14, VAR5->VAR20);
    if (VAR3 < 0)
    {
        goto VAR19;
    }
    if (FUN3(VAR3, VAR5->VAR21, VAR5->VAR22) < 0)
    {
        if (VAR23 == VAR24)
        {
            *VAR2 = false;
            goto VAR18;
        }
        goto VAR19;
    }
    *VAR2 = true;
VAR18:
    VAR7 = 0;
VAR19:
    if (VAR3 != -1)
    {
        close(VAR3);
    }
    if (VAR5)
    {
        FUN4(VAR5);
    }
    return VAR7;
}