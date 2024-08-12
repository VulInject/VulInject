FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13, int VAR14, int VAR15, enum PixelFormat VAR16)
{
    int VAR17, VAR18;
    vector signed short VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29;
    vector signed short VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
    vector unsigned char VAR36, VAR37, VAR38;
    vector unsigned char *VAR39, *VAR40;
    vector signed short VAR41 = FUN2(1 << 3);
    vector unsigned short VAR42 = FUN3(4);
    FUN4(16, unsigned int, VAR43)
    [16];
    vector signed short *VAR44, *VAR45;
    VAR44 = VAR2->VAR46 + VAR15 * VAR6;
    VAR45 = VAR2->VAR47 + VAR15 * VAR10;
    VAR39 = (vector unsigned char *)VAR13;
    for (VAR17 = 0; VAR17 < VAR14; VAR17 += 16)
    {
        VAR22 = VAR41;
        VAR25 = VAR41;
        for (VAR18 = 0; VAR18 < VAR6; VAR18++)
        {
            VAR20 = FUN5(0, &VAR5[VAR18][VAR17]);
            VAR21 = FUN5(16, &VAR5[VAR18][VAR17]);
            VAR22 = FUN6(VAR20, VAR44[VAR18], VAR22);
            VAR25 = FUN6(VAR21, VAR44[VAR18], VAR25);
        }
        VAR28 = VAR41;
        VAR29 = VAR41;
        for (VAR18 = 0; VAR18 < VAR10; VAR18++)
        {
            VAR19 = FUN5(0, &VAR8[VAR18][VAR17 / 2]);
            VAR28 = FUN6(VAR19, VAR45[VAR18], VAR28);
            VAR19 = FUN5(0, &VAR9[VAR18][VAR17 / 2]);
            VAR29 = FUN6(VAR19, VAR45[VAR18], VAR29);
        }
        VAR22 = FUN7(VAR22, VAR42);
        VAR25 = FUN7(VAR25, VAR42);
        VAR28 = FUN7(VAR28, VAR42);
        VAR29 = FUN7(VAR29, VAR42);
        VAR22 = FUN8(VAR22);
        VAR25 = FUN8(VAR25);
        VAR28 = FUN8(VAR28);
        VAR29 = FUN8(VAR29);
        VAR23 = FUN9(VAR28, VAR28);
        VAR24 = FUN9(VAR29, VAR29);
        VAR26 = FUN10(VAR28, VAR28);
        VAR27 = FUN10(VAR29, VAR29);
        FUN11(VAR2, VAR22, VAR23, VAR24, &VAR30, &VAR31, &VAR32);
        FUN11(VAR2, VAR25, VAR26, VAR27, &VAR33, &VAR34, &VAR35);
        VAR36 = FUN12(VAR30, VAR33);
        VAR37 = FUN12(VAR31, VAR34);
        VAR38 = FUN12(VAR32, VAR35);
        switch (VAR16)
        {
        case VAR48:
            FUN13(VAR36, VAR37, VAR38, VAR39);
            break;
        case VAR49:
            FUN14(VAR36, VAR37, VAR38, VAR39);
            break;
        case VAR50:
            FUN15(VAR36, VAR37, VAR38, VAR39);
            break;
        case VAR51:
            FUN16(VAR36, VAR37, VAR38, VAR39);
            break;
        case VAR52:
            FUN17(VAR36, VAR37, VAR38, VAR39);
            break;
        case VAR53:
            FUN18(VAR36, VAR37, VAR38, VAR39);
            break;
        default:
        {
            static int VAR54;
            if (!VAR54)
            {
                FUN19(VAR2, VAR55, "", FUN20(VAR2->VAR56));
                VAR54 = 1;
            }
            return;
        }
        }
    }
    if (VAR17 < VAR14)
    {
        VAR17 -= 16;
        VAR22 = VAR41;
        VAR25 = VAR41;
        for (VAR18 = 0; VAR18 < VAR6; VAR18++)
        {
            VAR20 = FUN5(0, &VAR5[VAR18][VAR17]);
            VAR21 = FUN5(16, &VAR5[VAR18][VAR17]);
            VAR22 = FUN6(VAR20, VAR44[VAR18], VAR22);
            VAR25 = FUN6(VAR21, VAR44[VAR18], VAR25);
        }
        VAR28 = VAR41;
        VAR29 = VAR41;
        for (VAR18 = 0; VAR18 < VAR10; VAR18++)
        {
            VAR19 = FUN5(0, &VAR8[VAR18][VAR17 / 2]);
            VAR28 = FUN6(VAR19, VAR45[VAR18], VAR28);
            VAR19 = FUN5(0, &VAR9[VAR18][VAR17 / 2]);
            VAR29 = FUN6(VAR19, VAR45[VAR18], VAR29);
        }
        VAR22 = FUN7(VAR22, VAR42);
        VAR25 = FUN7(VAR25, VAR42);
        VAR28 = FUN7(VAR28, VAR42);
        VAR29 = FUN7(VAR29, VAR42);
        VAR22 = FUN8(VAR22);
        VAR25 = FUN8(VAR25);
        VAR28 = FUN8(VAR28);
        VAR29 = FUN8(VAR29);
        VAR23 = FUN9(VAR28, VAR28);
        VAR24 = FUN9(VAR29, VAR29);
        VAR26 = FUN10(VAR28, VAR28);
        VAR27 = FUN10(VAR29, VAR29);
        FUN11(VAR2, VAR22, VAR23, VAR24, &VAR30, &VAR31, &VAR32);
        FUN11(VAR2, VAR25, VAR26, VAR27, &VAR33, &VAR34, &VAR35);
        VAR36 = FUN12(VAR30, VAR33);
        VAR37 = FUN12(VAR31, VAR34);
        VAR38 = FUN12(VAR32, VAR35);
        VAR40 = (vector unsigned char *)VAR43;
        switch (VAR16)
        {
        case VAR48:
            FUN13(VAR36, VAR37, VAR38, VAR40);
            break;
        case VAR49:
            FUN14(VAR36, VAR37, VAR38, VAR40);
            break;
        case VAR50:
            FUN15(VAR36, VAR37, VAR38, VAR40);
            break;
        case VAR51:
            FUN16(VAR36, VAR37, VAR38, VAR40);
            break;
        case VAR52:
            FUN17(VAR36, VAR37, VAR38, VAR40);
            break;
        case VAR53:
            FUN18(VAR36, VAR37, VAR38, VAR40);
            break;
        default:
            FUN19(VAR2, VAR55, "", FUN20(VAR2->VAR56));
            return;
        }
        memcpy(&((VAR57 *)VAR13)[VAR17], VAR43, (VAR14 - VAR17) / 4);
    }
}