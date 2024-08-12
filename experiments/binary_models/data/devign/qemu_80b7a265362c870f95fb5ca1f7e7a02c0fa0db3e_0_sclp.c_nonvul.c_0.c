static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR4;
    VAR7 *VAR8 = FUN2(FUN3());
    VAR9 *VAR10 = FUN4();
    VAR11 *VAR12;
    int VAR13 = 0;
    int VAR14, VAR15;
    int VAR16 = FUN5(VAR8->VAR17, FUN6(VAR18));
    VAR19 *VAR20 = FUN7();
    FUN8(VAR12) { VAR13++; }
    VAR6->VAR21 = FUN9(VAR13);
    VAR6->VAR22 = FUN9(FUN10(VAR5, VAR23));
    VAR6->VAR24 = FUN9(VAR25);
    VAR6->VAR26 = FUN11(FUN12());
    FUN13(VAR27, VAR6->VAR28);
    FUN13(VAR29, VAR6->VAR30);
    FUN14(VAR2, VAR6->VAR23, VAR13);
    VAR6->VAR31 = FUN15(VAR32 | VAR33);
    if (VAR10)
    {
        VAR10->VAR34 = VAR35;
        if (VAR16 > 0)
        {
            while ((VAR10->VAR34 * (VAR16 - 1) < VAR10->VAR36))
            {
                VAR10->VAR34 = VAR10->VAR34 << 1;
            }
        }
        if (VAR10->VAR37 == 0)
        {
            if (VAR10->VAR36 % VAR10->VAR34)
            {
                VAR10->VAR37 = FUN16((VAR10->VAR36 / VAR10->VAR34 + 1) * (VAR10->VAR34 / VAR35));
            }
            else
            {
                VAR10->VAR37 = FUN16(VAR10->VAR36 / VAR35);
            }
        }
        VAR10->VAR38 = VAR39 + VAR10->VAR40;
        VAR10->VAR41 = 1 << VAR10->VAR42;
        VAR6->VAR31 |= FUN15(VAR43);
    }
    VAR6->VAR44 = FUN17();
    VAR6->VAR45 = FUN11(FUN18());
    VAR14 = 1 << (VAR2->VAR42 - 20);
    if (VAR14 <= 128)
    {
        VAR6->VAR14 = VAR14;
    }
    else
    {
        VAR6->VAR14 = 0;
        VAR6->VAR46 = FUN11(VAR14);
    }
    VAR15 = VAR8->VAR47 >> VAR2->VAR42;
    if (VAR15 < 0x10000)
    {
        VAR6->VAR15 = FUN9(VAR15);
    }
    else
    {
        VAR6->VAR15 = FUN9(0);
        VAR6->VAR48 = FUN15(VAR15);
    }
    if (VAR20 && VAR20->VAR49 & VAR50)
    {
        memcpy(&VAR6->VAR51, &VAR20->VAR51, sizeof(VAR6->VAR51));
    }
    else
    {
        FUN19(VAR6->VAR51);
    }
    VAR4->VAR52.VAR53 = FUN9(VAR54);
}