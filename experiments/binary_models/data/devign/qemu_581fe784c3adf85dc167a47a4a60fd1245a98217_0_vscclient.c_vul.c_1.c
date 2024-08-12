FUN1(const char *VAR1, const char *VAR2)
{
    struct addrinfo VAR3;
    struct VAR4 *VAR5;
    int VAR6, VAR7;
    VAR7 = FUN2(VAR8, VAR9, 0);
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
        return -1;
    }
    if (connect(VAR7, VAR5->VAR16, VAR5->VAR17) < 0)
    {
        fprintf(VAR10, "");
        return -1;
    }
    if (VAR18)
    {
        FUN3("", sizeof(VAR19));
    }
    return VAR7;
}