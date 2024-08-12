static int FUN1(const char *VAR1, const char *VAR2)
{
    char VAR3[VAR4], VAR5[VAR6];
    int VAR7, VAR8;
    struct addrinfo VAR9, *VAR10, *VAR11;
    if (!VAR1)
    {
        VAR1 = VAR12;
        VAR2 = VAR13;
    }
    memset(&VAR9, 0, sizeof(VAR9));
    VAR9.VAR14 = VAR15;
    VAR8 = getaddrinfo(VAR1, VAR2, &VAR9, &VAR11);
    if (VAR8)
    {
        FUN2("", VAR1, strerror(VAR16));
        return -VAR16;
    }
    for (VAR10 = VAR11; VAR10; VAR10 = VAR10->VAR17)
    {
        VAR8 = getnameinfo(VAR10->VAR18, VAR10->VAR19, VAR3, sizeof(VAR3), VAR5, sizeof(VAR5), VAR20 | VAR21);
        if (VAR8)
        {
            continue;
        }
        VAR7 = socket(VAR10->VAR22, VAR10->VAR14, VAR10->VAR23);
        if (VAR7 < 0)
        {
            continue;
        }
    VAR24:
        VAR8 = connect(VAR7, VAR10->VAR18, VAR10->VAR19);
        if (VAR8 < 0)
        {
            if (VAR16 == VAR25)
            {
                goto VAR24;
            }
            break;
        }
        FUN3("", VAR1, VAR2);
        goto VAR26;
    }
    VAR7 = -VAR16;
    FUN2("", VAR1, VAR2);
VAR26:
    FUN4(VAR11);
    return VAR7;