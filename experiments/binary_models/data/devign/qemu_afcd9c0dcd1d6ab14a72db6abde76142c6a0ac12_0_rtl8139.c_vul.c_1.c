static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR10, VAR3, VAR3)->VAR11;
    int VAR12 = VAR6;
    const VAR4 *VAR13 = NULL;
    uint32_t VAR14 = 0;
    uint8_t VAR15[VAR16 + VAR17];
    static const uint8_t VAR18[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    FUN3(("", VAR12));
    if (!VAR9->VAR19)
    {
        FUN3((""));
        return -1;
    }
    if (!FUN4(VAR9))
    {
        FUN3((""));
        return -1;
    }
    if (VAR9->VAR20 & VAR21)
    {
        FUN3((""));
    }
    else
    {
        if (!memcmp(VAR5, VAR18, 6))
        {
            if (!(VAR9->VAR20 & VAR22))
            {
                FUN3((""));
                ++VAR9->VAR23.VAR24;
                return VAR12;
            }
            VAR14 |= VAR25;
            FUN3((""));
            ++VAR9->VAR23.VAR26;
        }
        else if (VAR5[0] & 0x01)
        {
            if (!(VAR9->VAR20 & VAR27))
            {
                FUN3((""));
                ++VAR9->VAR23.VAR24;
                return VAR12;
            }
            int VAR28 = FUN5(VAR5);
            if (!(VAR9->VAR29[VAR28 >> 3] & (1 << (VAR28 & 7))))
            {
                FUN3((""));
                ++VAR9->VAR23.VAR24;
                return VAR12;
            }
            VAR14 |= VAR30;
            FUN3((""));
            ++VAR9->VAR23.VAR31;
        }
        else if (VAR9->VAR32[0] == VAR5[0] && VAR9->VAR32[1] == VAR5[1] && VAR9->VAR32[2] == VAR5[2] && VAR9->VAR32[3] == VAR5[3] && VAR9->VAR32[4] == VAR5[4] && VAR9->VAR32[5] == VAR5[5])
        {
            if (!(VAR9->VAR20 & VAR33))
            {
                FUN3((""));
                ++VAR9->VAR23.VAR24;
                return VAR12;
            }
            VAR14 |= VAR34;
            FUN3((""));
            ++VAR9->VAR23.VAR35;
        }
        else
        {
            FUN3((""));
            ++VAR9->VAR23.VAR24;
            return VAR12;
        }
    }
    if (VAR12 < VAR16 + VAR17)
    {
        memcpy(VAR15, VAR5, VAR12);
        memset(VAR15 + VAR12, 0, VAR16 + VAR17 - VAR12);
        VAR5 = VAR15;
        if (VAR12 < VAR16)
        {
            VAR12 = VAR16;
        }
    }
    if (FUN6(VAR9))
    {
        FUN3((""));
        int VAR36 = VAR9->VAR37;
        target_phys_addr_t VAR38;
        VAR38 = FUN7(VAR9->VAR39, VAR9->VAR40);
        VAR38 += 16 * VAR36;
        FUN3(("" VAR41 "", VAR36, VAR9->VAR40, VAR9->VAR39, (VAR42)VAR38));
        uint32_t VAR43, VAR44, VAR45, VAR46, VAR47;
        FUN8(VAR38, (VAR4 *)&VAR43, 4);
        VAR44 = FUN9(VAR43);
        FUN8(VAR38 + 4, (VAR4 *)&VAR43, 4);
        VAR45 = FUN9(VAR43);
        FUN8(VAR38 + 8, (VAR4 *)&VAR43, 4);
        VAR46 = FUN9(VAR43);
        FUN8(VAR38 + 12, (VAR4 *)&VAR43, 4);
        VAR47 = FUN9(VAR43);
        FUN3(("", VAR36, VAR44, VAR45, VAR46, VAR47));
        if (!(VAR44 & VAR48))
        {
            FUN3(("", VAR36));
            VAR9->VAR49 |= VAR50;
            ++VAR9->VAR51;
            ++VAR9->VAR23.VAR24;
            ++VAR9->VAR23.VAR52;
            FUN10(VAR9);
            return VAR6;
        }
        uint32_t VAR53 = VAR44 & VAR54;
        if (VAR9->VAR55 & VAR56 && FUN11((VAR57 *)&VAR5[VAR58 * 2]) == VAR59)
        {
            VAR13 = &VAR5[VAR58 * 2];
            VAR12 -= VAR17;
            if (VAR12 < VAR16)
            {
                VAR12 = VAR16;
            }
            VAR45 &= ~VAR60;
            VAR45 |= VAR61 | FUN12((VAR57 *)&VAR13[VAR62]);
            FUN3((""
                         "",
                         FUN11((VAR57 *)&VAR13[VAR62])));
        }
        else
        {
            VAR45 &= ~VAR61;
        }
        if (VAR12 + 4 > VAR53)
        {
            FUN3(("", VAR36, VAR53, VAR12));
            VAR9->VAR49 |= VAR50;
            ++VAR9->VAR51;
            ++VAR9->VAR23.VAR24;
            ++VAR9->VAR23.VAR52;
            FUN10(VAR9);
            return VAR6;
        }
        target_phys_addr_t VAR63 = FUN7(VAR46, VAR47);
        if (VAR13)
        {
            FUN13(VAR63, VAR5, 2 * VAR58);
            FUN13(VAR63 + 2 * VAR58, VAR5 + 2 * VAR58 + VAR17, VAR12 - 2 * VAR58);
        }
        else
        {
            FUN13(VAR63, VAR5, VAR12);
        }
        if (VAR9->VAR55 & VAR64)
        {
        }
        VAR43 = FUN14(FUN15(0, VAR5, VAR6));
        FUN13(VAR63 + VAR12, (VAR4 *)&VAR43, 4);
        VAR44 &= ~VAR48;
        VAR44 |= VAR65;
        VAR44 |= VAR66;
        if (VAR14 & VAR25)
            VAR44 |= VAR67;
        if (VAR14 & VAR30)
            VAR44 |= VAR68;
        if (VAR14 & VAR34)
            VAR44 |= VAR69;
        VAR44 &= ~VAR54;
        VAR44 |= (VAR12 + 4);
        VAR43 = FUN14(VAR44);
        FUN13(VAR38, (VAR4 *)&VAR43, 4);
        VAR43 = FUN14(VAR45);
        FUN13(VAR38 + 4, (VAR4 *)&VAR43, 4);
        ++VAR9->VAR23.VAR70;
        if (VAR44 & VAR71)
        {
            VAR9->VAR37 = 0;
        }
        else
        {
            ++VAR9->VAR37;
        }
        FUN3((""));
    }
    else
    {
        FUN3((""));
        int VAR72 = FUN16(VAR9->VAR73 + VAR9->VAR74 - VAR9->VAR75, VAR9->VAR73);
        if (VAR72 != 0 && VAR12 + 8 >= VAR72)
        {
            FUN3(("", VAR9->VAR73, VAR9->VAR75, VAR9->VAR74, VAR72, VAR12 + 8));
            VAR9->VAR49 |= VAR50;
            ++VAR9->VAR51;
            FUN10(VAR9);
            return VAR6;
        }
        VAR14 |= VAR76;
        VAR14 |= (((VAR12 + 4) << 16) & 0xffff0000);
        uint32_t VAR43 = FUN14(VAR14);
        FUN17(VAR9, (VAR4 *)&VAR43, 4);
        FUN17(VAR9, VAR5, VAR12);
        VAR43 = FUN14(FUN15(0, VAR5, VAR12));
        FUN17(VAR9, (VAR4 *)&VAR43, 4);
        VAR9->VAR75 = FUN16((VAR9->VAR75 + 3) & ~0x3, VAR9->VAR73);
        FUN3(("", VAR9->VAR73, VAR9->VAR75, VAR9->VAR74));
    }
    VAR9->VAR49 |= VAR77;
    if (VAR7)
    {
        FUN10(VAR9);
    }
    return VAR6;
}