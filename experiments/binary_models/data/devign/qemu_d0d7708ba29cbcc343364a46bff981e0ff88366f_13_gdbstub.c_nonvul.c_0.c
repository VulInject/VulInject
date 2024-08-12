int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    char VAR4[128];
    VAR5 *VAR6 = NULL;
    VAR5 *VAR7;
    ChardevCommon VAR8 = {0};
    if (!VAR1)
        return -1;
    if (strcmp(VAR1, "") != 0)
    {
        if (FUN2(VAR1, "", NULL))
        {
            snprintf(VAR4, sizeof(VAR4), "", VAR1);
            VAR1 = VAR4;
        }
        else if (strcmp(VAR1, "") == 0)
        {
            struct sigaction VAR9;
            memset(&VAR9, 0, sizeof(VAR9));
            VAR9.VAR10 = VAR11;
            FUN3(VAR12, &VAR9, NULL);
        }
        VAR6 = FUN4("", VAR1, NULL);
        if (!VAR6)
            return -1;
        FUN5(VAR6);
        FUN6(VAR6, VAR13, VAR14, VAR15, NULL);
    }
    VAR3 = VAR16;
    if (!VAR3)
    {
        VAR3 = FUN7(sizeof(VAR2));
        VAR16 = VAR3;
        FUN8(VAR17, NULL);
        VAR7 = FUN9(&VAR8, &VAR18);
        VAR7->VAR19 = VAR20;
        FUN10(VAR7, 0);
    }
    else
    {
        if (VAR3->VAR6)
            FUN11(VAR3->VAR6);
        VAR7 = VAR3->VAR7;
        memset(VAR3, 0, sizeof(VAR2));
    }
    VAR3->VAR21 = VAR22;
    VAR3->VAR23 = VAR22;
    VAR3->VAR6 = VAR6;
    VAR3->VAR24 = VAR6 ? VAR25 : VAR26;
    VAR3->VAR7 = VAR7;
    VAR3->VAR27 = NULL;
    return 0;
}