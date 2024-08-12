static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR8);
    VAR11 *VAR12;
    int VAR13, VAR14;
    VAR3 *VAR15 = NULL;
    int VAR16;
    VAR12 = VAR2->VAR17;
    VAR12[VAR18] = 0;
    VAR12[VAR19] = 0x01;
    if (VAR8->VAR20 != VAR21)
    {
        VAR16 = FUN5(VAR2, 0x50, 1, true, false, &VAR15);
        assert(!VAR16 || VAR16 == -VAR22);
        if (VAR16 && VAR8->VAR20 == VAR23)
        {
            FUN6(&VAR15, ""
                                    "");
            FUN7(VAR4, VAR15);
            return;
        }
        else if (VAR16)
        {
            VAR8->VAR20 = VAR21;
            FUN8(VAR15);
        }
    }
    FUN9(&VAR8->VAR24, FUN10(VAR8), &VAR25, VAR8, "", 0x4000);
    FUN9(&VAR8->VAR26, FUN10(VAR8), &VAR27, VAR8, "", 256);
    FUN9(&VAR8->VAR28, FUN10(VAR8), &VAR29, VAR8, "", 0x40000);
    if (FUN11(VAR8) && FUN12(VAR2, 15, &VAR8->VAR24, VAR10->VAR30, 0x2000, &VAR8->VAR24, VAR10->VAR30, 0x3800, 0x68))
    {
        VAR8->VAR31 = VAR21;
    }
    if (FUN13(VAR2))
    {
        FUN14(VAR2, 0xa0);
    }
    VAR14 = VAR32 | VAR33;
    FUN15(VAR2, VAR10->VAR34, VAR35, &VAR8->VAR26);
    FUN15(VAR2, VAR10->VAR30, VAR14, &VAR8->VAR24);
    FUN15(VAR2, 3, VAR14, &VAR8->VAR28);
    if (FUN11(VAR8))
    {
        FUN16(VAR2, 0);
    }
    VAR8->VAR36 = VAR37;
    if (!VAR8->VAR38)
    {
        VAR8->VAR38 = ((VAR39 << 24) | VAR40) << 36;
        VAR8->VAR38 |= (FUN17(VAR2->VAR41) << 16);
        VAR8->VAR38 |= (FUN18(VAR2->VAR42) << 8);
        VAR8->VAR38 |= FUN19(VAR2->VAR42);
    }
    if (!VAR8->VAR43)
    {
        VAR8->VAR43 = FUN20(VAR44);
    }
    if (VAR8->VAR45 >= VAR46 - VAR47)
    {
        VAR8->VAR45 = VAR46 - VAR47;
    }
    else if (VAR8->VAR45 >= 128 - VAR47)
    {
        VAR8->VAR45 = 128 - VAR47;
    }
    else
    {
        VAR8->VAR45 = 64 - VAR47;
    }
    if (VAR8->VAR48 > VAR49)
    {
        VAR8->VAR48 = VAR49;
    }
    FUN21(VAR8->VAR45, VAR8->VAR48, FUN22(VAR8) ? "" : "");
    if (FUN22(VAR8))
    {
        VAR8->VAR50 = VAR51;
    }
    else
    {
        VAR8->VAR50 = VAR52;
    }
    VAR8->VAR53 = 0;
    VAR8->VAR54 = 0;
    for (VAR13 = 0; VAR13 < VAR8->VAR48; VAR13++)
    {
        VAR8->VAR55[VAR13].VAR56 = VAR13;
        VAR8->VAR55[VAR13].VAR57 = -1;
        VAR8->VAR55[VAR13].VAR58 = 0;
        VAR8->VAR55[VAR13].VAR59 = VAR8;
    }
    FUN23(&VAR8->VAR41, sizeof(VAR8->VAR41), FUN2(VAR2), &VAR60, NULL);
    if (!VAR6->VAR61)
    {
        FUN24(&VAR8->VAR41, VAR4);
    }
}