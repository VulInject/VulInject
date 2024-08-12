static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    int VAR5;
    VAR6 *VAR7 = VAR1;
    uint64_t VAR8, VAR9, VAR10, VAR11;
    FUN2("" VAR12 "", VAR2, VAR3);
    VAR11 = VAR2;
    VAR8 = FUN3(VAR1, VAR2, 4);
    VAR9 = VAR3;
    if (VAR11 >= 0x100 && VAR11 <= 0x3ff)
    {
        uint8_t VAR13 = (VAR2 - 0x100) / 0x20;
        VAR14 *VAR15 = &VAR7->VAR15[VAR13];
        FUN2("", VAR13);
        if (VAR13 > VAR7->VAR16)
        {
            FUN2("");
            return;
        }
        switch ((VAR2 - 0x100) % 0x20)
        {
        case VAR17:
            FUN2("");
            if (FUN4(VAR8, VAR9, VAR18))
            {
                FUN5(VAR15, 0);
            }
            VAR10 = FUN6(VAR9, VAR8, VAR19);
            VAR15->VAR20 = (VAR15->VAR20 & 0xffffffff00000000ULL) | VAR10;
            if (VAR9 & VAR21)
            {
                VAR15->VAR22 = (VAR23)VAR15->VAR22;
                VAR15->VAR24 = (VAR23)VAR15->VAR24;
            }
            if (FUN4(VAR8, VAR9, VAR25))
            {
                FUN7(VAR15);
            }
            else if (FUN8(VAR8, VAR9, VAR25))
            {
                FUN9(VAR15);
            }
            break;
        case VAR17 + 4:
            FUN2("");
            break;
        case VAR26:
            FUN2("");
            if (VAR15->VAR20 & VAR21)
            {
                VAR9 = (VAR23)VAR9;
            }
            if (!FUN10(VAR15) || (VAR15->VAR20 & VAR27))
            {
                VAR15->VAR22 = (VAR15->VAR22 & 0xffffffff00000000ULL) | VAR9;
            }
            if (FUN10(VAR15))
            {
                VAR9 &= (VAR15->VAR20 & VAR21 ? ~0u : ~0ull) >> 1;
                VAR15->VAR24 = (VAR15->VAR24 & 0xffffffff00000000ULL) | VAR9;
            }
            VAR15->VAR20 &= ~VAR27;
            if (FUN11(VAR7))
            {
                FUN7(VAR15);
            }
            break;
        case VAR26 + 4:
            FUN2("");
            if (!FUN10(VAR15) || (VAR15->VAR20 & VAR27))
            {
                VAR15->VAR22 = (VAR15->VAR22 & 0xffffffffULL) | VAR9 << 32;
            }
            else
            {
                VAR9 &= (VAR15->VAR20 & VAR21 ? ~0u : ~0ull) >> 1;
                VAR15->VAR24 = (VAR15->VAR24 & 0xffffffffULL) | VAR9 << 32;
            }
            VAR15->VAR20 &= ~VAR27;
            if (FUN11(VAR7))
            {
                FUN7(VAR15);
            }
            break;
        case VAR28:
            VAR15->VAR29 = (VAR15->VAR29 & 0xffffffff00000000ULL) | VAR9;
            break;
        case VAR28 + 4:
            VAR15->VAR29 = (VAR9 << 32) | (VAR15->VAR29 & 0xffffffff);
            break;
        default:
            FUN2("");
            break;
        }
        return;
    }
    else
    {
        switch (VAR11)
        {
        case VAR30:
            return;
        case VAR31:
            VAR10 = FUN6(VAR9, VAR8, VAR32);
            VAR7->VAR20 = (VAR7->VAR20 & 0xffffffff00000000ULL) | VAR10;
            if (FUN4(VAR8, VAR9, VAR33))
            {
                VAR7->VAR34 = FUN12(VAR7->VAR35) - FUN13(VAR36);
                for (VAR5 = 0; VAR5 < VAR7->VAR16; VAR5++)
                {
                    if ((&VAR7->VAR15[VAR5])->VAR22 != ~0ULL)
                    {
                        FUN7(&VAR7->VAR15[VAR5]);
                    }
                }
            }
            else if (FUN8(VAR8, VAR9, VAR33))
            {
                VAR7->VAR35 = FUN14(VAR7);
                for (VAR5 = 0; VAR5 < VAR7->VAR16; VAR5++)
                {
                    FUN9(&VAR7->VAR15[VAR5]);
                }
            }
            if (FUN4(VAR8, VAR9, VAR37))
            {
                FUN15(VAR7->VAR38, 0);
                FUN16(VAR7->VAR39[0]);
                FUN16(VAR7->VAR39[VAR40]);
            }
            else if (FUN8(VAR8, VAR9, VAR37))
            {
                FUN16(VAR7->VAR39[0]);
                FUN15(VAR7->VAR38, 1);
                FUN15(VAR7->VAR39[VAR40], VAR7->VAR41);
            }
            break;
        case VAR31 + 4:
            FUN2("");
            break;
        case VAR42:
            VAR10 = VAR9 & VAR7->VAR43;
            for (VAR5 = 0; VAR5 < VAR7->VAR16; VAR5++)
            {
                if (VAR10 & (1 << VAR5))
                {
                    FUN5(&VAR7->VAR15[VAR5], 0);
                }
            }
            break;
        case VAR44:
            if (FUN11(VAR7))
            {
                FUN2("");
            }
            VAR7->VAR35 = (VAR7->VAR35 & 0xffffffff00000000ULL) | VAR3;
            FUN2("" VAR12 "", VAR3, VAR7->VAR35);
            break;
        case VAR44 + 4:
            if (FUN11(VAR7))
            {
                FUN2("");
            }
            VAR7->VAR35 = (VAR7->VAR35 & 0xffffffffULL) | (((VAR45)VAR3) << 32);
            FUN2("" VAR12 "", VAR3, VAR7->VAR35);
            break;
        default:
            FUN2("");
            break;
        }
    }
}