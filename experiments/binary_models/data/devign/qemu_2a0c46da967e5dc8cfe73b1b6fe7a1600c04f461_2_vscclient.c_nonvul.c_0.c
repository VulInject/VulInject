FUN1(const char *VAR1, const char *VAR2)
{
    struct addrinfo VAR3;
    struct VAR4 *VAR5;
    int VAR6, VAR7;
    VAR7 = socket(VAR8, VAR9, 0);
    if (VAR7 < 0)
    {
        fprintf(VAR10, "");
        return -1;
    }
    memset(&VAR3, 0, sizeof(struct VAR4));
    VAR3.VAR11 = VAR12;
    VAR3.VAR13 = VAR9;
    VAR3.VAR14 = 0;
    VAR3.VAR15 = 0;
    VAR6 = getaddrinfo(VAR1, VAR2, &VAR3, &VAR5);
    if (VAR6 != 0)
    {
        fprintf(VAR10, "");
        goto VAR16;
    }
    if (connect(VAR7, VAR5->VAR17, VAR5->VAR18) < 0)
    {
        fprintf(VAR10, "");
        goto VAR16;
    }
    if (VAR19)
    {
        FUN2("", sizeof(VAR20));
    }
    return VAR7;
VAR16:
    FUN3(VAR7);
    return -1;
}