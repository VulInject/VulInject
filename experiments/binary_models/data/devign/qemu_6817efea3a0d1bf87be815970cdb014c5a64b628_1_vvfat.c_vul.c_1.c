static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(&(VAR2->VAR5), VAR3);
    VAR6 *VAR7;
    const char *VAR8 = VAR5->VAR9;
    int VAR10 = VAR5->VAR11;
    int VAR12 = VAR5->VAR13.VAR14.VAR15;
    VAR4 *VAR16 = (VAR4 *)(VAR12 >= 0 ? FUN2(&(VAR2->VAR5), VAR12) : NULL);
    int VAR17 = VAR16 ? VAR16->VAR11 : -1;
    VAR18 *VAR14 = FUN3(VAR8);
    struct VAR19 *VAR20;
    int VAR21;
    assert(VAR5->VAR22 & VAR23);
    if (!VAR14)
    {
        VAR5->VAR24 = VAR5->VAR11;
        return -1;
    }
    VAR21 = VAR5->VAR13.VAR14.VAR25 = VAR10 == 0 ? 0 : VAR2->VAR26.VAR27;
    if (VAR10 != 0)
    {
        (void)FUN4(VAR2, VAR21, "", 1);
        (void)FUN4(VAR2, VAR21, "", 1);
    }
    while ((VAR20 = FUN5(VAR14)))
    {
        unsigned int VAR28 = strlen(VAR8) + 2 + strlen(VAR20->VAR29);
        char *VAR30;
        VAR6 *VAR7;
        struct stat VAR31;
        int VAR32 = !strcmp(VAR20->VAR29, "");
        int VAR33 = !strcmp(VAR20->VAR29, "");
        if (VAR10 == 0 && (VAR33 || VAR32))
            continue;
        VAR30 = FUN6(VAR28);
        snprintf(VAR30, VAR28, "", VAR8, VAR20->VAR29);
        if (FUN7(VAR30, &VAR31) < 0)
        {
            FUN8(VAR30);
            continue;
        }
        if (!VAR32 && !VAR33)
        {
            VAR7 = FUN4(VAR2, VAR21, VAR20->VAR29, 0);
        }
        else
        {
            VAR7 = FUN2(&(VAR2->VAR26), VAR32 ? VAR21 : VAR21 + 1);
        }
        VAR7->VAR34 = (FUN9(VAR31.VAR35) ? 0x10 : 0x20);
        VAR7->VAR36[0] = VAR7->VAR36[1] = 0;
        VAR7->VAR37 = FUN10(VAR31.VAR38, 1);
        VAR7->VAR39 = FUN10(VAR31.VAR38, 0);
        VAR7->VAR40 = FUN10(VAR31.VAR41, 0);
        VAR7->VAR42 = 0;
        VAR7->VAR43 = FUN10(VAR31.VAR44, 1);
        VAR7->VAR45 = FUN10(VAR31.VAR44, 0);
        if (VAR33)
            FUN11(VAR7, VAR17);
        else if (VAR32)
            FUN11(VAR7, VAR10);
        else
            VAR7->VAR11 = 0;
        if (VAR31.VAR46 > 0x7fffffff)
        {
            fprintf(VAR47, "", VAR30);
            FUN8(VAR30);
            FUN12(VAR14);
            return -2;
        }
        VAR7->VAR48 = FUN13(FUN9(VAR31.VAR35) ? 0 : VAR31.VAR46);
        if (!VAR32 && !VAR33 && (FUN9(VAR31.VAR35) || VAR31.VAR46))
        {
            VAR2->VAR49 = FUN14(&(VAR2->VAR5));
            VAR2->VAR49->VAR11 = 0;
            VAR2->VAR49->VAR24 = VAR31.VAR46;
            VAR2->VAR49->VAR50 = VAR2->VAR26.VAR27 - 1;
            VAR2->VAR49->VAR51 = -1;
            if (FUN9(VAR31.VAR35))
            {
                VAR2->VAR49->VAR22 = VAR23;
                VAR2->VAR49->VAR13.VAR14.VAR15 = VAR3;
            }
            else
            {
                VAR2->VAR49->VAR22 = VAR52;
                VAR2->VAR49->VAR13.VAR53.VAR54 = 0;
            }
            VAR2->VAR49->VAR9 = VAR30;
            VAR2->VAR49->VAR55 = (VAR31.VAR35 & (VAR56 | VAR57 | VAR58)) == 0;
        }
        else
        {
            FUN8(VAR30);
        }
    }
    FUN12(VAR14);
    while (VAR2->VAR26.VAR27 % (0x10 * VAR2->VAR59))
    {
        VAR6 *VAR7 = FUN14(&(VAR2->VAR26));
        memset(VAR7, 0, sizeof(VAR6));
    }
    if (VAR3 == 0 && VAR2->VAR26.VAR27 < VAR60)
    {
        int VAR61 = VAR2->VAR26.VAR27;
        FUN15(&(VAR2->VAR26), VAR60 - 1);
        VAR2->VAR26.VAR27 = VAR60;
        memset(FUN2(&(VAR2->VAR26), VAR61), 0, (VAR60 - VAR61) * sizeof(VAR6));
    }
    VAR5 = FUN2(&(VAR2->VAR5), VAR3);
    VAR10 += (VAR2->VAR26.VAR27 - VAR5->VAR13.VAR14.VAR25) * 0x20 / VAR2->VAR62;
    VAR5->VAR24 = VAR10;
    VAR7 = FUN2(&(VAR2->VAR26), VAR5->VAR50);
    FUN11(VAR7, VAR5->VAR11);
    return 0;
}