int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    char VAR9[VAR10];
    char VAR11[VAR10];
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    VAR2->VAR8 = VAR4;
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
    if (!VAR6)
    {
        VAR6 = FUN13(VAR3);
    }
    if (!VAR6)
    {
        VAR7 = -VAR31;
        goto VAR32;
    }
    if (VAR33 && !FUN14(VAR6))
    {
        VAR7 = -VAR34;
        goto VAR32;
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR35 = FUN15(VAR6->VAR36);
    if (VAR4 & (VAR37 | VAR38))
        VAR2->VAR39 = 1;
    VAR8 = VAR4 & ~(VAR16 | VAR40);
    if (VAR2->VAR12)
    {
        VAR8 |= VAR41;
    }
    VAR7 = VAR6->FUN1(VAR2, VAR3, VAR8);
    if (VAR7 < 0)
    {
        goto VAR42;
    }
    VAR2->VAR43 = VAR2->VAR44 = !(VAR8 & VAR41);
    if (VAR6->VAR45)
    {
        VAR2->VAR46 = FUN4(VAR2) >> VAR23;
    }
    if (VAR2->VAR12)
    {
        unlink(VAR3);
    }
    if ((VAR4 & VAR40) == 0 && VAR2->VAR47[0] != '')
    {
        VAR5 *VAR48 = NULL;
        VAR2->VAR49 = FUN2("");
        FUN16(VAR11, sizeof(VAR11), VAR3, VAR2->VAR47);
        if (VAR2->VAR50[0] != '')
            VAR48 = FUN7(VAR2->VAR50);
        VAR8 &= ~VAR41;
        VAR7 = FUN1(VAR2->VAR49, VAR11, VAR8, VAR48);
        if (VAR7 < 0)
        {
            FUN17(VAR2);
            return VAR7;
        }
        if (VAR2->VAR12)
        {
            VAR2->VAR49->VAR43 = !(VAR4 & VAR41);
        }
        else
        {
            VAR2->VAR49->VAR43 = VAR2->VAR43;
        }
    }
    if (!FUN18(VAR2))
    {
        VAR2->VAR51 = 1;
        if (VAR2->VAR52)
            VAR2->FUN19(VAR2->VAR53);
    }
    return 0;
VAR42:
    FUN20(VAR2->VAR35);
    VAR2->VAR35 = NULL;
    VAR2->VAR6 = NULL;
VAR32:
    if (VAR2->VAR12)
        unlink(VAR3);
    return VAR7;
}