static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    struct sockaddr_in VAR5;
    int VAR6, VAR7 = -1;
    VAR8 *VAR9 = NULL;
    fd_set VAR10;
    int VAR11, VAR12;
    struct timeval VAR13;
    socklen_t VAR14;
    char VAR15[1024], VAR16[1024], VAR17[1024], VAR18[1024], *VAR19;
    if (!FUN2())
        return FUN3(VAR20);
    FUN4(VAR16, sizeof(VAR16), NULL, 0, VAR15, sizeof(VAR15), &VAR6, VAR17, sizeof(VAR17), VAR3);
    if (strcmp(VAR16, "") || VAR6 <= 0 || VAR6 >= 65536)
        return FUN3(VAR21);
    if ((VAR19 = strchr(VAR15, '')))
    {
        strcpy(VAR18, VAR19 + 1);
        strcpy(VAR15, VAR18);
    }
    VAR5.VAR22 = VAR23;
    VAR5.VAR24 = FUN5(VAR6);
    if (FUN6(&VAR5.VAR25, VAR15) < 0)
        return FUN3(VAR20);
    VAR7 = socket(VAR23, VAR26, 0);
    if (VAR7 < 0)
        return FUN3(VAR20);
    FUN7(VAR7, 1);
VAR27:
    VAR12 = connect(VAR7, (struct VAR28 *)&VAR5, sizeof(VAR5));
    if (VAR12 < 0)
    {
        if (FUN8() == FUN9(VAR29))
            goto VAR27;
        if (FUN8() != FUN9(VAR30) && FUN8() != FUN9(VAR31))
            goto VAR32;
        for (;;)
        {
            if (FUN10())
            {
                VAR12 = FUN3(VAR29);
                goto VAR33;
            }
            VAR11 = VAR7;
            FUN11(&VAR10);
            FUN12(VAR7, &VAR10);
            VAR13.VAR34 = 0;
            VAR13.VAR35 = 100 * 1000;
            VAR12 = FUN13(VAR11 + 1, NULL, &VAR10, NULL, &VAR13);
            if (VAR12 > 0 && FUN14(VAR7, &VAR10))
                break;
        }
        VAR14 = sizeof(VAR12);
        FUN15(VAR7, VAR36, VAR37, &VAR12, &VAR14);
        if (VAR12 != 0)
            goto VAR32;
    }
    VAR9 = FUN16(sizeof(VAR8));
    if (!VAR9)
        return FUN3(VAR38);
    VAR2->VAR39 = VAR9;
    VAR2->VAR40 = 1;
    VAR9->VAR7 = VAR7;
    return 0;
VAR32:
    VAR12 = FUN3(VAR20);
VAR33:
    if (VAR7 >= 0)
        FUN17(VAR7);
    return VAR12;
}