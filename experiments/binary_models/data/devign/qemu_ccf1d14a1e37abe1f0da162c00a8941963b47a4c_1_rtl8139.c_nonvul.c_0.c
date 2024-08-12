static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR1;
    uint32_t VAR8 = 0;
    uint8_t VAR9[60];
    static const uint8_t VAR10[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    FUN2(("", VAR4));
    if (!VAR7->VAR11)
    {
        FUN2((""));
        return;
    }
    if (!FUN3(VAR7))
    {
        FUN2((""));
        return;
    }
    if (VAR7->VAR12 & VAR13)
    {
        FUN2((""));
    }
    else
    {
        if (!memcmp(VAR3, VAR10, 6))
        {
            if (!(VAR7->VAR12 & VAR14))
            {
                FUN2((""));
                ++VAR7->VAR15.VAR16;
                return;
            }
            VAR8 |= VAR17;
            FUN2((""));
            ++VAR7->VAR15.VAR18;
        }
        else if (VAR3[0] & 0x01)
        {
            if (!(VAR7->VAR12 & VAR19))
            {
                FUN2((""));
                ++VAR7->VAR15.VAR16;
                return;
            }
            int VAR20 = FUN4(VAR3);
            if (!(VAR7->VAR21[VAR20 >> 3] & (1 << (VAR20 & 7))))
            {
                FUN2((""));
                ++VAR7->VAR15.VAR16;
                return;
            }
            VAR8 |= VAR22;
            FUN2((""));
            ++VAR7->VAR15.VAR23;
        }
        else if (VAR7->VAR24[0] == VAR3[0] && VAR7->VAR24[1] == VAR3[1] && VAR7->VAR24[2] == VAR3[2] && VAR7->VAR24[3] == VAR3[3] && VAR7->VAR24[4] == VAR3[4] && VAR7->VAR24[5] == VAR3[5])
        {
            if (!(VAR7->VAR12 & VAR25))
            {
                FUN2((""));
                ++VAR7->VAR15.VAR16;
                return;
            }
            VAR8 |= VAR26;
            FUN2((""));
            ++VAR7->VAR15.VAR27;
        }
        else
        {
            FUN2((""));
            ++VAR7->VAR15.VAR16;
            return;
        }
    }
    if (VAR4 < VAR28)
    {
        memcpy(VAR9, VAR3, VAR4);
        memset(VAR9 + VAR4, 0, VAR28 - VAR4);
        VAR3 = VAR9;
        VAR4 = VAR28;
    }
    if (FUN5(VAR7))
    {
        FUN2((""));
        int VAR29 = VAR7->VAR30;
        target_phys_addr_t VAR31;
        VAR31 = FUN6(VAR7->VAR32, VAR7->VAR33);
        VAR31 += 16 * VAR29;
        FUN2(("" VAR34 "", VAR29, VAR7->VAR33, VAR7->VAR32, (VAR35)VAR31));
        uint32_t VAR36, VAR37, VAR38, VAR39, VAR40;
        FUN7(VAR31, (VAR2 *)&VAR36, 4);
        VAR37 = FUN8(VAR36);
        FUN7(VAR31 + 4, (VAR2 *)&VAR36, 4);
        VAR38 = FUN8(VAR36);
        FUN7(VAR31 + 8, (VAR2 *)&VAR36, 4);
        VAR39 = FUN8(VAR36);
        FUN7(VAR31 + 12, (VAR2 *)&VAR36, 4);
        VAR40 = FUN8(VAR36);
        FUN2(("", VAR29, VAR37, VAR38, VAR39, VAR40));
        if (!(VAR37 & VAR41))
        {
            FUN2(("", VAR29));
            VAR7->VAR42 |= VAR43;
            ++VAR7->VAR44;
            ++VAR7->VAR15.VAR16;
            ++VAR7->VAR15.VAR45;
            FUN9(VAR7);
            return;
        }
        uint32_t VAR46 = VAR37 & VAR47;
        if (VAR4 + 4 > VAR46)
        {
            FUN2(("", VAR29, VAR46, VAR4));
            VAR7->VAR42 |= VAR43;
            ++VAR7->VAR44;
            ++VAR7->VAR15.VAR16;
            ++VAR7->VAR15.VAR45;
            FUN9(VAR7);
            return;
        }
        target_phys_addr_t VAR48 = FUN6(VAR39, VAR40);
        FUN10(VAR48, VAR3, VAR4);
        if (VAR7->VAR49 & VAR50)
        {
        }
        VAR36 = FUN11(FUN12(0, VAR3, VAR4));
        VAR36 = 0;
        FUN10(VAR48 + VAR4, (VAR2 *)&VAR36, 4);
        VAR37 &= ~VAR41;
        VAR37 |= VAR51;
        VAR37 |= VAR52;
        if (VAR8 & VAR17)
            VAR37 |= VAR53;
        if (VAR8 & VAR22)
            VAR37 |= VAR54;
        if (VAR8 & VAR26)
            VAR37 |= VAR55;
        VAR37 &= ~VAR47;
        VAR37 |= (VAR4 + 4);
        VAR38 &= ~VAR56;
        VAR36 = FUN11(VAR37);
        FUN10(VAR31, (VAR2 *)&VAR36, 4);
        VAR36 = FUN11(VAR38);
        FUN10(VAR31 + 4, (VAR2 *)&VAR36, 4);
        ++VAR7->VAR15.VAR57;
        if (VAR37 & VAR58)
        {
            VAR7->VAR30 = 0;
        }
        else
        {
            ++VAR7->VAR30;
        }
        FUN2((""));
    }
    else
    {
        FUN2((""));
        int VAR59 = FUN13(VAR7->VAR60 + VAR7->VAR61 - VAR7->VAR62, VAR7->VAR60);
        if (VAR59 != 0 && VAR4 + 8 >= VAR59)
        {
            FUN2(("", VAR7->VAR60, VAR7->VAR62, VAR7->VAR61, VAR59, VAR4 + 8));
            VAR7->VAR42 |= VAR43;
            ++VAR7->VAR44;
            FUN9(VAR7);
            return;
        }
        VAR8 |= VAR63;
        VAR8 |= (((VAR4 + 4) << 16) & 0xffff0000);
        uint32_t VAR36 = FUN11(VAR8);
        FUN14(VAR7, (VAR2 *)&VAR36, 4);
        FUN14(VAR7, VAR3, VAR4);
        VAR36 = FUN11(FUN12(0, VAR3, VAR4));
        VAR36 = 0;
        FUN14(VAR7, (VAR2 *)&VAR36, 4);
        VAR7->VAR62 = FUN13((VAR7->VAR62 + 3) & ~0x3, VAR7->VAR60);
        FUN2(("", VAR7->VAR60, VAR7->VAR62, VAR7->VAR61));
    }
    VAR7->VAR42 |= VAR64;
    if (VAR5)
    {
        FUN9(VAR7);
    }
}