static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3, VAR4 = 0;
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    uint8_t VAR12[16];
    int VAR13;
    FUN2(VAR6, VAR12, 16);
    if (memcmp(VAR12, VAR14, 16))
        if (FUN3(VAR6) < 16 + 8 + 16 + 8 + 16 + 8)
            FUN2(VAR6, VAR12, 16);
    if (memcmp(VAR12, VAR15, 16))
    {
        FUN4(VAR2, VAR16, "");
    }
    VAR8->VAR17 = 1;
    VAR11 = FUN5(VAR2, NULL);
    if (!VAR11)
        return FUN6(VAR18);
    while (!FUN7(VAR6))
    {
        if (FUN2(VAR6, VAR12, 16) != 16)
            break;
        VAR3 = FUN3(VAR6);
        if (VAR3 <= 24 || VAR19 - VAR3 < FUN8(VAR6))
            if (!memcmp(VAR12, VAR20, 16))
            {
                VAR13 = FUN9(VAR2, VAR6, VAR11->VAR21, VAR3 - 24, 0);
                if (VAR13 < 0)
                    return VAR13;
                FUN10(VAR6, FUN11(VAR3, FUN12(8)) - VAR3);
                FUN13(VAR11, 64, 1, VAR11->VAR21->VAR22);
            }
            else if (!memcmp(VAR12, VAR23, 16))
            {
                int64_t VAR24;
                VAR24 = FUN3(VAR6);
                if (VAR24 > 0)
                    VAR11->VAR25 = VAR24;
            }
            else if (!memcmp(VAR12, VAR26, 16))
            {
                VAR8->VAR27 = FUN8(VAR6) + VAR3 - 24;
                VAR4 = FUN8(VAR6);
                if (!(VAR6->VAR28 & VAR29))
                    break;
                FUN10(VAR6, VAR3 - 24);
            }
            else if (!memcmp(VAR12, VAR30, 16))
            {
                int64_t VAR31, VAR32, VAR33;
                uint32_t VAR34, VAR35, VAR36;
                VAR31 = FUN8(VAR6);
                VAR32 = VAR31 + FUN11(VAR3, FUN12(8)) - 24;
                VAR34 = FUN14(VAR6);
                for (VAR36 = 0; VAR36 < VAR34; VAR36++)
                {
                    char VAR37[5], *VAR38;
                    if (FUN7(VAR6) || (VAR33 = FUN8(VAR6)) < 0 || VAR33 > VAR32 - 8)
                        break;
                    VAR37[4] = 0;
                    FUN2(VAR6, VAR37, 4);
                    VAR35 = FUN14(VAR6);
                    VAR38 = FUN15(VAR35 + 1);
                    if (!VAR38)
                        return FUN6(VAR18);
                    VAR13 = FUN16(VAR6, VAR35, VAR38, VAR35);
                    FUN10(VAR6, VAR35 - VAR13);
                    FUN17(&VAR2->VAR39, VAR37, VAR38, VAR40);
                }
                FUN10(VAR6, VAR32 - FUN8(VAR6));
            }
            else
            {
                FUN4(VAR2, VAR41, "" VAR42 "", FUN18(VAR12));
                FUN10(VAR6, FUN11(VAR3, FUN12(8)) - 24);
            }
    }
    if (!VAR4)
        return VAR43;
    FUN19(VAR2, NULL, VAR44);
    FUN19(VAR2, NULL, VAR45);
    FUN20(VAR11);
    VAR11->VAR46 = VAR47;
    FUN21(VAR6, VAR4, VAR48);
    FUN22(VAR2, VAR8);
    return 0;