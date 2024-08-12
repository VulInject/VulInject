static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    hwaddr VAR10;
    target_ulong VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15;
    target_ulong VAR16, VAR17;
    VAR13 = VAR18;
    VAR4->VAR5 = VAR5;
    VAR16 = VAR2->VAR16[VAR5 >> 28];
    VAR4->VAR19 = (((VAR16 & 0x20000000) && (VAR13 != 0)) || ((VAR16 & 0x40000000) && (VAR13 == 0))) ? 1 : 0;
    VAR12 = VAR16 & 0x80000000 ? 1 : 0;
    VAR4->VAR20 = VAR16 & 0x10000000 ? 1 : 0;
    VAR11 = VAR16 & 0x00FFFFFF;
    VAR14 = VAR21;
    FUN3(VAR22, "" VAR23 "" VAR23 "" VAR23 "" VAR23 "", VAR5, (int)(VAR5 >> 28), VAR16, VAR2->VAR24, VAR2->VAR25, (int)VAR26, (int)VAR27, VAR13 != 0 ? 1 : 0, VAR6, VAR7);
    VAR17 = (VAR5 & ~VAR28) >> VAR14;
    VAR10 = VAR11 ^ VAR17;
    VAR4->VAR29 = (VAR11 << 7) | (VAR17 >> 10);
    FUN3(VAR22, "" VAR23 "", VAR4->VAR19, VAR12, VAR4->VAR20, VAR11);
    VAR15 = -1;
    if (!VAR12)
    {
        if (VAR7 != VAR30 || VAR4->VAR20 == 0)
        {
            FUN3(VAR22, "" VAR31 "" VAR31 "" VAR31 "", FUN4(VAR9), FUN5(VAR9), VAR10);
            VAR4->VAR10[0] = VAR10;
            VAR4->VAR10[1] = ~VAR10;
            VAR4->VAR32 = (VAR33)-1ULL;
            VAR15 = FUN6(VAR2, VAR4, VAR5, VAR6, VAR7);
            if (FUN7(VAR22))
            {
                VAR34 *VAR35 = FUN8(VAR2);
                hwaddr VAR36;
                uint32_t VAR37, VAR38, VAR39, VAR40;
                FUN9("" VAR31 "" VAR31 "", FUN4(VAR9), FUN5(VAR2) + 0x80);
                for (VAR36 = FUN4(VAR9); VAR36 < (FUN4(VAR9) + FUN5(VAR9) + 0x80); VAR36 += 16)
                {
                    VAR37 = FUN10(VAR35->VAR41, VAR36);
                    VAR38 = FUN10(VAR35->VAR41, VAR36 + 4);
                    VAR39 = FUN10(VAR35->VAR41, VAR36 + 8);
                    VAR40 = FUN10(VAR35->VAR41, VAR36 + 12);
                    if (VAR37 != 0 || VAR38 != 0 || VAR39 != 0 || VAR40 != 0)
                    {
                        FUN9(VAR31 "", VAR36, VAR37, VAR38, VAR39, VAR40);
                    }
                }
            }
        }
        else
        {
            FUN3(VAR22, "");
            VAR15 = -3;
        }
    }
    else
    {
        target_ulong VAR16;
        FUN3(VAR22, "");
        VAR16 = VAR2->VAR16[VAR5 >> 28];
        if ((VAR16 & 0x1FF00000) >> 20 == 0x07f)
        {
            VAR4->VAR32 = ((VAR16 & 0xF) << 28) | (VAR5 & 0x0FFFFFFF);
            VAR4->VAR42 = VAR43 | VAR44 | VAR45;
            return 0;
        }
        switch (VAR7)
        {
        case VAR46:
            break;
        case VAR30:
            return -4;
        case VAR47:
            return -4;
        case VAR48:
            return -4;
        case VAR49:
            VAR4->VAR32 = VAR5;
            return 0;
        case VAR50:
            return -4;
        default:
            FUN3(VAR22, ""
                                       "");
            return -4;
        }
        if ((VAR6 == 1 || VAR4->VAR19 != 1) && (VAR6 == 0 || VAR4->VAR19 != 0))
        {
            VAR4->VAR32 = VAR5;
            VAR15 = 2;
        }
        else
        {
            VAR15 = -2;
        }
    }
    return VAR15;
}