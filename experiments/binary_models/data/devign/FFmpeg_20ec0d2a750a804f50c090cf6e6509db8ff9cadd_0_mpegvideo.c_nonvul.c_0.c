void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5->VAR6 || !VAR4 || !VAR4->VAR7 || (VAR2->VAR5->VAR8->VAR9 & VAR10))
        return;
    if (VAR2->VAR5->VAR11 & (VAR12 | VAR13 | VAR14))
    {
        int VAR15, VAR16;
        FUN2(VAR2->VAR5, VAR17, "", FUN3(VAR4->VAR18));
        for (VAR16 = 0; VAR16 < VAR2->VAR19; VAR16++)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR20; VAR15++)
            {
                if (VAR2->VAR5->VAR11 & VAR12)
                {
                    int VAR21 = VAR2->VAR22[VAR15 + VAR16 * VAR2->VAR23];
                    if (VAR21 > 9)
                        VAR21 = 9;
                    FUN2(VAR2->VAR5, VAR17, "", VAR21);
                }
                if (VAR2->VAR5->VAR11 & VAR13)
                {
                    FUN2(VAR2->VAR5, VAR17, "", VAR4->VAR24[VAR15 + VAR16 * VAR2->VAR23]);
                }
                if (VAR2->VAR5->VAR11 & VAR14)
                {
                    int VAR7 = VAR4->VAR7[VAR15 + VAR16 * VAR2->VAR23];
                    if (FUN4(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN5(VAR7) && FUN6(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN7(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN8(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN9(VAR7) && FUN10(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN9(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN11(VAR7) && FUN10(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN11(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN10(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (!FUN12(VAR7, 1))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (!FUN12(VAR7, 0))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else
                    {
                        FUN13(FUN12(VAR7, 0) && FUN12(VAR7, 1));
                        FUN2(VAR2->VAR5, VAR17, "");
                    }
                    if (FUN14(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN15(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN16(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else if (FUN5(VAR7) || FUN17(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else
                        FUN2(VAR2->VAR5, VAR17, "");
                    if (FUN18(VAR7))
                        FUN2(VAR2->VAR5, VAR17, "");
                    else
                        FUN2(VAR2->VAR5, VAR17, "");
                }
            }
            FUN2(VAR2->VAR5, VAR17, "");
        }
    }
    if ((VAR2->VAR5->VAR11 & (VAR25 | VAR26)) || (VAR2->VAR5->VAR27))
    {
        const int VAR28 = 1 + VAR2->VAR29;
        int VAR30;
        VAR31 *VAR32;
        int VAR33;
        int VAR34, VAR35, VAR36;
        const int VAR37 = VAR2->VAR5->VAR37;
        const int VAR38 = VAR2->VAR5->VAR38;
        const int VAR39 = 4 - VAR4->VAR40;
        const int VAR41 = (VAR2->VAR20 << VAR39) + (VAR2->VAR42 == VAR43 ? 0 : 1);
        VAR2->VAR44 = 0;
        FUN19(VAR2->VAR5->VAR45, &VAR34, &VAR35);
        for (VAR33 = 0; VAR33 < 3; VAR33++)
        {
            size_t VAR46 = (VAR33 == 0) ? VAR4->VAR47[VAR33] * FUN20(VAR38, 16) : VAR4->VAR47[VAR33] * FUN20(VAR38, 16) >> VAR35;
            VAR2->VAR48[VAR33] = FUN21(VAR2->VAR48[VAR33], VAR46);
            memcpy(VAR2->VAR48[VAR33], VAR4->VAR49[VAR33], VAR46);
            VAR4->VAR49[VAR33] = VAR2->VAR48[VAR33];
        }
        VAR4->VAR50 = VAR51;
        VAR4->VAR52 = NULL;
        VAR32 = VAR4->VAR49[0];
        VAR36 = 16 >> VAR35;
        for (VAR30 = 0; VAR30 < VAR2->VAR19; VAR30++)
        {
            int VAR53;
            for (VAR53 = 0; VAR53 < VAR2->VAR20; VAR53++)
            {
                const int VAR54 = VAR53 + VAR30 * VAR2->VAR23;
                if ((VAR2->VAR5->VAR27) && VAR4->VAR55[0])
                {
                    int VAR50;
                    for (VAR50 = 0; VAR50 < 3; VAR50++)
                    {
                        int VAR56 = 0;
                        switch (VAR50)
                        {
                        case 0:
                            if ((!(VAR2->VAR5->VAR27 & VAR57)) || (VAR4->VAR18 != VAR58))
                                continue;
                            VAR56 = 0;
                            break;
                        case 1:
                            if ((!(VAR2->VAR5->VAR27 & VAR59)) || (VAR4->VAR18 != VAR60))
                                continue;
                            VAR56 = 0;
                            break;
                        case 2:
                            if ((!(VAR2->VAR5->VAR27 & VAR61)) || (VAR4->VAR18 != VAR60))
                                continue;
                            VAR56 = 1;
                            break;
                        }
                        if (!FUN12(VAR4->VAR7[VAR54], VAR56))
                            continue;
                        if (FUN14(VAR4->VAR7[VAR54]))
                        {
                            int VAR33;
                            for (VAR33 = 0; VAR33 < 4; VAR33++)
                            {
                                int VAR62 = VAR53 * 16 + 4 + 8 * (VAR33 & 1);
                                int VAR63 = VAR30 * 16 + 4 + 8 * (VAR33 >> 1);
                                int VAR64 = (VAR53 * 2 + (VAR33 & 1) + (VAR30 * 2 + (VAR33 >> 1)) * VAR41) << (VAR39 - 1);
                                int VAR65 = (VAR4->VAR55[VAR56][VAR64][0] >> VAR28) + VAR62;
                                int VAR66 = (VAR4->VAR55[VAR56][VAR64][1] >> VAR28) + VAR63;
                                FUN22(VAR32, VAR62, VAR63, VAR65, VAR66, VAR37, VAR38, VAR2->VAR47, 100);
                            }
                        }
                        else if (FUN15(VAR4->VAR7[VAR54]))
                        {
                            int VAR33;
                            for (VAR33 = 0; VAR33 < 2; VAR33++)
                            {
                                int VAR62 = VAR53 * 16 + 8;
                                int VAR63 = VAR30 * 16 + 4 + 8 * VAR33;
                                int VAR64 = (VAR53 * 2 + (VAR30 * 2 + VAR33) * VAR41) << (VAR39 - 1);
                                int VAR65 = (VAR4->VAR55[VAR56][VAR64][0] >> VAR28);
                                int VAR66 = (VAR4->VAR55[VAR56][VAR64][1] >> VAR28);
                                if (FUN18(VAR4->VAR7[VAR54]))
                                    VAR66 *= 2;
                                FUN22(VAR32, VAR62, VAR63, VAR65 + VAR62, VAR66 + VAR63, VAR37, VAR38, VAR2->VAR47, 100);
                            }
                        }
                        else if (FUN16(VAR4->VAR7[VAR54]))
                        {
                            int VAR33;
                            for (VAR33 = 0; VAR33 < 2; VAR33++)
                            {
                                int VAR62 = VAR53 * 16 + 4 + 8 * VAR33;
                                int VAR63 = VAR30 * 16 + 8;
                                int VAR64 = (VAR53 * 2 + VAR33 + VAR30 * 2 * VAR41) << (VAR39 - 1);
                                int VAR65 = VAR4->VAR55[VAR56][VAR64][0] >> VAR28;
                                int VAR66 = VAR4->VAR55[VAR56][VAR64][1] >> VAR28;
                                if (FUN18(VAR4->VAR7[VAR54]))
                                    VAR66 *= 2;
                                FUN22(VAR32, VAR62, VAR63, VAR65 + VAR62, VAR66 + VAR63, VAR37, VAR38, VAR2->VAR47, 100);
                            }
                        }
                        else
                        {
                            int VAR62 = VAR53 * 16 + 8;
                            int VAR63 = VAR30 * 16 + 8;
                            int VAR64 = (VAR53 + VAR30 * VAR41) << VAR39;
                            int VAR65 = (VAR4->VAR55[VAR56][VAR64][0] >> VAR28) + VAR62;
                            int VAR66 = (VAR4->VAR55[VAR56][VAR64][1] >> VAR28) + VAR63;
                            FUN22(VAR32, VAR62, VAR63, VAR65, VAR66, VAR37, VAR38, VAR2->VAR47, 100);
                        }
                    }
                }
                if ((VAR2->VAR5->VAR11 & VAR25))
                {
                    uint64_t VAR67 = (VAR4->VAR24[VAR54] * 128 / 31) * 0x0101010101010101ULL;
                    int VAR16;
                    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
                    {
                        *(VAR68 *)(VAR4->VAR49[1] + 8 * VAR53 + (VAR36 * VAR30 + VAR16) * VAR4->VAR47[1]) = VAR67;
                        *(VAR68 *)(VAR4->VAR49[2] + 8 * VAR53 + (VAR36 * VAR30 + VAR16) * VAR4->VAR47[2]) = VAR67;
                    }
                }
                if ((VAR2->VAR5->VAR11 & VAR26) && VAR4->VAR55[0])
                {
                    int VAR7 = VAR4->VAR7[VAR54];
                    uint64_t VAR69, VAR70;
                    int VAR16;
                    VAR69 = (int)(128 + VAR71 * FUN23(VAR72 * 3.141592 / 180));
                    VAR70 = (int)(128 + VAR71 * FUN24(VAR72 * 3.141592 / 180));
                    VAR69 = VAR70 = 128;
                    if (FUN4(VAR7))
                    {
                        FUN25(120, 48)
                    }
                    else if ((FUN5(VAR7) && FUN6(VAR7)) || FUN8(VAR7))
                    {
                        FUN25(30, 48)
                    }
                    else if (FUN7(VAR7))
                    {
                        FUN25(90, 48)
                    }
                    else if (FUN9(VAR7) && FUN10(VAR7))
                    {
                    }
                    else if (FUN9(VAR7))
                    {
                        FUN25(150, 48)
                    }
                    else if (FUN11(VAR7) && FUN10(VAR7))
                    {
                        FUN25(170, 48)
                    }
                    else if (FUN11(VAR7))
                    {
                        FUN25(190, 48)
                    }
                    else if (FUN10(VAR7))
                    {
                    }
                    else if (!FUN12(VAR7, 1))
                    {
                        FUN25(240, 48)
                    }
                    else if (!FUN12(VAR7, 0))
                    {
                        FUN25(0, 48)
                    }
                    else
                    {
                        FUN13(FUN12(VAR7, 0) && FUN12(VAR7, 1));
                        FUN25(300, 48)
                    }
                    VAR69 *= 0x0101010101010101ULL;
                    VAR70 *= 0x0101010101010101ULL;
                    for (VAR16 = 0; VAR16 < VAR36; VAR16++)
                    {
                        *(VAR68 *)(VAR4->VAR49[1] + 8 * VAR53 + (VAR36 * VAR30 + VAR16) * VAR4->VAR47[1]) = VAR69;
                        *(VAR68 *)(VAR4->VAR49[2] + 8 * VAR53 + (VAR36 * VAR30 + VAR16) * VAR4->VAR47[2]) = VAR70;
                    }
                    if (FUN14(VAR7) || FUN15(VAR7))
                    {
                        *(VAR68 *)(VAR4->VAR49[0] + 16 * VAR53 + 0 + (16 * VAR30 + 8) * VAR4->VAR47[0]) ^= 0x8080808080808080ULL;
                        *(VAR68 *)(VAR4->VAR49[0] + 16 * VAR53 + 8 + (16 * VAR30 + 8) * VAR4->VAR47[0]) ^= 0x8080808080808080ULL;
                    }
                    if (FUN14(VAR7) || FUN16(VAR7))
                    {
                        for (VAR16 = 0; VAR16 < 16; VAR16++)
                            VAR4->VAR49[0][16 * VAR53 + 8 + (16 * VAR30 + VAR16) * VAR4->VAR47[0]] ^= 0x80;
                    }
                    if (FUN14(VAR7) && VAR39 >= 2)
                    {
                        int VAR73 = 1 << (VAR39 - 2);
                        for (VAR33 = 0; VAR33 < 4; VAR33++)
                        {
                            int VAR62 = VAR53 * 16 + 8 * (VAR33 & 1);
                            int VAR63 = VAR30 * 16 + 8 * (VAR33 >> 1);
                            int VAR64 = (VAR53 * 2 + (VAR33 & 1) + (VAR30 * 2 + (VAR33 >> 1)) * VAR41) << (VAR39 - 1);
                            VAR74 *VAR75 = (VAR74 *)&VAR4->VAR55[0][VAR64];
                            if (VAR75[0] != VAR75[VAR73] || VAR75[VAR73 * VAR41] != VAR75[VAR73 * (VAR41 + 1)])
                                for (VAR16 = 0; VAR16 < 8; VAR16++)
                                    VAR4->VAR49[0][VAR62 + 4 + (VAR63 + VAR16) * VAR4->VAR47[0]] ^= 0x80;
                            if (VAR75[0] != VAR75[VAR73 * VAR41] || VAR75[VAR73] != VAR75[VAR73 * (VAR41 + 1)])
                                *(VAR68 *)(VAR4->VAR49[0] + VAR62 + (VAR63 + 4) * VAR4->VAR47[0]) ^= 0x8080808080808080ULL;
                        }
                    }
                    if (FUN18(VAR7) && VAR2->VAR42 == VAR43)
                    {
                    }
                }
                VAR2->VAR22[VAR54] = 0;
            }
        }
    }
}