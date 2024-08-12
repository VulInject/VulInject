static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    uint32_t VAR12;
    int VAR13;
    int VAR14;
    int64_t VAR15;
    VAR8->VAR16 = 0;
    VAR12 = FUN2(VAR6);
    if (VAR12 != FUN3('', '', '', ''))
        return -1;
    VAR8->VAR17 = FUN4(VAR6);
    if (VAR8->VAR17 < VAR18 || VAR8->VAR17 > VAR19)
    {
        FUN5(VAR2, VAR20, "", VAR8->VAR17 / 1000, (VAR8->VAR17 % 1000) / 10);
        return -1;
        if (VAR8->VAR17 >= 3980)
        {
            VAR8->VAR21 = FUN4(VAR6);
            VAR8->VAR22 = FUN2(VAR6);
            VAR8->VAR23 = FUN2(VAR6);
            VAR8->VAR24 = FUN2(VAR6);
            VAR8->VAR25 = FUN2(VAR6);
            VAR8->VAR26 = FUN2(VAR6);
            VAR8->VAR27 = FUN2(VAR6);
            VAR8->VAR28 = FUN2(VAR6);
            FUN6(VAR6, VAR8->VAR29, 16);
            if (VAR8->VAR22 > 52)
                FUN7(VAR6, VAR8->VAR22 - 52, VAR30);
            VAR8->VAR31 = FUN4(VAR6);
            VAR8->VAR32 = FUN4(VAR6);
            VAR8->VAR33 = FUN2(VAR6);
            VAR8->VAR34 = FUN2(VAR6);
            VAR8->VAR35 = FUN2(VAR6);
            VAR8->VAR36 = FUN4(VAR6);
            VAR8->VAR37 = FUN4(VAR6);
            VAR8->VAR38 = FUN2(VAR6);
        }
        else
        {
            VAR8->VAR22 = 0;
            VAR8->VAR23 = 32;
            VAR8->VAR31 = FUN4(VAR6);
            VAR8->VAR32 = FUN4(VAR6);
            VAR8->VAR37 = FUN4(VAR6);
            VAR8->VAR38 = FUN2(VAR6);
            VAR8->VAR25 = FUN2(VAR6);
            VAR8->VAR28 = FUN2(VAR6);
            VAR8->VAR35 = FUN2(VAR6);
            VAR8->VAR34 = FUN2(VAR6);
            if (VAR8->VAR32 & VAR39)
            {
                FUN7(VAR6, 4, VAR30);
                VAR8->VAR23 += 4;
                if (VAR8->VAR32 & VAR40)
                {
                    VAR8->VAR24 = FUN2(VAR6);
                    VAR8->VAR23 += 4;
                    VAR8->VAR24 *= sizeof(VAR41);
                }
                else
                    VAR8->VAR24 = VAR8->VAR35 * sizeof(VAR41);
                if (VAR8->VAR32 & VAR42)
                    VAR8->VAR36 = 8;
                else if (VAR8->VAR32 & VAR43)
                    VAR8->VAR36 = 24;
                else
                    VAR8->VAR36 = 16;
                if (VAR8->VAR17 >= 3950)
                    VAR8->VAR33 = 73728 * 4;
                else if (VAR8->VAR17 >= 3900 || (VAR8->VAR17 >= 3800 && VAR8->VAR31 >= 4000))
                    VAR8->VAR33 = 73728;
                else
                    VAR8->VAR33 = 9216;
                if (!(VAR8->VAR32 & VAR44))
                    FUN7(VAR6, VAR8->VAR25, VAR30);
                if (VAR8->VAR35 > VAR45 / sizeof(VAR46))
                {
                    FUN5(VAR2, VAR20, "", VAR8->VAR35);
                    return -1;
                    VAR8->VAR47 = FUN8(VAR8->VAR35 * sizeof(VAR46));
                    if (!VAR8->VAR47)
                        return FUN9(VAR48);
                    VAR8->VAR49 = VAR8->VAR16 + VAR8->VAR22 + VAR8->VAR23 + VAR8->VAR24 + VAR8->VAR25;
                    VAR8->VAR50 = 0;
                    VAR8->VAR51 = VAR8->VAR34;
                    if (VAR8->VAR35 > 1)
                        VAR8->VAR51 += VAR8->VAR33 * (VAR8->VAR35 - 1);
                    if (VAR8->VAR24 > 0)
                    {
                        VAR8->VAR52 = FUN8(VAR8->VAR24);
                        for (VAR13 = 0; VAR13 < VAR8->VAR24 / sizeof(VAR53); VAR13++)
                            VAR8->VAR52[VAR13] = FUN2(VAR6);
                        VAR8->VAR47[0].VAR54 = VAR8->VAR49;
                        VAR8->VAR47[0].VAR55 = VAR8->VAR33;
                        VAR8->VAR47[0].VAR56 = 0;
                        for (VAR13 = 1; VAR13 < VAR8->VAR35; VAR13++)
                        {
                            VAR8->VAR47[VAR13].VAR54 = VAR8->VAR52[VAR13];
                            VAR8->VAR47[VAR13].VAR55 = VAR8->VAR33;
                            VAR8->VAR47[VAR13 - 1].VAR57 = VAR8->VAR47[VAR13].VAR54 - VAR8->VAR47[VAR13 - 1].VAR54;
                            VAR8->VAR47[VAR13].VAR56 = (VAR8->VAR47[VAR13].VAR54 - VAR8->VAR47[0].VAR54) & 3;
                            VAR8->VAR47[VAR8->VAR35 - 1].VAR57 = VAR8->VAR34 * 4;
                            VAR8->VAR47[VAR8->VAR35 - 1].VAR55 = VAR8->VAR34;
                            for (VAR13 = 0; VAR13 < VAR8->VAR35; VAR13++)
                            {
                                if (VAR8->VAR47[VAR13].VAR56)
                                {
                                    VAR8->VAR47[VAR13].VAR54 -= VAR8->VAR47[VAR13].VAR56;
                                    VAR8->VAR47[VAR13].VAR57 += VAR8->VAR47[VAR13].VAR56;
                                    VAR8->VAR47[VAR13].VAR57 = (VAR8->VAR47[VAR13].VAR57 + 3) & ~3;
                                    FUN10(VAR2, VAR8);
                                    if (!FUN11(VAR6))
                                    {
                                        FUN12(VAR2);
                                        FUN7(VAR6, 0, VAR58);
                                        FUN5(VAR2, VAR59, "", VAR8->VAR17 / 1000, (VAR8->VAR17 % 1000) / 10, VAR8->VAR31);
                                        VAR11 = FUN13(VAR2, 0);
                                        if (!VAR11)
                                            return -1;
                                        VAR14 = (VAR8->VAR35 == 0) ? 0 : ((VAR8->VAR35 - 1) * VAR8->VAR33) + VAR8->VAR34;
                                        VAR11->VAR60->VAR61 = VAR62;
                                        VAR11->VAR60->VAR63 = VAR64;
                                        VAR11->VAR60->VAR65 = FUN3('', '', '', '');
                                        VAR11->VAR60->VAR37 = VAR8->VAR37;
                                        VAR11->VAR60->VAR66 = VAR8->VAR38;
                                        VAR11->VAR60->VAR67 = VAR8->VAR36;
                                        VAR11->VAR60->VAR68 = VAR69;
                                        VAR11->VAR70 = VAR8->VAR35;
                                        VAR11->VAR71 = 0;
                                        VAR11->VAR72 = VAR14 / VAR69;
                                        FUN14(VAR11, 64, VAR69, VAR8->VAR38);
                                        VAR11->VAR60->VAR73 = FUN8(VAR74);
                                        VAR11->VAR60->VAR75 = VAR74;
                                        FUN15(VAR11->VAR60->VAR73 + 0, VAR8->VAR17);
                                        FUN15(VAR11->VAR60->VAR73 + 2, VAR8->VAR31);
                                        FUN15(VAR11->VAR60->VAR73 + 4, VAR8->VAR32);
                                        VAR15 = 0;
                                        for (VAR13 = 0; VAR13 < VAR8->VAR35; VAR13++)
                                        {
                                            VAR8->VAR47[VAR13].VAR15 = VAR15;
                                            FUN16(VAR11, VAR8->VAR47[VAR13].VAR54, VAR8->VAR47[VAR13].VAR15, 0, 0, VAR76);
                                            VAR15 += VAR8->VAR33 / VAR69;
                                            return 0;