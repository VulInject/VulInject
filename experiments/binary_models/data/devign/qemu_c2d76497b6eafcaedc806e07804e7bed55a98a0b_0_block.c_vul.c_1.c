int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7;
    char VAR8[VAR9];
    if (VAR4 & VAR10)
    {
        VAR1 *VAR11;
        int64_t VAR12;
        int VAR13 = 0;
        VAR5 *VAR14;
        VAR15 *VAR16;
        char VAR17[VAR9];
        VAR11 = FUN2("");
        VAR7 = FUN1(VAR11, VAR3, 0, VAR6);
        if (VAR7 < 0)
        {
            FUN3(VAR11);
            return VAR7;
        }
        VAR12 = FUN4(VAR11) & VAR18;
        if (VAR11->VAR6 && VAR11->VAR6->VAR19)
            VAR13 = 1;
        FUN3(VAR11);
        FUN5(VAR8, sizeof(VAR8));
        if (VAR13)
            snprintf(VAR17, sizeof(VAR17), "", VAR3);
        else if (!FUN6(VAR3, VAR17))
            return -VAR20;
        VAR14 = FUN7("");
        VAR16 = FUN8("", VAR14->VAR21, NULL);
        FUN9(VAR16, VAR22, VAR12);
        FUN10(VAR16, VAR23, VAR17);
        if (VAR6)
        {
            FUN10(VAR16, VAR24, VAR6->VAR25);
        }
        VAR7 = FUN11(VAR14, VAR8, VAR16);
        FUN12(VAR16);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR3 = VAR8;
        VAR6 = VAR14;
        VAR2->VAR26 = 1;
    }
    if (!VAR6)
    {
        VAR7 = FUN13(VAR3, &VAR6);
    }
    if (!VAR6)
    {
        goto VAR27;
    }
    VAR7 = FUN14(VAR2, VAR3, VAR4, VAR6);
    if (VAR7 < 0)
    {
        goto VAR27;
    }
    if ((VAR4 & VAR28) == 0 && VAR2->VAR29[0] != '')
    {
        char VAR17[VAR9];
        int VAR30;
        VAR5 *VAR31 = NULL;
        VAR2->VAR32 = FUN2("");
        FUN15(VAR2, VAR17, sizeof(VAR17));
        if (VAR2->VAR33[0] != '')
        {
            VAR31 = FUN7(VAR2->VAR33);
        }
        VAR30 = VAR4 & ~(VAR34 | VAR10 | VAR28);
        VAR7 = FUN1(VAR2->VAR32, VAR17, VAR30, VAR31);
        if (VAR7 < 0)
        {
            FUN16(VAR2);
            return VAR7;
        }
        if (VAR2->VAR26)
        {
            VAR2->VAR32->VAR35 = !(VAR4 & VAR34);
        }
        else
        {
            VAR2->VAR32->VAR35 = VAR2->VAR35;
        }
    }
    if (!FUN17(VAR2))
    {
        FUN18(VAR2, true);
    }
    if (VAR2->VAR36)
    {
        FUN19(VAR2);
    }
    return 0;
VAR27:
    if (VAR2->VAR26)
    {
        unlink(VAR3);
    }
    return VAR7;
}