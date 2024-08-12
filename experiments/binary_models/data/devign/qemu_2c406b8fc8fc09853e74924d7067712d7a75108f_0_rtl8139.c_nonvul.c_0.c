static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR10, VAR3, VAR3)->VAR11;
    int VAR12 = VAR6;
    uint32_t VAR13 = 0;
    uint8_t VAR14[60];
    static const uint8_t VAR15[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    FUN3(("", VAR12));
    if (!VAR9->VAR16)
    {
        FUN3((""));
        return -1;
    }
    if (!FUN4(VAR9))
    {
        FUN3((""));
        return -1;
    }
    if (VAR9->VAR17 & VAR18)
    {
        FUN3((""));
    }
    else
    {
        if (!memcmp(VAR5, VAR15, 6))
        {
            if (!(VAR9->VAR17 & VAR19))
            {
                FUN3((""));
                ++VAR9->VAR20.VAR21;
                return VAR12;
            }
            VAR13 |= VAR22;
            FUN3((""));
            ++VAR9->VAR20.VAR23;
        }
        else if (VAR5[0] & 0x01)
        {
            if (!(VAR9->VAR17 & VAR24))
            {
                FUN3((""));
                ++VAR9->VAR20.VAR21;
                return VAR12;
            }
            int VAR25 = FUN5(VAR5);
            if (!(VAR9->VAR26[VAR25 >> 3] & (1 << (VAR25 & 7))))
            {
                FUN3((""));
                ++VAR9->VAR20.VAR21;
                return VAR12;
            }
            VAR13 |= VAR27;
            FUN3((""));
            ++VAR9->VAR20.VAR28;
        }
        else if (VAR9->VAR29[0] == VAR5[0] && VAR9->VAR29[1] == VAR5[1] && VAR9->VAR29[2] == VAR5[2] && VAR9->VAR29[3] == VAR5[3] && VAR9->VAR29[4] == VAR5[4] && VAR9->VAR29[5] == VAR5[5])
        {
            if (!(VAR9->VAR17 & VAR30))
            {
                FUN3((""));
                ++VAR9->VAR20.VAR21;
                return VAR12;
            }
            VAR13 |= VAR31;
            FUN3((""));
            ++VAR9->VAR20.VAR32;
        }
        else
        {
            FUN3((""));
            ++VAR9->VAR20.VAR21;
            return VAR12;
        }
    }
    if (VAR12 < VAR33)
    {
        memcpy(VAR14, VAR5, VAR12);
        memset(VAR14 + VAR12, 0, VAR33 - VAR12);
        VAR5 = VAR14;
        VAR12 = VAR33;
    }
    if (FUN6(VAR9))
    {
        FUN3((""));
        int VAR34 = VAR9->VAR35;
        target_phys_addr_t VAR36;
        VAR36 = FUN7(VAR9->VAR37, VAR9->VAR38);
        VAR36 += 16 * VAR34;
        FUN3(("" VAR39 "", VAR34, VAR9->VAR38, VAR9->VAR37, (VAR40)VAR36));
        uint32_t VAR41, VAR42, VAR43, VAR44, VAR45;
        FUN8(VAR36, (VAR4 *)&VAR41, 4);
        VAR42 = FUN9(VAR41);
        FUN8(VAR36 + 4, (VAR4 *)&VAR41, 4);
        VAR43 = FUN9(VAR41);
        FUN8(VAR36 + 8, (VAR4 *)&VAR41, 4);
        VAR44 = FUN9(VAR41);
        FUN8(VAR36 + 12, (VAR4 *)&VAR41, 4);
        VAR45 = FUN9(VAR41);
        FUN3(("", VAR34, VAR42, VAR43, VAR44, VAR45));
        if (!(VAR42 & VAR46))
        {
            FUN3(("", VAR34));
            VAR9->VAR47 |= VAR48;
            ++VAR9->VAR49;
            ++VAR9->VAR20.VAR21;
            ++VAR9->VAR20.VAR50;
            FUN10(VAR9);
            return VAR6;
        }
        uint32_t VAR51 = VAR42 & VAR52;
        if (VAR12 + 4 > VAR51)
        {
            FUN3(("", VAR34, VAR51, VAR12));
            VAR9->VAR47 |= VAR48;
            ++VAR9->VAR49;
            ++VAR9->VAR20.VAR21;
            ++VAR9->VAR20.VAR50;
            FUN10(VAR9);
            return VAR6;
        }
        target_phys_addr_t VAR53 = FUN7(VAR44, VAR45);
        FUN11(VAR53, VAR5, VAR12);
        if (VAR9->VAR54 & VAR55)
        {
        }
        VAR41 = FUN12(FUN13(0, VAR5, VAR12));
        FUN11(VAR53 + VAR12, (VAR4 *)&VAR41, 4);
        VAR42 &= ~VAR46;
        VAR42 |= VAR56;
        VAR42 |= VAR57;
        if (VAR13 & VAR22)
            VAR42 |= VAR58;
        if (VAR13 & VAR27)
            VAR42 |= VAR59;
        if (VAR13 & VAR31)
            VAR42 |= VAR60;
        VAR42 &= ~VAR52;
        VAR42 |= (VAR12 + 4);
        VAR43 &= ~VAR61;
        VAR41 = FUN12(VAR42);
        FUN11(VAR36, (VAR4 *)&VAR41, 4);
        VAR41 = FUN12(VAR43);
        FUN11(VAR36 + 4, (VAR4 *)&VAR41, 4);
        ++VAR9->VAR20.VAR62;
        if (VAR42 & VAR63)
        {
            VAR9->VAR35 = 0;
        }
        else
        {
            ++VAR9->VAR35;
        }
        FUN3((""));
    }
    else
    {
        FUN3((""));
        int VAR64 = FUN14(VAR9->VAR65 + VAR9->VAR66 - VAR9->VAR67, VAR9->VAR65);
        if (VAR64 != 0 && VAR12 + 8 >= VAR64)
        {
            FUN3(("", VAR9->VAR65, VAR9->VAR67, VAR9->VAR66, VAR64, VAR12 + 8));
            VAR9->VAR47 |= VAR48;
            ++VAR9->VAR49;
            FUN10(VAR9);
            return VAR6;
        }
        VAR13 |= VAR68;
        VAR13 |= (((VAR12 + 4) << 16) & 0xffff0000);
        uint32_t VAR41 = FUN12(VAR13);
        FUN15(VAR9, (VAR4 *)&VAR41, 4);
        FUN15(VAR9, VAR5, VAR12);
        VAR41 = FUN12(FUN13(0, VAR5, VAR12));
        FUN15(VAR9, (VAR4 *)&VAR41, 4);
        VAR9->VAR67 = FUN14((VAR9->VAR67 + 3) & ~0x3, VAR9->VAR65);
        FUN3(("", VAR9->VAR65, VAR9->VAR67, VAR9->VAR66));
    }
    VAR9->VAR47 |= VAR69;
    if (VAR7)
    {
        FUN10(VAR9);
    }
    return VAR6;
}