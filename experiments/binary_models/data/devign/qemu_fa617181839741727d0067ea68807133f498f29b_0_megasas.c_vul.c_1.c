static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR6);
    VAR9 *VAR10;
    int VAR11, VAR12;
    VAR13 *VAR14 = NULL;
    VAR10 = VAR2->VAR15;
    VAR10[VAR16] = 0;
    VAR10[VAR17] = 0x01;
    FUN5(&VAR6->VAR18, FUN6(VAR6), &VAR19, VAR6, "", 0x4000);
    FUN5(&VAR6->VAR20, FUN6(VAR6), &VAR21, VAR6, "", 256);
    FUN5(&VAR6->VAR22, FUN6(VAR6), &VAR23, VAR6, "", 0x40000);
    if (FUN7(VAR6) && FUN8(VAR2, 0x50, 1, true, false))
    {
        VAR6->VAR24 &= ~VAR25;
    }
    if (FUN9(VAR6) && FUN10(VAR2, 15, &VAR6->VAR18, VAR8->VAR26, 0x2000, &VAR6->VAR18, VAR8->VAR26, 0x3800, 0x68))
    {
        VAR6->VAR24 &= ~VAR27;
    }
    if (FUN11(VAR2))
    {
        FUN12(VAR2, 0xa0);
    }
    VAR12 = VAR28 | VAR29;
    FUN13(VAR2, VAR8->VAR30, VAR31, &VAR6->VAR20);
    FUN13(VAR2, VAR8->VAR26, VAR12, &VAR6->VAR18);
    FUN13(VAR2, 3, VAR12, &VAR6->VAR22);
    if (FUN9(VAR6))
    {
        FUN14(VAR2, 0);
    }
    VAR6->VAR32 = VAR33;
    if (!VAR6->VAR34)
    {
        VAR6->VAR34 = ((VAR35 << 24) | VAR36) << 36;
        VAR6->VAR34 |= (FUN15(VAR2->VAR37) << 16);
        VAR6->VAR34 |= (FUN16(VAR2->VAR38) << 8);
        VAR6->VAR34 |= FUN17(VAR2->VAR38);
    }
    if (!VAR6->VAR39)
    {
        VAR6->VAR39 = FUN18(VAR40);
    }
    if (VAR6->VAR41 >= VAR42 - VAR43)
    {
        VAR6->VAR41 = VAR42 - VAR43;
    }
    else if (VAR6->VAR41 >= 128 - VAR43)
    {
        VAR6->VAR41 = 128 - VAR43;
    }
    else
    {
        VAR6->VAR41 = 64 - VAR43;
    }
    if (VAR6->VAR44 > VAR45)
    {
        VAR6->VAR44 = VAR45;
    }
    FUN19(VAR6->VAR41, VAR6->VAR44, FUN20(VAR6) ? "" : "");
    if (FUN20(VAR6))
    {
        VAR6->VAR46 = VAR47;
    }
    else
    {
        VAR6->VAR46 = VAR48;
    }
    VAR6->VAR49 = 0;
    VAR6->VAR50 = 0;
    for (VAR11 = 0; VAR11 < VAR6->VAR44; VAR11++)
    {
        VAR6->VAR51[VAR11].VAR52 = VAR11;
        VAR6->VAR51[VAR11].VAR53 = -1;
        VAR6->VAR51[VAR11].VAR54 = 0;
        VAR6->VAR51[VAR11].VAR55 = VAR6;
    }
    FUN21(&VAR6->VAR37, sizeof(VAR6->VAR37), FUN2(VAR2), &VAR56, NULL);
    if (!VAR4->VAR57)
    {
        FUN22(&VAR6->VAR37, &VAR14);
        if (VAR14 != NULL)
        {
            FUN23(VAR14);
            return -1;
        }
    }
    return 0;