static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8, VAR9 = 0;
    QCowHeader VAR10;
    uint64_t VAR11;
    VAR9 = FUN2(VAR2->VAR12, 0, &VAR10, sizeof(VAR10));
    if (VAR9 < 0)
    {
        goto VAR13;
    }
    FUN3(&VAR10.VAR14);
    FUN3(&VAR10.VAR15);
    FUN4(&VAR10.VAR16);
    FUN3(&VAR10.VAR17);
    FUN4(&VAR10.VAR18);
    FUN3(&VAR10.VAR19);
    FUN3(&VAR10.VAR20);
    FUN4(&VAR10.VAR21);
    FUN3(&VAR10.VAR22);
    FUN4(&VAR10.VAR23);
    FUN3(&VAR10.VAR24);
    FUN4(&VAR10.VAR25);
    FUN3(&VAR10.VAR26);
    if (VAR10.VAR14 != VAR27)
    {
        VAR9 = -VAR28;
        goto VAR13;
    }
    if (VAR10.VAR15 < 2 || VAR10.VAR15 > 3)
    {
        FUN5(VAR2, "", VAR10.VAR15);
        VAR9 = -VAR29;
        goto VAR13;
    }
    VAR5->VAR30 = VAR10.VAR15;
    if (VAR10.VAR15 == 2)
    {
        VAR10.VAR31 = 0;
        VAR10.VAR32 = 0;
        VAR10.VAR33 = 0;
        VAR10.VAR34 = 4;
        VAR10.VAR35 = 72;
    }
    else
    {
        FUN4(&VAR10.VAR31);
        FUN4(&VAR10.VAR32);
        FUN4(&VAR10.VAR33);
        FUN3(&VAR10.VAR34);
        FUN3(&VAR10.VAR35);
    }
    if (VAR10.VAR35 > sizeof(VAR10))
    {
        VAR5->VAR36 = VAR10.VAR35 - sizeof(VAR10);
        VAR5->VAR37 = FUN6(VAR5->VAR36);
        VAR9 = FUN2(VAR2->VAR12, sizeof(VAR10), VAR5->VAR37, VAR5->VAR36);
        if (VAR9 < 0)
        {
            goto VAR13;
        }
    }
    if (VAR10.VAR16)
    {
        VAR11 = VAR10.VAR16;
    }
    else
    {
        VAR11 = 1 << VAR10.VAR19;
    }
    VAR5->VAR31 = VAR10.VAR31;
    VAR5->VAR32 = VAR10.VAR32;
    VAR5->VAR33 = VAR10.VAR33;
    if (VAR5->VAR31 != 0)
    {
        void *VAR38 = NULL;
        FUN7(VAR2, VAR10.VAR35, VAR11, &VAR38);
        FUN8(VAR2, VAR38, VAR5->VAR31);
        VAR9 = -VAR29;
        goto VAR13;
    }
    if (VAR10.VAR34 != 4)
    {
        FUN5(VAR2, "", 1 << VAR10.VAR34);
        VAR9 = -VAR29;
        goto VAR13;
    }
    if (VAR10.VAR19 < VAR39 || VAR10.VAR19 > VAR40)
    {
        VAR9 = -VAR28;
        goto VAR13;
    }
    if (VAR10.VAR20 > VAR41)
    {
        VAR9 = -VAR28;
        goto VAR13;
    }
    VAR5->VAR42 = VAR10.VAR20;
    if (VAR5->VAR42)
    {
        VAR2->VAR43 = 1;
    }
    VAR5->VAR19 = VAR10.VAR19;
    VAR5->VAR44 = 1 << VAR5->VAR19;
    VAR5->VAR45 = 1 << (VAR5->VAR19 - 9);
    VAR5->VAR46 = VAR5->VAR19 - 3;
    VAR5->VAR47 = 1 << VAR5->VAR46;
    VAR2->VAR48 = VAR10.VAR18 / 512;
    VAR5->VAR49 = (62 - (VAR5->VAR19 - 8));
    VAR5->VAR50 = (1 << (VAR5->VAR19 - 8)) - 1;
    VAR5->VAR51 = (1LL << VAR5->VAR49) - 1;
    VAR5->VAR23 = VAR10.VAR23;
    VAR5->VAR52 = VAR10.VAR24 << (VAR5->VAR19 - 3);
    VAR5->VAR25 = VAR10.VAR25;
    VAR5->VAR26 = VAR10.VAR26;
    VAR5->VAR22 = VAR10.VAR22;
    VAR5->VAR53 = FUN9(VAR5, VAR10.VAR18);
    if (VAR5->VAR22 < VAR5->VAR53)
    {
        VAR9 = -VAR28;
        goto VAR13;
    }
    VAR5->VAR21 = VAR10.VAR21;
    if (VAR5->VAR22 > 0)
    {
        VAR5->VAR54 = FUN10(FUN11(VAR5->VAR22 * sizeof(VAR55), 512));
        VAR9 = FUN2(VAR2->VAR12, VAR5->VAR21, VAR5->VAR54, VAR5->VAR22 * sizeof(VAR55));
        if (VAR9 < 0)
        {
            goto VAR13;
        }
        for (VAR8 = 0; VAR8 < VAR5->VAR22; VAR8++)
        {
            FUN4(&VAR5->VAR54[VAR8]);
        }
    }
    VAR5->VAR56 = FUN12(VAR2, VAR57);
    VAR5->VAR58 = FUN12(VAR2, VAR59);
    VAR5->VAR60 = FUN6(VAR5->VAR44);
    VAR5->VAR61 = FUN13(VAR2, VAR62 * VAR5->VAR44 + 512);
    VAR5->VAR63 = -1;
    VAR5->VAR3 = VAR3;
    VAR9 = FUN14(VAR2);
    if (VAR9 != 0)
    {
        goto VAR13;
    }
    FUN15(&VAR5->VAR64);
    if (FUN7(VAR2, VAR10.VAR35, VAR11, NULL))
    {
        VAR9 = -VAR28;
        goto VAR13;
    }
    if (VAR10.VAR16 != 0)
    {
        VAR7 = VAR10.VAR17;
        if (VAR7 > 1023)
        {
            VAR7 = 1023;
        }
        VAR9 = FUN2(VAR2->VAR12, VAR10.VAR16, VAR2->VAR65, VAR7);
        if (VAR9 < 0)
        {
            goto VAR13;
        }
        VAR2->VAR65[VAR7] = '';
    }
    VAR9 = FUN16(VAR2);
    if (VAR9 < 0)
    {
        goto VAR13;
    }
    if (!VAR2->VAR66 && VAR5->VAR33 != 0)
    {
        VAR5->VAR33 = 0;
        VAR9 = FUN17(VAR2);
        if (VAR9 < 0)
        {
            goto VAR13;
        }
    }
    FUN18(&VAR5->VAR67);
    {
        BdrvCheckResult VAR68 = {0};
        FUN19(VAR2, &VAR68);
    }
    return VAR9;
VAR13:
    FUN20(VAR5->VAR37);
    FUN21(VAR2);
    FUN22(VAR2);
    FUN23(VAR2);
    FUN20(VAR5->VAR54);
    if (VAR5->VAR56)
    {
        FUN24(VAR2, VAR5->VAR56);
    }
    FUN20(VAR5->VAR60);
    FUN25(VAR5->VAR61);
    return VAR9;
}