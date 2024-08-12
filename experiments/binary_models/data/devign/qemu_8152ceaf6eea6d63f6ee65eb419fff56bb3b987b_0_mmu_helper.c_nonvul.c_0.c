static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    hwaddr VAR8;
    target_ulong VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    VAR11 = VAR15;
    VAR4->VAR5 = VAR5;
    if (VAR2->VAR16 & VAR17)
    {
        VAR18 *VAR19;
        target_ulong VAR20;
        int VAR21;
        FUN2("");
        VAR19 = FUN3(VAR2, VAR5);
        if (!VAR19)
        {
            return -5;
        }
        if (VAR19->VAR9 & VAR22)
        {
            VAR9 = (VAR19->VAR9 & VAR23) >> VAR24;
            VAR21 = 40;
        }
        else
        {
            VAR9 = (VAR19->VAR9 & VAR23) >> VAR25;
            VAR21 = 28;
        }
        VAR12 = (VAR19->VAR9 & VAR26) ? VAR27 : VAR28;
        VAR4->VAR29 = !!(VAR11 ? (VAR19->VAR9 & VAR30) : (VAR19->VAR9 & VAR31));
        VAR10 = 0;
        VAR4->VAR32 = !!(VAR19->VAR9 & VAR33);
        VAR20 = VAR5 & ((1ULL << VAR21) - (1ULL << VAR12));
        if (VAR19->VAR9 & VAR22)
        {
            VAR8 = VAR9 ^ (VAR9 << 25) ^ (VAR20 >> VAR12);
        }
        else
        {
            VAR8 = VAR9 ^ (VAR20 >> VAR12);
        }
        VAR4->VAR34 = (VAR19->VAR9 & VAR35) | ((VAR20 >> 16) & ((1ULL << VAR21) - 0x80));
    }
    else
    {
        target_ulong VAR36, VAR37;
        VAR36 = VAR2->VAR36[VAR5 >> 28];
        VAR4->VAR29 = (((VAR36 & 0x20000000) && (VAR11 != 0)) || ((VAR36 & 0x40000000) && (VAR11 == 0))) ? 1 : 0;
        VAR10 = VAR36 & 0x80000000 ? 1 : 0;
        VAR4->VAR32 = VAR36 & 0x10000000 ? 1 : 0;
        VAR9 = VAR36 & 0x00FFFFFF;
        VAR12 = VAR28;
        FUN2("" VAR38 "" VAR38 "" VAR38 "" VAR38 "", VAR5, (int)(VAR5 >> 28), VAR36, VAR2->VAR39, VAR2->VAR40, (int)VAR41, (int)VAR42, VAR11 != 0 ? 1 : 0, VAR6, VAR7);
        VAR37 = (VAR5 & ~VAR43) >> VAR12;
        VAR8 = VAR9 ^ VAR37;
        VAR4->VAR34 = (VAR9 << 7) | (VAR37 >> 10);
    }
    FUN2("" VAR38 "", VAR4->VAR29, VAR10, VAR4->VAR32, VAR9);
    VAR13 = -1;
    if (!VAR10)
    {
        if (VAR7 != VAR44 || VAR4->VAR32 == 0)
        {
            FUN2("" VAR45 "" VAR45 "" VAR45 "", VAR2->VAR46, VAR2->VAR47, VAR8);
            VAR4->VAR8[0] = VAR8;
            VAR4->VAR8[1] = ~VAR8;
            VAR4->VAR48 = (VAR49)-1ULL;
            if (FUN4(VAR2->VAR16 == VAR50 || VAR2->VAR16 == VAR51))
            {
                VAR13 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            else
            {
                FUN2("" VAR45 "" VAR45 "" VAR38 "" VAR38 "" VAR45 "", VAR2->VAR46, VAR2->VAR47, VAR9, VAR4->VAR34, VAR4->VAR8[0]);
                VAR13 = FUN6(VAR2, VAR4, 0, VAR6, VAR7, VAR12);
                if (VAR13 < 0)
                {
                    FUN2("" VAR45 "" VAR45 "" VAR38 "" VAR38 "" VAR45 "", VAR2->VAR46, VAR2->VAR47, VAR9, VAR4->VAR34, VAR4->VAR8[1]);
                    VAR14 = FUN6(VAR2, VAR4, 1, VAR6, VAR7, VAR12);
                    if (VAR14 != -1)
                    {
                        VAR13 = VAR14;
                    }
                }
            }
            if (FUN7())
            {
                hwaddr VAR52;
                uint32_t VAR53, VAR54, VAR55, VAR56;
                FUN8("" VAR45 "" VAR45 "", VAR57, VAR58 + 0x80);
                for (VAR52 = VAR57; VAR52 < (VAR57 + VAR58 + 0x80); VAR52 += 16)
                {
                    VAR53 = FUN9(VAR52);
                    VAR54 = FUN9(VAR52 + 4);
                    VAR55 = FUN9(VAR52 + 8);
                    VAR56 = FUN9(VAR52 + 12);
                    if (VAR53 != 0 || VAR54 != 0 || VAR55 != 0 || VAR56 != 0)
                    {
                        FUN8(VAR45 "", VAR52, VAR53, VAR54, VAR55, VAR56);
                    }
                }
            }
        }
        else
        {
            FUN2("");
            VAR13 = -3;
        }
    }
    else
    {
        target_ulong VAR36;
        FUN2("");
        VAR36 = VAR2->VAR36[VAR5 >> 28];
        if ((VAR36 & 0x1FF00000) >> 20 == 0x07f)
        {
            VAR4->VAR48 = ((VAR36 & 0xF) << 28) | (VAR5 & 0x0FFFFFFF);
            VAR4->VAR59 = VAR60 | VAR61 | VAR62;
            return 0;
        }
        switch (VAR7)
        {
        case VAR63:
            break;
        case VAR44:
            return -4;
        case VAR64:
            return -4;
        case VAR65:
            return -4;
        case VAR66:
            VAR4->VAR48 = VAR5;
            return 0;
        case VAR67:
            return -4;
        default:
            FUN8(""
                     "");
            return -4;
        }
        if ((VAR6 == 1 || VAR4->VAR29 != 1) && (VAR6 == 0 || VAR4->VAR29 != 0))
        {
            VAR4->VAR48 = VAR5;
            VAR13 = 2;
        }
        else
        {
            VAR13 = -2;
        }
    }
    return VAR13;
}