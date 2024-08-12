static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR4->VAR19 = VAR2;
    VAR4->VAR20 = FUN2(sizeof(VAR21) * VAR2->VAR22);
    FUN3(VAR7, VAR23, strlen(VAR23));
    FUN4(VAR7, 0);
    VAR4->VAR24[2] = FUN5(VAR7);
    FUN6(VAR7, VAR25);
    FUN7(VAR4, VAR7, 120 + 5 * 256, 1);
    FUN8(VAR7, 2);
    FUN8(VAR7, VAR2->VAR22);
    FUN8(VAR7, VAR26);
    FUN8(VAR7, VAR27);
    FUN8(VAR7, VAR4->VAR28 = 1);
    FUN8(VAR7, VAR4->VAR29 = 2);
    FUN8(VAR7, VAR4->VAR30 = 0x4EFE79);
    FUN9(VAR2);
    assert(VAR4->VAR31[''].VAR32 == VAR33);
    VAR13 = VAR14 = VAR15 = VAR16 = VAR17 = VAR34;
    for (VAR11 = 0; VAR11 < 256;)
    {
        VAR18 = 0;
        VAR17 = 0;
        if (VAR13 != VAR4->VAR31[VAR11].VAR35)
            VAR18 = 1;
        if (VAR16 != VAR4->VAR31[VAR11].VAR36)
            VAR18 = 2;
        if (VAR15 != VAR4->VAR31[VAR11].VAR37)
            VAR18 = 3;
        if (VAR17 != VAR4->VAR31[VAR11].VAR38)
            VAR18 = 4;
        VAR13 = VAR4->VAR31[VAR11].VAR35;
        VAR14 = VAR4->VAR31[VAR11].VAR32;
        VAR15 = VAR4->VAR31[VAR11].VAR37;
        VAR16 = VAR4->VAR31[VAR11].VAR36;
        VAR17 = VAR4->VAR31[VAR11].VAR38;
        for (VAR12 = 0; VAR11 < 256; VAR12++, VAR11++)
        {
            if (VAR4->VAR31[VAR11].VAR35 != VAR13)
                break;
            if (VAR4->VAR31[VAR11].VAR32 != VAR14)
                break;
            if (VAR4->VAR31[VAR11].VAR37 != VAR15)
                break;
            if (VAR4->VAR31[VAR11].VAR36 != VAR16)
                break;
            if (VAR4->VAR31[VAR11].VAR38 != VAR17 + VAR12)
                break;
        }
        if (VAR12 != VAR16 - VAR17)
            VAR18 = 6;
        FUN8(VAR7, VAR14);
        FUN8(VAR7, VAR18);
        if (VAR18 > 0)
            FUN10(VAR7, VAR13);
        if (VAR18 > 1)
            FUN8(VAR7, VAR16);
        if (VAR18 > 2)
            FUN8(VAR7, VAR15);
        if (VAR18 > 3)
            FUN8(VAR7, VAR17);
        if (VAR18 > 4)
            FUN8(VAR7, 0);
        if (VAR18 > 5)
            FUN8(VAR7, VAR12);
    }
    FUN11(VAR4, VAR7, 0, 1);
    for (VAR11 = 0; VAR11 < VAR2->VAR22; VAR11++)
    {
        int VAR39, VAR40, VAR41;
        VAR10 = &VAR2->VAR42[VAR11]->VAR10;
        FUN6(VAR7, VAR43);
        FUN7(VAR4, VAR7, 120 + VAR10->VAR44, 1);
        FUN8(VAR7, VAR11);
        FUN8(VAR7, (VAR10->VAR45 == VAR46) ? 32 : 0);
        if (VAR10->VAR47)
            FUN12(VAR7, VAR10->VAR47);
        else if (VAR10->VAR45 == VAR48)
        {
            FUN12(VAR7, FUN13(VAR10->VAR49));
        }
        else if (VAR10->VAR45 == VAR46)
        {
            FUN12(VAR7, FUN14(VAR10->VAR49));
        }
        else
            FUN12(VAR7, 0);
        if (VAR10->VAR45 == VAR48)
        {
            VAR39 = VAR10->VAR50.VAR51;
            VAR40 = VAR10->VAR50.VAR52;
        }
        else
        {
            VAR39 = VAR10->VAR53;
            if (VAR10->VAR54 > 0)
                VAR40 = VAR10->VAR54;
            else
                VAR40 = 1;
        }
        VAR41 = FUN15(VAR39, VAR40);
        VAR39 /= VAR41;
        VAR40 /= VAR41;
        VAR4->VAR20[VAR11].VAR28 = VAR39;
        VAR4->VAR20[VAR11].VAR29 = VAR40;
        FUN16(VAR2->VAR42[VAR11], 60, VAR40, VAR39);
        FUN8(VAR7, VAR10->VAR55);
        FUN12(VAR7, 0);
        FUN8(VAR7, VAR39);
        FUN8(VAR7, VAR40);
        if (VAR39 / VAR40 < 1000)
            VAR4->VAR20[VAR11].VAR56 = 7;
        else
            VAR4->VAR20[VAR11].VAR56 = 14;
        FUN8(VAR7, VAR4->VAR20[VAR11].VAR56);
        FUN8(VAR7, VAR10->VAR57);
        FUN4(VAR7, 0);
        if (VAR10->VAR44)
        {
            FUN8(VAR7, 1);
            FUN8(VAR7, VAR10->VAR44);
            FUN3(VAR7, VAR10->VAR58, VAR10->VAR44);
        }
        FUN8(VAR7, 0);
        switch (VAR10->VAR45)
        {
        case VAR46:
            FUN8(VAR7, VAR10->VAR53);
            FUN8(VAR7, 1);
            FUN8(VAR7, VAR10->VAR59);
            break;
        case VAR48:
            FUN8(VAR7, VAR10->VAR60);
            FUN8(VAR7, VAR10->VAR61);
            FUN8(VAR7, VAR10->VAR62.VAR52);
            FUN8(VAR7, VAR10->VAR62.VAR51);
            FUN8(VAR7, 0);
            break;
        default:
            break;
        }
        FUN11(VAR4, VAR7, 0, 1);
    }
    FUN6(VAR7, VAR63);
    FUN7(VAR4, VAR7, 30 + strlen(VAR2->VAR64) + strlen(VAR2->VAR65) + strlen(VAR2->VAR66) + strlen(VAR2->VAR67) + strlen(VAR68), 1);
    if (VAR2->VAR64[0])
    {
        FUN8(VAR7, 9);
        FUN17(VAR7, VAR2->VAR64);
    }
    if (VAR2->VAR65[0])
    {
        FUN8(VAR7, 10);
        FUN17(VAR7, VAR2->VAR65);
    }
    if (VAR2->VAR66[0])
    {
        FUN8(VAR7, 11);
        FUN17(VAR7, VAR2->VAR66);
    }
    if (VAR2->VAR67[0])
    {
        FUN8(VAR7, 12);
        FUN17(VAR7, VAR2->VAR67);
    }
    if (!(VAR2->VAR42[0]->VAR10.VAR32 & VAR69))
    {
        FUN8(VAR7, 13);
        FUN17(VAR7, VAR68);
    }
    FUN8(VAR7, 0);
    FUN11(VAR4, VAR7, 0, 1);
    FUN18(VAR7);
    return 0;
}