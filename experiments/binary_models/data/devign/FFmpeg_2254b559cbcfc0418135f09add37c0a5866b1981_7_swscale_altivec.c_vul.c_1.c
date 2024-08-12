static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, const VAR3 *VAR8, const VAR3 *VAR9, int VAR10)
{
    register int VAR11;
    FUN2(16, int, VAR12)
    [4];
    if (VAR10 % 4)
    {
        for (VAR11 = 0; VAR11 < VAR5; VAR11++)
        {
            register int VAR13;
            register int VAR14 = VAR9[VAR11];
            register int VAR15 = 0;
            for (VAR13 = 0; VAR13 < VAR10; VAR13++)
                VAR15 += ((int)VAR7[VAR14 + VAR13]) * VAR8[VAR10 * VAR11 + VAR13];
            VAR4[VAR11] = FUN3(VAR15 >> 7, (1 << 15) - 1);
        }
    }
    else
        switch (VAR10)
        {
        case 4:
            for (VAR11 = 0; VAR11 < VAR5; VAR11++)
            {
                register int VAR14 = VAR9[VAR11];
                vector unsigned char VAR16 = FUN4(VAR14, VAR7);
                vector unsigned char VAR17, VAR18;
                vector signed short VAR19, VAR20;
                vector signed int VAR21, VAR22;
                if ((((VAR23)VAR7 + VAR14) % 16) > 12)
                {
                    VAR17 = FUN4(VAR14 + 16, VAR7);
                }
                VAR18 = FUN5(VAR16, VAR17, FUN6(VAR14, VAR7));
                VAR19 = (vector signed short)(FUN7((vector unsigned char)VAR24, VAR18));
                VAR19 = FUN7(VAR19, (vector signed short)VAR24);
                VAR20 = FUN4(VAR11 << 3, VAR8);
                if ((VAR11 << 3) % 16)
                    VAR20 = FUN8(VAR20, (vector signed short)VAR24);
                else
                    VAR20 = FUN7(VAR20, (vector signed short)VAR24);
                VAR21 = FUN9(VAR19, VAR20);
                VAR22 = FUN10(VAR21, VAR24);
                FUN11(VAR22, 0, VAR12);
                VAR4[VAR11] = FUN3(VAR12[3] >> 7, (1 << 15) - 1);
            }
            break;
        case 8:
            for (VAR11 = 0; VAR11 < VAR5; VAR11++)
            {
                register int VAR14 = VAR9[VAR11];
                vector unsigned char VAR16 = FUN4(VAR14, VAR7);
                vector unsigned char VAR17, VAR18;
                vector signed short VAR19, VAR20;
                vector signed int VAR25, VAR22;
                if ((((VAR23)VAR7 + VAR14) % 16) > 8)
                {
                    VAR17 = FUN4(VAR14 + 16, VAR7);
                }
                VAR18 = FUN5(VAR16, VAR17, FUN6(VAR14, VAR7));
                VAR19 = (vector signed short)(FUN7((vector unsigned char)VAR24, VAR18));
                VAR20 = FUN4(VAR11 << 4, VAR8);
                VAR25 = FUN12(VAR19, VAR20, (vector signed int)VAR24);
                VAR22 = FUN10(VAR25, VAR24);
                FUN11(VAR22, 0, VAR12);
                VAR4[VAR11] = FUN3(VAR12[3] >> 7, (1 << 15) - 1);
            }
            break;
        case 16:
            for (VAR11 = 0; VAR11 < VAR5; VAR11++)
            {
                register int VAR14 = VAR9[VAR11];
                vector unsigned char VAR16 = FUN4(VAR14, VAR7);
                vector unsigned char VAR17 = FUN4(VAR14 + 16, VAR7);
                vector unsigned char VAR18 = FUN5(VAR16, VAR17, FUN6(VAR14, VAR7));
                vector signed short VAR26 = (vector signed short)(FUN7((vector unsigned char)VAR24, VAR18));
                vector signed short VAR27 = (vector signed short)(FUN8((vector unsigned char)VAR24, VAR18));
                vector signed short VAR28 = FUN4(VAR11 << 5, VAR8);
                vector signed short VAR29 = FUN4((VAR11 << 5) + 16, VAR8);
                vector signed int VAR30 = FUN12(VAR26, VAR28, (vector signed int)VAR24);
                vector signed int VAR25 = FUN12(VAR27, VAR29, VAR30);
                vector signed int VAR22 = FUN10(VAR25, VAR24);
                FUN11(VAR22, 0, VAR12);
                VAR4[VAR11] = FUN3(VAR12[3] >> 7, (1 << 15) - 1);
            }
            break;
        default:
            for (VAR11 = 0; VAR11 < VAR5; VAR11++)
            {
                register int VAR13;
                register int VAR14 = VAR9[VAR11];
                vector signed int VAR22, VAR25 = (vector signed int)VAR24;
                vector signed short VAR31 = FUN4(VAR11 * 2 * VAR10, VAR8);
                vector unsigned char VAR32 = FUN6((VAR11 * 2 * VAR10), VAR8);
                vector unsigned char VAR16 = FUN4(VAR14, VAR7);
                vector unsigned char VAR33 = FUN6(VAR14, VAR7);
                for (VAR13 = 0; VAR13 < VAR10 - 15; VAR13 += 16)
                {
                    vector unsigned char VAR17 = FUN4(VAR14 + VAR13 + 16, VAR7);
                    vector unsigned char VAR18 = FUN5(VAR16, VAR17, VAR33);
                    vector signed short VAR26 = (vector signed short)(FUN7((vector unsigned char)VAR24, VAR18));
                    vector signed short VAR27 = (vector signed short)(FUN8((vector unsigned char)VAR24, VAR18));
                    vector signed short VAR34 = FUN4((VAR11 * 2 * VAR10) + (VAR13 * 2) + 16, VAR8);
                    vector signed short VAR35 = FUN4((VAR11 * 2 * VAR10) + (VAR13 * 2) + 32, VAR8);
                    vector signed short VAR28 = FUN5(VAR31, VAR34, VAR32);
                    vector signed short VAR29 = FUN5(VAR34, VAR35, VAR32);
                    vector signed int VAR30 = FUN12(VAR26, VAR28, VAR25);
                    VAR25 = FUN12(VAR27, VAR29, VAR30);
                    VAR31 = VAR35;
                    VAR16 = VAR17;
                }
                if (VAR13 < VAR10 - 7)
                {
                    vector unsigned char VAR17, VAR18;
                    vector signed short VAR19, VAR34, VAR20;
                    if ((((VAR23)VAR7 + VAR14) % 16) > 8)
                    {
                        VAR17 = FUN4(VAR14 + VAR13 + 16, VAR7);
                    }
                    VAR18 = FUN5(VAR16, VAR17, VAR33);
                    VAR19 = (vector signed short)(FUN7((vector unsigned char)VAR24, VAR18));
                    VAR34 = FUN4((VAR11 * 2 * VAR10) + (VAR13 * 2) + 16, VAR8);
                    VAR20 = FUN5(VAR31, VAR34, VAR32);
                    VAR25 = FUN12(VAR19, VAR20, VAR25);
                }
                VAR22 = FUN10(VAR25, VAR24);
                FUN11(VAR22, 0, VAR12);
                VAR4[VAR11] = FUN3(VAR12[3] >> 7, (1 << 15) - 1);
            }
        }
}