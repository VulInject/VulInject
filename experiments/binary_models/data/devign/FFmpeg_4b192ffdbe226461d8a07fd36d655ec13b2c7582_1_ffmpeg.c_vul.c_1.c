static int FUN1(int VAR1)
{
    VAR2 *VAR3 = NULL;
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        VAR6 *VAR7 = VAR8[VAR4];
        VAR9 *VAR10 = VAR11[VAR7->VAR12];
        VAR13 *VAR14;
        VAR15 *VAR16 = VAR7->VAR17;
        int VAR18 = 0;
        if (!VAR7->VAR14 || !VAR7->VAR14->VAR19->VAR19)
            continue;
        VAR14 = VAR7->VAR14->VAR14;
        if (!VAR7->VAR20)
        {
            char VAR21[1024];
            VAR18 = FUN2(VAR7, VAR21, sizeof(VAR21));
            if (VAR18 < 0)
            {
                FUN3(NULL, VAR22, "", VAR7->VAR12, VAR7->VAR23, VAR21);
                FUN4(1);
            }
        }
        if (!VAR7->VAR3 && !(VAR7->VAR3 = FUN5()))
        {
            return FUN6(VAR24);
        }
        VAR3 = VAR7->VAR3;
        while (1)
        {
            double VAR25 = VAR26;
            VAR18 = FUN7(VAR14, VAR3, VAR27);
            if (VAR18 < 0)
            {
                if (VAR18 != FUN6(VAR28) && VAR18 != VAR29)
                {
                    FUN3(NULL, VAR30, "", FUN8(VAR18));
                }
                else if (VAR1 && VAR18 == VAR29)
                {
                    if (FUN9(VAR14) == VAR31)
                        FUN10(VAR10, VAR7, NULL, VAR26);
                }
                break;
            }
            if (VAR7->VAR32)
            {
                FUN11(VAR3);
                continue;
            }
            if (VAR3->VAR33 != VAR26)
            {
                int64_t VAR34 = (VAR10->VAR34 == VAR26) ? 0 : VAR10->VAR34;
                AVRational VAR35 = FUN12(VAR14);
                AVRational VAR36 = VAR16->VAR37;
                int VAR38 = FUN13(29 - FUN14(VAR36.VAR39), 0, 16);
                VAR36.VAR39 <<= VAR38;
                VAR25 = FUN15(VAR3->VAR33, VAR35, VAR36) - FUN15(VAR34, VAR40, VAR36);
                VAR25 /= 1 << VAR38;
                VAR25 += FUN16(VAR25) * 1.0 / (1 << 17);
                VAR3->VAR33 = FUN15(VAR3->VAR33, VAR35, VAR16->VAR37) - FUN15(VAR34, VAR40, VAR16->VAR37);
            }
            switch (FUN9(VAR14))
            {
            case VAR31:
                if (!VAR7->VAR41.VAR42)
                    VAR16->VAR43 = VAR3->VAR43;
                if (VAR44)
                {
                    FUN3(NULL, VAR45, "", FUN17(VAR3->VAR33), FUN18(VAR3->VAR33, &VAR16->VAR37), VAR25, VAR16->VAR37.VAR42, VAR16->VAR37.VAR39);
                }
                FUN10(VAR10, VAR7, VAR3, VAR25);
                break;
            case VAR46:
                if (!(VAR16->VAR47->VAR48 & VAR49) && VAR16->VAR50 != FUN19(VAR3))
                {
                    FUN3(NULL, VAR22, "");
                    break;
                }
                FUN20(VAR10, VAR7, VAR3);
                break;
            default:
                FUN21(0);
            }
            FUN11(VAR3);
        }
    }
    return 0;
}