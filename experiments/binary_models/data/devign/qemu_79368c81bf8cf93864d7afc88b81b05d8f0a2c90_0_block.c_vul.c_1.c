int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8 = 0;
    if (VAR4 & VAR9)
    {
        VAR1 *VAR10;
        int64_t VAR11;
        int VAR12 = 0;
        VAR5 *VAR13;
        VAR14 *VAR15;
        char VAR16[VAR17];
        char VAR18[VAR17];
        VAR10 = FUN2("");
        VAR7 = FUN1(VAR10, VAR3, 0, VAR6);
        if (VAR7 < 0)
        {
            FUN3(VAR10);
            return VAR7;
        }
        VAR11 = FUN4(VAR10) & VAR19;
        if (VAR10->VAR6 && VAR10->VAR6->VAR20)
            VAR12 = 1;
        FUN3(VAR10);
        FUN5(VAR16, sizeof(VAR16));
        if (VAR12)
            snprintf(VAR18, sizeof(VAR18), "", VAR3);
        else if (!FUN6(VAR3, VAR18))
            return -VAR21;
        VAR13 = FUN7("");
        VAR15 = FUN8("", VAR13->VAR22, NULL);
        FUN9(VAR15, VAR23, VAR11);
        FUN10(VAR15, VAR24, VAR18);
        if (VAR6)
        {
            FUN10(VAR15, VAR25, VAR6->VAR26);
        }
        VAR7 = FUN11(VAR13, VAR16, VAR15);
        FUN12(VAR15);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR3 = VAR16;
        VAR6 = VAR13;
        VAR2->VAR27 = 1;
    }
    if (!VAR6)
    {
        VAR6 = FUN13(VAR3);
        VAR8 = 1;
    }
    if (!VAR6)
    {
        VAR7 = -VAR28;
        goto VAR29;
    }
    VAR7 = FUN14(VAR2, VAR3, VAR4, VAR6);
    if (VAR7 < 0)
    {
        goto VAR29;
    }
    if ((VAR4 & VAR30) == 0 && VAR2->VAR31[0] != '')
    {
        char VAR18[VAR17];
        int VAR32;
        VAR5 *VAR33 = NULL;
        VAR2->VAR34 = FUN2("");
        FUN15(VAR18, sizeof(VAR18), VAR3, VAR2->VAR31);
        if (VAR2->VAR35[0] != '')
            VAR33 = FUN7(VAR2->VAR35);
        VAR32 = VAR4 & ~(VAR36 | VAR9 | VAR30);
        VAR7 = FUN1(VAR2->VAR34, VAR18, VAR32, VAR33);
        if (VAR7 < 0)
        {
            FUN16(VAR2);
            return VAR7;
        }
        if (VAR2->VAR27)
        {
            VAR2->VAR34->VAR37 = !(VAR4 & VAR36);
        }
        else
        {
            VAR2->VAR34->VAR37 = VAR2->VAR37;
        }
    }
    if (!FUN17(VAR2))
    {
        VAR2->VAR38 = 1;
        if (VAR2->VAR39)
            VAR2->FUN18(VAR2->VAR40);
    }
    return 0;
VAR29:
    if (VAR2->VAR27)
    {
        unlink(VAR3);
    }
    return VAR7;