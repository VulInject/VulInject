FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13[4], int VAR14, int VAR15)
{
    VAR12 *VAR16 = VAR13[0], *VAR17 = VAR13[1], *VAR18 = VAR13[2];
    const vector signed int VAR19 = {(1 << 18), (1 << 18), (1 << 18), (1 << 18)};
    register int VAR20, VAR21;
    {
        FUN2(16, int, VAR22)
        [VAR14];
        for (VAR20 = 0; VAR20 < (VAR14 - 7); VAR20 += 4)
        {
            FUN3(VAR19, VAR20 << 2, VAR22);
        }
        for (; VAR20 < VAR14; VAR20++)
        {
            VAR22[VAR20] = (1 << 18);
        }
        for (VAR21 = 0; VAR21 < VAR6; VAR21++)
        {
            vector signed short VAR23, VAR24 = FUN4(VAR21 << 1, VAR4);
            vector unsigned char VAR25, VAR26 = FUN5(VAR21 << 1, VAR4);
            VAR24 = FUN6(VAR24, VAR24, VAR26);
            VAR24 = FUN7(VAR24, 0);
            VAR25 = FUN5(0, VAR5[VAR21]);
            VAR23 = FUN4(0, VAR5[VAR21]);
            for (VAR20 = 0; VAR20 < (VAR14 - 7); VAR20 += 8)
            {
                int VAR27 = VAR20 << 2;
                vector signed short VAR28 = FUN4((VAR20 << 1) + 16, VAR5[VAR21]);
                vector signed int VAR29 = FUN4(VAR27, VAR22);
                vector signed int VAR30 = FUN4(VAR27 + 16, VAR22);
                vector signed short VAR31 = FUN6(VAR23, VAR28, VAR25);
                vector signed int VAR32 = FUN8(VAR24, VAR31);
                vector signed int VAR33 = FUN9(VAR24, VAR31);
                vector signed int VAR34 = FUN10(VAR32, VAR33);
                vector signed int VAR35 = FUN11(VAR32, VAR33);
                vector signed int VAR36 = FUN12(VAR29, VAR34);
                vector signed int VAR37 = FUN12(VAR30, VAR35);
                FUN3(VAR36, VAR27, VAR22);
                FUN3(VAR37, VAR27 + 16, VAR22);
                VAR23 = VAR28;
            }
            for (; VAR20 < VAR14; VAR20++)
            {
                VAR22[VAR20] += VAR5[VAR21][VAR20] * VAR4[VAR21];
            }
        }
        FUN13(VAR22, VAR16, VAR14);
    }
    if (VAR17 != 0)
    {
        FUN2(16, int, VAR38)
        [VAR15];
        FUN2(16, int, VAR39)
        [VAR15];
        for (VAR20 = 0; VAR20 < (VAR15 - 7); VAR20 += 4)
        {
            FUN3(VAR19, VAR20 << 2, VAR38);
            FUN3(VAR19, VAR20 << 2, VAR39);
        }
        for (; VAR20 < VAR15; VAR20++)
        {
            VAR38[VAR20] = (1 << 18);
            VAR39[VAR20] = (1 << 18);
        }
        for (VAR21 = 0; VAR21 < VAR10; VAR21++)
        {
            vector signed short VAR23, VAR40, VAR41 = FUN4(VAR21 << 1, VAR7);
            vector unsigned char VAR25, VAR26 = FUN5(VAR21 << 1, VAR7);
            VAR41 = FUN6(VAR41, VAR41, VAR26);
            VAR41 = FUN7(VAR41, 0);
            VAR25 = FUN5(0, VAR8[VAR21]);
            VAR23 = FUN4(0, VAR8[VAR21]);
            VAR40 = FUN4(0, VAR9[VAR21]);
            for (VAR20 = 0; VAR20 < (VAR15 - 7); VAR20 += 8)
            {
                int VAR27 = VAR20 << 2;
                vector signed short VAR28 = FUN4((VAR20 << 1) + 16, VAR8[VAR21]);
                vector signed short VAR42 = FUN4((VAR20 << 1) + 16, VAR9[VAR21]);
                vector signed int VAR29 = FUN4(VAR27, VAR38);
                vector signed int VAR30 = FUN4(VAR27 + 16, VAR38);
                vector signed int VAR43 = FUN4(VAR27, VAR39);
                vector signed int VAR44 = FUN4(VAR27 + 16, VAR39);
                vector signed short VAR31 = FUN6(VAR23, VAR28, VAR25);
                vector signed short VAR45 = FUN6(VAR40, VAR42, VAR25);
                vector signed int VAR32 = FUN8(VAR41, VAR31);
                vector signed int VAR33 = FUN9(VAR41, VAR31);
                vector signed int VAR46 = FUN8(VAR41, VAR45);
                vector signed int VAR47 = FUN9(VAR41, VAR45);
                vector signed int VAR34 = FUN10(VAR32, VAR33);
                vector signed int VAR35 = FUN11(VAR32, VAR33);
                vector signed int VAR48 = FUN10(VAR46, VAR47);
                vector signed int VAR49 = FUN11(VAR46, VAR47);
                vector signed int VAR36 = FUN12(VAR29, VAR34);
                vector signed int VAR37 = FUN12(VAR30, VAR35);
                vector signed int VAR50 = FUN12(VAR43, VAR48);
                vector signed int VAR51 = FUN12(VAR44, VAR49);
                FUN3(VAR36, VAR27, VAR38);
                FUN3(VAR37, VAR27 + 16, VAR38);
                FUN3(VAR50, VAR27, VAR39);
                FUN3(VAR51, VAR27 + 16, VAR39);
                VAR23 = VAR28;
                VAR40 = VAR42;
            }
            for (; VAR20 < VAR15; VAR20++)
            {
                VAR38[VAR20] += VAR8[VAR21][VAR20] * VAR7[VAR21];
                VAR39[VAR20] += VAR9[VAR21][VAR20] * VAR7[VAR21];
            }
        }
        FUN13(VAR38, VAR17, VAR15);
        FUN13(VAR39, VAR18, VAR15);
    }
}