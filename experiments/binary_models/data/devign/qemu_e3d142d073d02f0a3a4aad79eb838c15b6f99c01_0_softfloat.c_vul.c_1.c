VAR1 FUN1(float64 VAR2, float64 VAR3, float64 VAR4, int flags VAR5)
{
    flag VAR6, VAR7, VAR8, VAR9;
    int_fast16_t VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    uint64_t VAR16, VAR17, VAR18;
    flag VAR19, VAR20, VAR21;
    uint64_t VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    int VAR28;
    flag VAR29, VAR30;
    VAR2 = FUN2(a VAR31);
    VAR3 = FUN2(b VAR31);
    VAR4 = FUN2(c VAR31);
    VAR16 = FUN3(VAR2);
    VAR10 = FUN4(VAR2);
    VAR6 = FUN5(VAR2);
    VAR17 = FUN3(VAR3);
    VAR11 = FUN4(VAR3);
    VAR7 = FUN5(VAR3);
    VAR18 = FUN3(VAR4);
    VAR12 = FUN4(VAR4);
    VAR8 = FUN5(VAR4);
    VAR30 = ((VAR10 == 0 && VAR16 == 0 && VAR11 == 0x7ff && VAR17 == 0) || (VAR10 == 0x7ff && VAR16 == 0 && VAR11 == 0 && VAR17 == 0));
    if (((VAR10 == 0x7ff) && VAR16) || ((VAR11 == 0x7ff) && VAR17) || ((VAR12 == 0x7ff) && VAR18))
    {
        return FUN6(VAR2, VAR3, VAR4, infzero VAR31);
    }
    if (VAR30)
    {
        FUN7(float_flag_invalid VAR31);
        return VAR32;
    }
    if (VAR33 & VAR34)
    {
        VAR8 ^= 1;
    }
    VAR29 = (VAR33 & VAR35) ? 1 : 0;
    VAR21 = VAR6 ^ VAR7;
    if (VAR33 & VAR36)
    {
        VAR21 ^= 1;
    }
    VAR19 = (VAR10 == 0x7ff) || (VAR11 == 0x7ff);
    VAR20 = ((VAR10 | VAR16) == 0) || ((VAR11 | VAR17) == 0);
    if (VAR12 == 0x7ff)
    {
        if (VAR19 && (VAR21 ^ VAR8))
        {
            FUN7(float_flag_invalid VAR31);
            return VAR32;
        }
        return FUN8(VAR8 ^ VAR29, 0x7ff, 0);
    }
    if (VAR19)
    {
        return FUN8(VAR21 ^ VAR29, 0x7ff, 0);
    }
    if (VAR20)
    {
        if (VAR12 == 0)
        {
            if (VAR18 == 0)
            {
                if (VAR21 == VAR8)
                {
                    VAR9 = VAR21;
                }
                else if (FUN9(VAR37) == VAR38)
                {
                    VAR9 = 1;
                }
                else
                {
                    VAR9 = 0;
                }
                return FUN8(VAR9 ^ VAR29, 0, 0);
            }
            if (FUN9(VAR39))
            {
                FUN7(float_flag_output_denormal VAR31);
                return FUN8(VAR8 ^ VAR29, 0, 0);
            }
        }
        return FUN8(VAR8 ^ VAR29, VAR12, VAR18);
    }
    if (VAR10 == 0)
    {
        FUN10(VAR16, &VAR10, &VAR16);
    }
    if (VAR11 == 0)
    {
        FUN10(VAR17, &VAR11, &VAR17);
    }
    VAR13 = VAR10 + VAR11 - 0x3fe;
    VAR16 = (VAR16 | FUN11(0x0010000000000000)) << 10;
    VAR17 = (VAR17 | FUN11(0x0010000000000000)) << 11;
    FUN12(VAR16, VAR17, &VAR22, &VAR23);
    if ((VAR40)(VAR22 << 1) >= 0)
    {
        FUN13(VAR22, VAR23, 1, &VAR22, &VAR23);
        VAR13--;
    }
    VAR9 = VAR21 ^ VAR29;
    if (VAR12 == 0)
    {
        if (!VAR18)
        {
            FUN14(VAR22, VAR23, 64, &VAR22, &VAR23);
            return FUN15(VAR9, VAR13 - 1, pSig1 VAR31);
        }
        FUN10(VAR18, &VAR12, &VAR18);
    }
    VAR24 = VAR18 << (126 - 64 - 52);
    VAR25 = 0;
    VAR24 |= FUN11(0x4000000000000000);
    VAR15 = VAR13 - VAR12;
    if (VAR21 == VAR8)
    {
        if (VAR15 > 0)
        {
            FUN14(VAR24, VAR25, VAR15, &VAR24, &VAR25);
            VAR14 = VAR13;
        }
        else if (VAR15 < 0)
        {
            FUN14(VAR22, VAR23, -VAR15, &VAR22, &VAR23);
            VAR14 = VAR12;
        }
        else
        {
            VAR14 = VAR12;
        }
        FUN16(VAR22, VAR23, VAR24, VAR25, &VAR26, &VAR27);
        if ((VAR40)VAR26 < 0)
        {
            FUN14(VAR26, VAR27, 1, &VAR26, &VAR27);
        }
        else
        {
            VAR14--;
        }
        FUN14(VAR26, VAR27, 64, &VAR26, &VAR27);
        return FUN15(VAR9, VAR14, zSig1 VAR31);
    }
    else
    {
        if (VAR15 > 0)
        {
            FUN14(VAR24, VAR25, VAR15, &VAR24, &VAR25);
            FUN17(VAR22, VAR23, VAR24, VAR25, &VAR26, &VAR27);
            VAR14 = VAR13;
        }
        else if (VAR15 < 0)
        {
            FUN14(VAR22, VAR23, -VAR15, &VAR22, &VAR23);
            FUN17(VAR24, VAR25, VAR22, VAR23, &VAR26, &VAR27);
            VAR14 = VAR12;
            VAR9 ^= 1;
        }
        else
        {
            VAR14 = VAR13;
            if (FUN18(VAR24, VAR25, VAR22, VAR23))
            {
                FUN17(VAR22, VAR23, VAR24, VAR25, &VAR26, &VAR27);
            }
            else if (FUN18(VAR22, VAR23, VAR24, VAR25))
            {
                FUN17(VAR24, VAR25, VAR22, VAR23, &VAR26, &VAR27);
                VAR9 ^= 1;
            }
            else
            {
                VAR9 = VAR29;
                if (FUN9(VAR37) == VAR38)
                {
                    VAR9 ^= 1;
                }
                return FUN8(VAR9, 0, 0);
            }
        }
        --VAR14;
        if (VAR26)
        {
            VAR28 = FUN19(VAR26) - 1;
            FUN13(VAR26, VAR27, VAR28, &VAR26, &VAR27);
            if (VAR27)
            {
                VAR26 |= 1;
            }
            VAR14 -= VAR28;
        }
        else
        {
            VAR28 = FUN19(VAR27) - 1;
            VAR26 = VAR27 << VAR28;
            VAR14 -= (VAR28 + 64);
        }
        return FUN15(VAR9, VAR14, zSig0 VAR31);
    }
}