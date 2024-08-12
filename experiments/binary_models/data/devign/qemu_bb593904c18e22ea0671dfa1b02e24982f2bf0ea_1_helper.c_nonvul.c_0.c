static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    target_phys_addr_t VAR8;
    target_ulong VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19;
    VAR16 = VAR20;
    if (VAR2->VAR21 & VAR22)
    {
        VAR23 *VAR24;
        FUN2("");
        VAR24 = FUN3(VAR2, VAR5);
        if (!VAR24)
        {
            return -5;
        }
        VAR10 = (VAR24->VAR10 & VAR25) >> VAR26;
        VAR13 = ~VAR27;
        VAR17 = (VAR24->VAR10 & VAR28) ? VAR29 : VAR30;
        VAR4->VAR31 = !!(VAR16 ? (VAR24->VAR10 & VAR32) : (VAR24->VAR10 & VAR33));
        VAR14 = 0;
        VAR4->VAR34 = !!(VAR24->VAR10 & VAR35);
        VAR4->VAR5 = VAR5;
        VAR11 = 0x00003FFFFFFFFF80ULL;
        VAR15 = 7;
    }
    else
    {
        VAR9 = VAR2->VAR9[VAR5 >> 28];
        VAR13 = 0x0FFFFFFF;
        VAR4->VAR31 = (((VAR9 & 0x20000000) && (VAR16 != 0)) || ((VAR9 & 0x40000000) && (VAR16 == 0))) ? 1 : 0;
        VAR14 = VAR9 & 0x80000000 ? 1 : 0;
        VAR4->VAR34 = VAR9 & 0x10000000 ? 1 : 0;
        VAR10 = VAR9 & 0x00FFFFFF;
        VAR11 = 0x01FFFFC0;
        VAR15 = 6;
        VAR17 = VAR30;
        FUN2("" VAR36 "" VAR36 "" VAR36 "" VAR36 "", VAR5, (int)(VAR5 >> 28), VAR9, VAR2->VAR37, VAR2->VAR38, (int)VAR39, (int)VAR40, VAR16 != 0 ? 1 : 0, VAR6, VAR7);
    }
    FUN2("" VAR36 "", VAR4->VAR31, VAR14, VAR4->VAR34, VAR10);
    VAR18 = -1;
    if (!VAR14)
    {
        if (VAR7 != VAR41 || VAR4->VAR34 == 0)
        {
            VAR12 = (VAR5 & VAR13) >> VAR17;
            if (VAR2->VAR21 & VAR22)
            {
                VAR8 = ((VAR10 ^ VAR12) << VAR15) & VAR11;
            }
            else
            {
                VAR8 = ((VAR10 ^ VAR12) << VAR15) & VAR11;
            }
            FUN2("" VAR42 "" VAR42 "" VAR42 "", VAR2->VAR43, VAR2->VAR44, VAR8);
            VAR4->VAR45[0] = FUN4(VAR2->VAR43, VAR2->VAR44, VAR8);
            VAR8 = (~VAR8) & VAR11;
            FUN2("" VAR42 "" VAR42 "" VAR42 "", VAR2->VAR43, VAR2->VAR44, VAR8);
            VAR4->VAR45[1] = FUN4(VAR2->VAR43, VAR2->VAR44, VAR8);
            if (VAR2->VAR21 & VAR22)
            {
                if (VAR17 > 23)
                {
                    VAR4->VAR46 = (VAR10 << 12) | ((VAR12 << (VAR17 - 16)) & 0xF80);
                }
                else
                {
                    VAR4->VAR46 = (VAR10 << 12) | ((VAR12 >> 4) & 0x0F80);
                }
            }
            else
            {
                VAR4->VAR46 = (VAR10 << 7) | (VAR12 >> 10);
            }
            VAR4->VAR47 = (VAR48)-1ULL;
            if (FUN5(VAR2->VAR21 == VAR49 || VAR2->VAR21 == VAR50))
            {
                VAR18 = FUN6(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            else
            {
                FUN2("" VAR42 "" VAR42 "" VAR36 "" VAR36 "" VAR42 "" VAR42 "", VAR2->VAR43, VAR2->VAR44, VAR10, VAR12, VAR8, VAR4->VAR45[0]);
                VAR18 = FUN7(VAR2, VAR4, 0, VAR6, VAR7, VAR17);
                if (VAR18 < 0)
                {
                    if (VAR5 != 0xEFFFFFFF)
                        FUN2("" VAR42 "" VAR42 "" VAR36 "" VAR36 "" VAR42 "" VAR42 "", VAR2->VAR43, VAR2->VAR44, VAR10, VAR12, VAR8, VAR4->VAR45[1]);
                    VAR19 = FUN7(VAR2, VAR4, 1, VAR6, VAR7, VAR17);
                    if (VAR19 != -1)
                        VAR18 = VAR19;
                }
            }
            if (FUN8())
            {
                target_phys_addr_t VAR51;
                uint32_t VAR52, VAR53, VAR54, VAR55;
                FUN9("" VAR42 "" VAR42 "", VAR56, VAR57 + 0x80);
                for (VAR51 = VAR56; VAR51 < (VAR56 + VAR57 + 0x80); VAR51 += 16)
                {
                    VAR52 = FUN10(VAR51);
                    VAR53 = FUN10(VAR51 + 4);
                    VAR54 = FUN10(VAR51 + 8);
                    VAR55 = FUN10(VAR51 + 12);
                    if (VAR52 != 0 || VAR53 != 0 || VAR54 != 0 || VAR55 != 0)
                    {
                        FUN9(VAR42 "", VAR51, VAR52, VAR53, VAR54, VAR55);
                    }
                }
            }
        }
        else
        {
            FUN2("");
            VAR18 = -3;
        }
    }
    else
    {
        FUN2("");
        switch (VAR7)
        {
        case VAR58:
            break;
        case VAR41:
            return -4;
        case VAR59:
            return -4;
        case VAR60:
            return -4;
        case VAR61:
            VAR4->VAR47 = VAR5;
            return 0;
        case VAR62:
            return -4;
        default:
            FUN9(""
                     "");
            return -4;
        }
        if ((VAR6 == 1 || VAR4->VAR31 != 1) && (VAR6 == 0 || VAR4->VAR31 != 0))
        {
            VAR4->VAR47 = VAR5;
            VAR18 = 2;
        }
        else
        {
            VAR18 = -2;
        }
    }
    return VAR18;
}