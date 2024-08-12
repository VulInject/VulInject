static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024], VAR9[1024];
    char VAR10[1024], VAR11[1024], *VAR12;
    char VAR13[100];
    int VAR14, VAR15 = 0, VAR16 = 0;
    HTTPAuthType VAR17;
    char *VAR18;
    int VAR19;
    if (VAR6->VAR20 == 1)
        VAR2->VAR21 = 0;
    else
        VAR2->VAR21 = 1;
    FUN2(NULL, 0, VAR10, sizeof(VAR10), VAR8, sizeof(VAR8), &VAR14, VAR11, sizeof(VAR11), VAR3);
    FUN3(VAR9, sizeof(VAR9), NULL, NULL, VAR8, VAR14, NULL);
    VAR12 = VAR11;
    if (*VAR12 == '')
        VAR12++;
    FUN3(VAR13, sizeof(VAR13), "", NULL, VAR8, VAR14, NULL);
VAR22:
    VAR15 = FUN4(&VAR6->VAR23, VAR13, VAR24, &VAR2->VAR25, NULL);
    if (VAR15 < 0)
        return VAR15;
    VAR18 = FUN5(&VAR6->VAR26, VAR10, VAR12, "");
    snprintf(VAR6->VAR27, sizeof(VAR6->VAR27), ""
                                           ""
                                           ""
                                           ""
                                           "",
             VAR12, VAR9, VAR18 ? "" : "", VAR18 ? VAR18 : "");
    FUN6(&VAR18);
    if ((VAR15 = FUN7(VAR6->VAR23, VAR6->VAR27, strlen(VAR6->VAR27))) < 0)
        goto VAR28;
    VAR6->VAR29 = VAR6->VAR27;
    VAR6->VAR30 = VAR6->VAR27;
    VAR6->VAR31 = 0;
    VAR6->VAR32 = -1;
    VAR17 = VAR6->VAR26.VAR33;
    VAR15 = FUN8(VAR2, &VAR19);
    if (VAR15 < 0)
        goto VAR28;
    VAR16++;
    if (VAR6->VAR34 == 407 && (VAR17 == VAR35 || VAR6->VAR26.VAR36) && VAR6->VAR26.VAR33 != VAR35 && VAR16 < 2)
    {
        FUN9(&VAR6->VAR23);
        goto VAR22;
    }
    if (VAR6->VAR34 < 400)
        return 0;
    VAR15 = FUN10(VAR37);
VAR28:
    FUN11(VAR2);
    return VAR15;
}