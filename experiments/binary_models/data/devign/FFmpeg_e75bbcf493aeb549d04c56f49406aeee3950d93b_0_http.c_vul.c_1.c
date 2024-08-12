static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024], VAR9[1024];
    char VAR10[1024], VAR11[1024], *VAR12;
    char VAR13[1024], VAR14[100];
    int VAR15, VAR16 = 0;
    HTTPAuthType VAR17;
    char *VAR18;
    VAR2->VAR19 = 1;
    FUN2(NULL, 0, VAR10, sizeof(VAR10), VAR8, sizeof(VAR8), &VAR15, VAR11, sizeof(VAR11), VAR3);
    FUN3(VAR9, sizeof(VAR9), NULL, NULL, VAR8, VAR15, NULL);
    VAR12 = VAR11;
    if (*VAR12 == '')
        VAR12++;
    FUN3(VAR14, sizeof(VAR14), "", NULL, VAR8, VAR15, NULL);
VAR20:
    VAR16 = FUN4(&VAR6->VAR21, VAR14, VAR22, &VAR2->VAR23, NULL);
    if (VAR16 < 0)
        return VAR16;
    VAR18 = FUN5(&VAR6->VAR24, VAR10, VAR12, "");
    snprintf(VAR6->VAR25, sizeof(VAR6->VAR25), ""
                                           ""
                                           ""
                                           ""
                                           "",
             VAR12, VAR9, VAR18 ? "" : "", VAR18 ? VAR18 : "");
    FUN6(&VAR18);
    if ((VAR16 = FUN7(VAR6->VAR21, VAR6->VAR25, strlen(VAR6->VAR25))) < 0)
        goto VAR26;
    VAR6->VAR27 = VAR6->VAR25;
    VAR6->VAR28 = VAR6->VAR25;
    VAR6->VAR29 = 0;
    VAR6->VAR30 = -1;
    VAR17 = VAR6->VAR24.VAR31;
    for (;;)
    {
        int VAR32;
        if (FUN8(VAR6, VAR13, sizeof(VAR13)) < 0)
        {
            VAR16 = FUN9(VAR33);
            goto VAR26;
        }
        FUN10(VAR2, "", VAR13);
        VAR16 = FUN11(VAR2, VAR13, VAR6->VAR29, &VAR32);
        if (VAR16 < 0)
            goto VAR26;
        if (VAR16 == 0)
            break;
        VAR6->VAR29++;
    }
    if (VAR6->VAR34 == 407 && VAR17 == VAR35 && VAR6->VAR24.VAR31 != VAR35)
    {
        FUN12(VAR6->VAR21);
        VAR6->VAR21 = NULL;
        goto VAR20;
    }
    if (VAR6->VAR34 < 400)
        return 0;
    VAR16 = FUN9(VAR33);
VAR26:
    FUN13(VAR2);
    return VAR16;
}