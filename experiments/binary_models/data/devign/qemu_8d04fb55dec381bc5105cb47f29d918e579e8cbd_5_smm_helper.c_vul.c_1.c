void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    target_ulong VAR7;
    int VAR8, VAR9;
    uint32_t VAR10;
    VAR7 = VAR2->VAR11 + 0x8000;
    FUN4(VAR2, FUN5(VAR6, VAR7 + 0x7ed0));
    VAR2->VAR12.VAR13 = FUN5(VAR6, VAR7 + 0x7e68);
    VAR2->VAR12.VAR14 = FUN6(VAR6, VAR7 + 0x7e64);
    VAR2->VAR15.VAR16 = FUN7(VAR6, VAR7 + 0x7e70);
    VAR2->VAR15.VAR13 = FUN5(VAR6, VAR7 + 0x7e78);
    VAR2->VAR15.VAR14 = FUN6(VAR6, VAR7 + 0x7e74);
    VAR2->VAR15.VAR17 = (FUN7(VAR6, VAR7 + 0x7e72) & 0xf0ff) << 8;
    VAR2->VAR18.VAR13 = FUN5(VAR6, VAR7 + 0x7e88);
    VAR2->VAR18.VAR14 = FUN6(VAR6, VAR7 + 0x7e84);
    VAR2->VAR19.VAR16 = FUN7(VAR6, VAR7 + 0x7e90);
    VAR2->VAR19.VAR13 = FUN5(VAR6, VAR7 + 0x7e98);
    VAR2->VAR19.VAR14 = FUN6(VAR6, VAR7 + 0x7e94);
    VAR2->VAR19.VAR17 = (FUN7(VAR6, VAR7 + 0x7e92) & 0xf0ff) << 8;
    VAR2->VAR20[VAR21] = FUN5(VAR6, VAR7 + 0x7ff8);
    VAR2->VAR20[VAR22] = FUN5(VAR6, VAR7 + 0x7ff0);
    VAR2->VAR20[VAR23] = FUN5(VAR6, VAR7 + 0x7fe8);
    VAR2->VAR20[VAR24] = FUN5(VAR6, VAR7 + 0x7fe0);
    VAR2->VAR20[VAR25] = FUN5(VAR6, VAR7 + 0x7fd8);
    VAR2->VAR20[VAR26] = FUN5(VAR6, VAR7 + 0x7fd0);
    VAR2->VAR20[VAR27] = FUN5(VAR6, VAR7 + 0x7fc8);
    VAR2->VAR20[VAR28] = FUN5(VAR6, VAR7 + 0x7fc0);
    for (VAR8 = 8; VAR8 < 16; VAR8++)
    {
        VAR2->VAR20[VAR8] = FUN5(VAR6, VAR7 + 0x7ff8 - VAR8 * 8);
    }
    VAR2->VAR29 = FUN5(VAR6, VAR7 + 0x7f78);
    FUN8(VAR2, FUN6(VAR6, VAR7 + 0x7f70), ~(VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35 | VAR36));
    VAR2->VAR37[6] = FUN6(VAR6, VAR7 + 0x7f68);
    VAR2->VAR37[7] = FUN6(VAR6, VAR7 + 0x7f60);
    FUN9(VAR2, FUN6(VAR6, VAR7 + 0x7f48));
    FUN10(VAR2, FUN5(VAR6, VAR7 + 0x7f50));
    FUN11(VAR2, FUN6(VAR6, VAR7 + 0x7f58));
    for (VAR8 = 0; VAR8 < 6; VAR8++)
    {
        VAR9 = 0x7e00 + VAR8 * 16;
        FUN12(VAR2, VAR8, FUN7(VAR6, VAR7 + VAR9), FUN5(VAR6, VAR7 + VAR9 + 8), FUN6(VAR6, VAR7 + VAR9 + 4), (FUN7(VAR6, VAR7 + VAR9 + 2) & 0xf0ff) << 8);
    }
    VAR10 = FUN6(VAR6, VAR7 + 0x7efc);
    if (VAR10 & 0x20000)
    {
        VAR2->VAR11 = FUN6(VAR6, VAR7 + 0x7f00);
    }
    FUN11(VAR2, FUN6(VAR6, VAR7 + 0x7ffc));
    FUN10(VAR2, FUN6(VAR6, VAR7 + 0x7ff8));
    FUN8(VAR2, FUN6(VAR6, VAR7 + 0x7ff4), ~(VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35 | VAR36));
    VAR2->VAR29 = FUN6(VAR6, VAR7 + 0x7ff0);
    VAR2->VAR20[VAR28] = FUN6(VAR6, VAR7 + 0x7fec);
    VAR2->VAR20[VAR27] = FUN6(VAR6, VAR7 + 0x7fe8);
    VAR2->VAR20[VAR26] = FUN6(VAR6, VAR7 + 0x7fe4);
    VAR2->VAR20[VAR25] = FUN6(VAR6, VAR7 + 0x7fe0);
    VAR2->VAR20[VAR24] = FUN6(VAR6, VAR7 + 0x7fdc);
    VAR2->VAR20[VAR23] = FUN6(VAR6, VAR7 + 0x7fd8);
    VAR2->VAR20[VAR22] = FUN6(VAR6, VAR7 + 0x7fd4);
    VAR2->VAR20[VAR21] = FUN6(VAR6, VAR7 + 0x7fd0);
    VAR2->VAR37[6] = FUN6(VAR6, VAR7 + 0x7fcc);
    VAR2->VAR37[7] = FUN6(VAR6, VAR7 + 0x7fc8);
    VAR2->VAR19.VAR16 = FUN6(VAR6, VAR7 + 0x7fc4) & 0xffff;
    VAR2->VAR19.VAR13 = FUN6(VAR6, VAR7 + 0x7f64);
    VAR2->VAR19.VAR14 = FUN6(VAR6, VAR7 + 0x7f60);
    VAR2->VAR19.VAR17 = (FUN6(VAR6, VAR7 + 0x7f5c) & 0xf0ff) << 8;
    VAR2->VAR15.VAR16 = FUN6(VAR6, VAR7 + 0x7fc0) & 0xffff;
    VAR2->VAR15.VAR13 = FUN6(VAR6, VAR7 + 0x7f80);
    VAR2->VAR15.VAR14 = FUN6(VAR6, VAR7 + 0x7f7c);
    VAR2->VAR15.VAR17 = (FUN6(VAR6, VAR7 + 0x7f78) & 0xf0ff) << 8;
    VAR2->VAR12.VAR13 = FUN6(VAR6, VAR7 + 0x7f74);
    VAR2->VAR12.VAR14 = FUN6(VAR6, VAR7 + 0x7f70);
    VAR2->VAR18.VAR13 = FUN6(VAR6, VAR7 + 0x7f58);
    VAR2->VAR18.VAR14 = FUN6(VAR6, VAR7 + 0x7f54);
    for (VAR8 = 0; VAR8 < 6; VAR8++)
    {
        if (VAR8 < 3)
        {
            VAR9 = 0x7f84 + VAR8 * 12;
        }
        else
        {
            VAR9 = 0x7f2c + (VAR8 - 3) * 12;
        }
        FUN12(VAR2, VAR8, FUN6(VAR6, VAR7 + 0x7fa8 + VAR8 * 4) & 0xffff, FUN6(VAR6, VAR7 + VAR9 + 8), FUN6(VAR6, VAR7 + VAR9 + 4), (FUN6(VAR6, VAR7 + VAR9) & 0xf0ff) << 8);
    }
    FUN9(VAR2, FUN6(VAR6, VAR7 + 0x7f14));
    VAR10 = FUN6(VAR6, VAR7 + 0x7efc);
    if (VAR10 & 0x20000)
    {
        VAR2->VAR11 = FUN6(VAR6, VAR7 + 0x7ef8);
    }
    if ((VAR2->VAR38 & VAR39) == 0)
    {
        VAR2->VAR38 &= ~VAR40;
    }
    VAR2->VAR38 &= ~VAR39;
    VAR2->VAR41 &= ~VAR42;
    FUN13(VAR4);
    FUN14(VAR43, "");
    FUN15(VAR43, FUN3(VAR4), VAR44);