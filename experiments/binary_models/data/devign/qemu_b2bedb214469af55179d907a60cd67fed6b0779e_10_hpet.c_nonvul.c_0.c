static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR1;
    uint64_t VAR7, VAR8, VAR9, VAR10;
    FUN2("" VAR11 "", VAR2, VAR3);
    VAR10 = VAR2;
    VAR7 = FUN3(VAR1, VAR2);
    VAR8 = VAR3;
    if (VAR10 >= 0x100 && VAR10 <= 0x3ff)
    {
        uint8_t VAR12 = (VAR2 - 0x100) / 0x20;
        VAR13 *VAR14 = &VAR6->VAR14[VAR12];
        FUN2("", VAR12);
        if (VAR12 > VAR6->VAR15)
        {
            FUN2("");
            return;
        }
        switch ((VAR2 - 0x100) % 0x20)
        {
        case VAR16:
            FUN2("");
            if (FUN4(VAR7, VAR8, VAR17))
            {
                FUN5(VAR14, 0);
            }
            VAR9 = FUN6(VAR8, VAR7, VAR18);
            VAR14->VAR19 = (VAR14->VAR19 & 0xffffffff00000000ULL) | VAR9;
            if (VAR8 & VAR20)
            {
                VAR14->VAR21 = (VAR22)VAR14->VAR21;
                VAR14->VAR23 = (VAR22)VAR14->VAR23;
            }
            if (FUN4(VAR7, VAR8, VAR24))
            {
                FUN7(VAR14);
            }
            else if (FUN8(VAR7, VAR8, VAR24))
            {
                FUN9(VAR14);
            }
            break;
        case VAR16 + 4:
            FUN2("");
            break;
        case VAR25:
            FUN2("");
            if (VAR14->VAR19 & VAR20)
            {
                VAR8 = (VAR22)VAR8;
            }
            if (!FUN10(VAR14) || (VAR14->VAR19 & VAR26))
            {
                VAR14->VAR21 = (VAR14->VAR21 & 0xffffffff00000000ULL) | VAR8;
            }
            if (FUN10(VAR14))
            {
                VAR8 &= (VAR14->VAR19 & VAR20 ? ~0u : ~0ull) >> 1;
                VAR14->VAR23 = (VAR14->VAR23 & 0xffffffff00000000ULL) | VAR8;
            }
            VAR14->VAR19 &= ~VAR26;
            if (FUN11(VAR6))
            {
                FUN7(VAR14);
            }
            break;
        case VAR25 + 4:
            FUN2("");
            if (!FUN10(VAR14) || (VAR14->VAR19 & VAR26))
            {
                VAR14->VAR21 = (VAR14->VAR21 & 0xffffffffULL) | VAR8 << 32;
            }
            else
            {
                VAR8 &= (VAR14->VAR19 & VAR20 ? ~0u : ~0ull) >> 1;
                VAR14->VAR23 = (VAR14->VAR23 & 0xffffffffULL) | VAR8 << 32;
            }
            VAR14->VAR19 &= ~VAR26;
            if (FUN11(VAR6))
            {
                FUN7(VAR14);
            }
            break;
        case VAR27:
            VAR14->VAR28 = (VAR14->VAR28 & 0xffffffff00000000ULL) | VAR8;
            break;
        case VAR27 + 4:
            VAR14->VAR28 = (VAR8 << 32) | (VAR14->VAR28 & 0xffffffff);
            break;
        default:
            FUN2("");
            break;
        }
        return;
    }
    else
    {
        switch (VAR10)
        {
        case VAR29:
            return;
        case VAR30:
            VAR9 = FUN6(VAR8, VAR7, VAR31);
            VAR6->VAR19 = (VAR6->VAR19 & 0xffffffff00000000ULL) | VAR9;
            if (FUN4(VAR7, VAR8, VAR32))
            {
                VAR6->VAR33 = FUN12(VAR6->VAR34) - FUN13(VAR35);
                for (VAR4 = 0; VAR4 < VAR6->VAR15; VAR4++)
                {
                    if ((&VAR6->VAR14[VAR4])->VAR21 != ~0ULL)
                    {
                        FUN7(&VAR6->VAR14[VAR4]);
                    }
                }
            }
            else if (FUN8(VAR7, VAR8, VAR32))
            {
                VAR6->VAR34 = FUN14(VAR6);
                for (VAR4 = 0; VAR4 < VAR6->VAR15; VAR4++)
                {
                    FUN9(&VAR6->VAR14[VAR4]);
                }
            }
            if (FUN4(VAR7, VAR8, VAR36))
            {
                FUN15();
                FUN16(VAR6->VAR37[VAR38]);
            }
            else if (FUN8(VAR7, VAR8, VAR36))
            {
                FUN17();
                FUN18(VAR6->VAR37[VAR38], VAR6->VAR39);
            }
            break;
        case VAR30 + 4:
            FUN2("");
            break;
        case VAR40:
            VAR9 = VAR8 & VAR6->VAR41;
            for (VAR4 = 0; VAR4 < VAR6->VAR15; VAR4++)
            {
                if (VAR9 & (1 << VAR4))
                {
                    FUN5(&VAR6->VAR14[VAR4], 0);
                }
            }
            break;
        case VAR42:
            if (FUN11(VAR6))
            {
                FUN2("");
            }
            VAR6->VAR34 = (VAR6->VAR34 & 0xffffffff00000000ULL) | VAR3;
            FUN2("" VAR11 "", VAR3, VAR6->VAR34);
            break;
        case VAR42 + 4:
            if (FUN11(VAR6))
            {
                FUN2("");
            }
            VAR6->VAR34 = (VAR6->VAR34 & 0xffffffffULL) | (((VAR43)VAR3) << 32);
            FUN2("" VAR11 "", VAR3, VAR6->VAR34);
            break;
        default:
            FUN2("");
            break;
        }
    }
}