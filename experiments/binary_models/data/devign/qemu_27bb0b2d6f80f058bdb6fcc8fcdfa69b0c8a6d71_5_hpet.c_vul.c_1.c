static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    int VAR4;
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint64_t VAR7, VAR8, VAR9, VAR10;
    FUN2("" VAR11 "", VAR2, VAR3);
    VAR10 = VAR2;
    VAR7 = FUN3(VAR1, VAR2);
    VAR8 = VAR3;
    if (VAR10 >= 0x100 && VAR10 <= 0x3ff)
    {
        uint8_t VAR12 = (VAR2 - 0x100) / 0x20;
        FUN2("", VAR12);
        VAR13 *VAR14 = &VAR6->VAR14[VAR12];
        if (VAR12 > VAR15 - 1)
        {
            FUN2("");
            return;
        }
        switch ((VAR2 - 0x100) % 0x20)
        {
        case VAR16:
            FUN2("");
            VAR9 = FUN4(VAR8, VAR7, VAR17);
            VAR14->VAR18 = (VAR14->VAR18 & 0xffffffff00000000ULL) | VAR9;
            if (VAR8 & VAR19)
            {
                VAR14->VAR20 = (VAR21)VAR14->VAR20;
                VAR14->VAR22 = (VAR21)VAR14->VAR22;
            }
            if (VAR8 & VAR23)
            {
                FUN5("");
                FUN6(-1);
            }
            break;
        case VAR16 + 4:
            FUN2("");
            break;
        case VAR24:
            FUN2("");
            if (VAR14->VAR18 & VAR19)
                VAR8 = (VAR21)VAR8;
            if (!FUN7(VAR14) || (VAR14->VAR18 & VAR25))
                VAR14->VAR20 = (VAR14->VAR20 & 0xffffffff00000000ULL) | VAR8;
            if (FUN7(VAR14))
            {
                VAR8 &= (VAR14->VAR18 & VAR19 ? ~0u : ~0ull) >> 1;
                VAR14->VAR22 = (VAR14->VAR22 & 0xffffffff00000000ULL) | VAR8;
            }
            VAR14->VAR18 &= ~VAR25;
            if (FUN8())
                FUN9(VAR14);
            break;
        case VAR24 + 4:
            FUN2("");
            if (!FUN7(VAR14) || (VAR14->VAR18 & VAR25))
                VAR14->VAR20 = (VAR14->VAR20 & 0xffffffffULL) | VAR8 << 32;
            else
            {
                VAR8 &= (VAR14->VAR18 & VAR19 ? ~0u : ~0ull) >> 1;
                VAR14->VAR22 = (VAR14->VAR22 & 0xffffffffULL) | VAR8 << 32;
            }
            VAR14->VAR18 &= ~VAR25;
            if (FUN8())
                FUN9(VAR14);
            break;
        case VAR26 + 4:
            FUN2("");
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
        case VAR27:
            return;
        case VAR28:
            VAR9 = FUN4(VAR8, VAR7, VAR29);
            VAR6->VAR18 = (VAR6->VAR18 & 0xffffffff00000000ULL) | VAR9;
            if (FUN10(VAR7, VAR8, VAR30))
            {
                VAR6->VAR31 = FUN11(VAR6->VAR32) - FUN12(VAR33);
                for (VAR4 = 0; VAR4 < VAR15; VAR4++)
                    if ((&VAR6->VAR14[VAR4])->VAR20 != ~0ULL)
                        FUN9(&VAR6->VAR14[VAR4]);
            }
            else if (FUN13(VAR7, VAR8, VAR30))
            {
                VAR6->VAR32 = FUN14();
                for (VAR4 = 0; VAR4 < VAR15; VAR4++)
                    FUN15(&VAR6->VAR14[VAR4]);
            }
            if (FUN10(VAR7, VAR8, VAR34))
            {
                FUN16();
            }
            else if (FUN13(VAR7, VAR8, VAR34))
            {
                FUN17();
            }
            break;
        case VAR28 + 4:
            FUN2("");
            break;
        case VAR35:
            break;
        case VAR36:
            if (FUN8())
                FUN5("");
            VAR6->VAR32 = (VAR6->VAR32 & 0xffffffff00000000ULL) | VAR3;
            FUN2("" VAR11 "", VAR3, VAR6->VAR32);
            break;
        case VAR36 + 4:
            if (FUN8())
                FUN5("");
            VAR6->VAR32 = (VAR6->VAR32 & 0xffffffffULL) | (((VAR37)VAR3) << 32);
            FUN2("" VAR11 "", VAR3, VAR6->VAR32);
            break;
        default:
            FUN2("");
            break;
        }
    }
}