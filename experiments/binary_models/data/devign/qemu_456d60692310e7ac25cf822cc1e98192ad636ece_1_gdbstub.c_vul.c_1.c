int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    char VAR4[128];
    VAR5 *VAR6 = NULL;
    VAR5 *VAR7;
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
            struct sigaction VAR8;
            memset(&VAR8, 0, sizeof(VAR8));
            VAR8.VAR9 = VAR10;
            FUN3(VAR11, &VAR8, NULL);
        }
        VAR6 = FUN4("", VAR1, NULL);
        if (!VAR6)
            return -1;
        FUN5(VAR6, VAR12, VAR13, VAR14, NULL);
    }
    VAR3 = VAR15;
    if (!VAR3)
    {
        VAR3 = FUN6(sizeof(VAR2));
        VAR15 = VAR3;
        FUN7(VAR16, NULL);
        VAR7 = FUN6(sizeof(*VAR7));
        VAR7->VAR17 = VAR18;
        FUN8(VAR7, 0);
    }
    else
    {
        if (VAR3->VAR6)
            FUN9(VAR3->VAR6);
        VAR7 = VAR3->VAR7;
        memset(VAR3, 0, sizeof(VAR2));
    }
    VAR3->VAR19 = VAR20;
    VAR3->VAR21 = VAR20;
    VAR3->VAR6 = VAR6;
    VAR3->VAR22 = VAR6 ? VAR23 : VAR24;
    VAR3->VAR7 = VAR7;
    VAR3->VAR25 = NULL;
    return 0;