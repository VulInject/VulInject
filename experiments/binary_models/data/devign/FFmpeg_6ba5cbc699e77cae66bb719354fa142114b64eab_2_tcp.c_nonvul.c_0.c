static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    struct sockaddr_in VAR5;
    char VAR6[1024], *VAR7;
    int VAR8, VAR9 = -1;
    VAR10 *VAR11;
    const char *VAR12;
    fd_set VAR13;
    int VAR14, VAR15;
    struct timeval VAR16;
    socklen_t VAR17;
    char VAR18[1024], VAR19[1024], VAR20[1024];
    FUN2(VAR18, sizeof(VAR18), NULL, 0, VAR6, sizeof(VAR6), &VAR8, VAR19, sizeof(VAR19), VAR3);
    if (strcmp(VAR18, ""))
        goto VAR21;
    if ((VAR7 = strchr(VAR6, '')))
    {
        strcpy(VAR20, VAR7 + 1);
        strcpy(VAR6, VAR20);
    }
    VAR11 = FUN3(sizeof(VAR10));
    if (!VAR11)
        return -VAR22;
    VAR2->VAR23 = VAR11;
    if (VAR8 <= 0 || VAR8 >= 65536)
        goto VAR21;
    VAR5.VAR24 = VAR25;
    VAR5.VAR26 = FUN4(VAR8);
    if (FUN5(&VAR5.VAR27, VAR6) < 0)
        goto VAR21;
    VAR9 = socket(VAR28, VAR29, 0);
    if (VAR9 < 0)
        goto VAR21;
    FUN6(VAR9, VAR30, VAR31);
VAR32:
    VAR15 = connect(VAR9, (struct VAR33 *)&VAR5, sizeof(VAR5));
    if (VAR15 < 0)
    {
        if (VAR34 == VAR35)
            goto VAR32;
        if (VAR34 != VAR36)
            goto VAR21;
        for (;;)
        {
            if (FUN7())
            {
                VAR15 = -VAR35;
                goto VAR37;
            }
            VAR14 = VAR9;
            FUN8(&VAR13);
            FUN9(VAR9, &VAR13);
            VAR16.VAR38 = 0;
            VAR16.VAR39 = 100 * 1000;
            VAR15 = FUN10(VAR14 + 1, NULL, &VAR13, NULL, &VAR16);
            if (VAR15 > 0 && FUN11(VAR9, &VAR13))
                break;
        }
        VAR17 = sizeof(VAR15);
        FUN12(VAR9, VAR40, VAR41, &VAR15, &VAR17);
        if (VAR15 != 0)
            goto VAR21;
    }
    VAR11->VAR9 = VAR9;
    return 0;
VAR21:
    VAR15 = VAR42;
VAR37:
    if (VAR9 >= 0)
        close(VAR9);
    FUN13(VAR11);
    return VAR15;
}