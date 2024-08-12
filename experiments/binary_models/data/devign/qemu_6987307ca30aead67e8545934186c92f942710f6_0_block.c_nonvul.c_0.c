int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    char VAR9[VAR10];
    char VAR11[VAR10];
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    VAR2->VAR15 = 512;
    if (VAR4 & VAR16)
    {
        VAR1 *VAR17;
        int64_t VAR18;
        int VAR19 = 0;
        VAR5 *VAR20;
        VAR21 *VAR22;
        VAR17 = FUN2("");
        VAR7 = FUN1(VAR17, VAR3, 0, VAR6);
        if (VAR7 < 0)
        {
            FUN3(VAR17);
            return VAR7;
        }
        VAR18 = FUN4(VAR17) >> VAR23;
        if (VAR17->VAR6 && VAR17->VAR6->VAR24)
            VAR19 = 1;
        FUN3(VAR17);
        FUN5(VAR9, sizeof(VAR9));
        if (VAR19)
            snprintf(VAR11, sizeof(VAR11), "", VAR3);
        else if (!FUN6(VAR3, VAR11))
            return -VAR25;
        VAR20 = FUN7("");
        VAR22 = FUN8("", VAR20->VAR26, NULL);
        FUN9(VAR22, VAR27, VAR18 * 512);
        FUN10(VAR22, VAR28, VAR11);
        if (VAR6)
        {
            FUN10(VAR22, VAR29, VAR6->VAR30);
        }
        VAR7 = FUN11(VAR20, VAR9, VAR22);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR3 = VAR9;
        VAR6 = VAR20;
        VAR2->VAR12 = 1;
    }
    FUN12(VAR2->VAR3, sizeof(VAR2->VAR3), VAR3);
    if (VAR4 & VAR31)
    {
        VAR6 = FUN13(VAR3);
    }
    else if (!VAR6)
    {
        VAR6 = FUN14(VAR3);
        if (!VAR6)
        {
            VAR6 = FUN15(VAR3);
        }
    }
    if (!VAR6)
    {
        VAR7 = -VAR32;
        goto VAR33;
    }
    if (VAR34 && !FUN16(VAR6))
    {
        VAR7 = -VAR35;
        goto VAR33;
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR36 = FUN17(VAR6->VAR37);
    if (VAR4 & (VAR38 | VAR39))
        VAR2->VAR40 = 1;
    VAR2->VAR41 = (VAR4 & VAR42) == 0;
    if (!(VAR4 & VAR31))
    {
        VAR8 = (VAR4 & (VAR42 | VAR43 | VAR44));
        if (VAR2->VAR12)
        {
            VAR8 |= VAR42;
        }
    }
    else
    {
        VAR8 = VAR4 & ~(VAR31 | VAR16);
    }
    VAR7 = VAR6->FUN18(VAR2, VAR3, VAR8);
    if (VAR7 < 0)
    {
        goto VAR45;
    }
    if (VAR6->VAR46)
    {
        VAR2->VAR47 = FUN4(VAR2) >> VAR23;
    }
    if (VAR2->VAR12)
    {
        unlink(VAR3);
    }
    if ((VAR4 & VAR48) == 0 && VAR2->VAR49[0] != '')
    {
        VAR5 *VAR50 = NULL;
        VAR2->VAR51 = FUN2("");
        FUN19(VAR11, sizeof(VAR11), VAR3, VAR2->VAR49);
        if (VAR2->VAR52[0] != '')
            VAR50 = FUN7(VAR2->VAR52);
        VAR7 = FUN1(VAR2->VAR51, VAR11, VAR8, VAR50);
        VAR2->VAR51->VAR41 = (VAR8 & VAR42) == 0;
        if (VAR7 < 0)
        {
            FUN20(VAR2);
            return VAR7;
        }
    }
    if (!FUN21(VAR2))
    {
        VAR2->VAR53 = 1;
        if (VAR2->VAR54)
            VAR2->FUN22(VAR2->VAR55);
    }
    return 0;
VAR45:
    FUN23(VAR2->VAR36);
    VAR2->VAR36 = NULL;
    VAR2->VAR6 = NULL;
VAR33:
    if (VAR2->VAR12)
        unlink(VAR3);
    return VAR7;
}