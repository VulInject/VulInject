void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    uint16_t VAR5;
    uint8_t VAR6;
    FUN2(VAR2 != NULL);
    FUN3(VAR2, VAR7, VAR8);
    VAR3 = FUN4(VAR2, VAR7);
    FUN5(VAR3, VAR8);
    VAR2->VAR9 = FUN4(VAR2, VAR10);
    VAR2->VAR11 = FUN4(VAR2, VAR12);
    VAR6 = ((VAR2->VAR9 & VAR13) >> FUN6(VAR13)) + 1;
    FUN7("", VAR6);
    VAR4 = FUN4(VAR2, VAR14);
    for (VAR5 = 0; VAR4; VAR4 >>= 1, ++VAR5)
    {
        if (!(VAR4 & 0x01))
        {
            continue;
        }
        FUN7("", VAR5);
        VAR3 = FUN8(VAR2, VAR5, VAR15);
        if (FUN9(VAR3, VAR16 | VAR17 | VAR18 | VAR19))
        {
            FUN7("");
        }
        else
        {
            FUN7("");
            FUN10(VAR2, VAR5, VAR15, (VAR16 | VAR18));
            FUN11(500000);
            VAR3 = FUN8(VAR2, VAR5, VAR15);
            FUN12(VAR3, VAR17);
            FUN12(VAR3, VAR19);
            FUN7("");
        }
        VAR2->VAR20[VAR5].VAR21 = FUN13(VAR2, VAR6 * 0x20);
        FUN14(VAR2->VAR20[VAR5].VAR21, 0x00, VAR6 * 0x20);
        FUN7("" VAR22, VAR2->VAR20[VAR5].VAR21);
        FUN15(VAR2, VAR5, VAR23, VAR2->VAR20[VAR5].VAR21);
        FUN16(VAR2->VAR20[VAR5].VAR21, ==, FUN8(VAR2, VAR5, VAR23));
        VAR2->VAR20[VAR5].VAR24 = FUN13(VAR2, 0x100);
        FUN14(VAR2->VAR20[VAR5].VAR24, 0x00, 0x100);
        FUN7("" VAR22, VAR2->VAR20[VAR5].VAR24);
        FUN15(VAR2, VAR5, VAR25, VAR2->VAR20[VAR5].VAR24);
        FUN16(VAR2->VAR20[VAR5].VAR24, ==, FUN8(VAR2, VAR5, VAR25));
        FUN15(VAR2, VAR5, VAR26, 0xFFFFFFFF);
        FUN15(VAR2, VAR5, VAR27, 0xFFFFFFFF);
        FUN17(VAR2, VAR28, (1 << VAR5));
        VAR3 = FUN8(VAR2, VAR5, VAR26);
        FUN16(VAR3, ==, 0);
        VAR3 = FUN8(VAR2, VAR5, VAR27);
        FUN16(VAR3, ==, 0);
        VAR3 = FUN4(VAR2, VAR28);
        FUN12(VAR3, (1 << VAR5));
        FUN15(VAR2, VAR5, VAR29, 0xFFFFFFFF);
        VAR3 = FUN8(VAR2, VAR5, VAR29);
        FUN16(VAR3, ==, ~((VAR30)VAR31));
        FUN18(VAR2, VAR5, VAR15, VAR18);
        VAR3 = FUN8(VAR2, VAR5, VAR15);
        FUN5(VAR3, VAR19);
        VAR3 = FUN8(VAR2, VAR5, VAR26);
        if (FUN19(VAR3, VAR32))
        {
            FUN18(VAR2, VAR5, VAR26, VAR32);
        }
        VAR3 = FUN8(VAR2, VAR5, VAR33);
        if (FUN9(VAR3, VAR34 | VAR35))
        {
            VAR3 = FUN8(VAR2, VAR5, VAR36);
            if ((VAR3 & VAR37) == VAR38)
            {
                FUN18(VAR2, VAR5, VAR15, VAR16);
                FUN5(FUN8(VAR2, VAR5, VAR15), VAR17);
                FUN7("", VAR5);
            }
            else if ((VAR3 & VAR37))
            {
                FUN20();
            }
        }
    }
    FUN3(VAR2, VAR7, VAR39);
    VAR3 = FUN4(VAR2, VAR7);
    FUN5(VAR3, VAR39);