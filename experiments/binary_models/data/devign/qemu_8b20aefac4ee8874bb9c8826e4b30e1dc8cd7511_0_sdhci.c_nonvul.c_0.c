FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    unsigned VAR7 = 8 * (VAR2 & 0x3);
    uint32_t VAR8 = ~(((1ULL << (VAR4 * 8)) - 1) << VAR7);
    uint32_t VAR9 = VAR3;
    VAR9 <<= VAR7;
    switch (VAR2 & ~0x3)
    {
    case VAR10:
        VAR6->VAR11 = (VAR6->VAR11 & VAR8) | VAR9;
        FUN2(VAR6->VAR11, VAR8, VAR9);
        if (!(VAR8 & 0xFF000000) && FUN3(VAR6->VAR12) && VAR6->VAR13 && VAR6->VAR14 && FUN4(VAR6->VAR15) == VAR16)
        {
            FUN5(VAR6);
        }
        break;
    case VAR17:
        if (!FUN3(VAR6->VAR12))
        {
            FUN2(VAR6->VAR14, VAR8, VAR9);
            FUN2(VAR6->VAR13, VAR8 >> 16, VAR9 >> 16);
        }
        if (FUN6(VAR6->VAR14, 0, 12) > VAR6->VAR18)
        {
            FUN7(VAR19, ""
                                           "",
                          VAR20, VAR6->VAR14, VAR6->VAR18);
            VAR6->VAR14 = FUN8(VAR6->VAR14, 0, 12, VAR6->VAR18);
        }
        break;
    case VAR21:
        FUN2(VAR6->VAR22, VAR8, VAR9);
        break;
    case VAR23:
        if (!(VAR6->VAR24 & VAR25))
        {
            VAR9 &= ~VAR26;
        }
        FUN2(VAR6->VAR27, VAR8, VAR9 & VAR28);
        FUN2(VAR6->VAR29, VAR8 >> 16, VAR9 >> 16);
        if ((VAR8 & 0xFF000000) || !FUN9(VAR6))
        {
            break;
        }
        FUN10(VAR6);
        break;
    case VAR30:
        if (FUN11(VAR6, VAR2 - VAR30))
        {
            FUN12(VAR6, VAR9 >> VAR7, VAR4);
        }
        break;
    case VAR31:
        if (!(VAR8 & 0xFF0000))
        {
            FUN13(VAR6, VAR9 >> 16);
        }
        FUN2(VAR6->VAR15, VAR8, VAR9);
        FUN2(VAR6->VAR32, VAR8 >> 8, VAR9 >> 8);
        FUN2(VAR6->VAR33, VAR8 >> 24, VAR9 >> 24);
        if (!(VAR6->VAR12 & VAR34) || ((VAR6->VAR32 >> 1) & 0x7) < 5 || !(VAR6->VAR24 & (1 << (31 - ((VAR6->VAR32 >> 1) & 0x7)))))
        {
            VAR6->VAR32 &= ~VAR35;
        }
        break;
    case VAR36:
        if (!(VAR8 & 0xFF000000))
        {
            FUN14(VAR6, VAR9 >> 24);
        }
        FUN2(VAR6->VAR37, VAR8, VAR9);
        FUN2(VAR6->VAR38, VAR8 >> 16, VAR9 >> 16);
        if (VAR6->VAR37 & VAR39)
        {
            VAR6->VAR37 |= VAR40;
        }
        else
        {
            VAR6->VAR37 &= ~VAR40;
        }
        break;
    case VAR41:
        if (VAR6->VAR42 & VAR43)
        {
            VAR9 &= ~VAR44;
        }
        VAR6->VAR45 &= VAR8 | ~VAR9;
        VAR6->VAR46 &= (VAR8 >> 16) | ~(VAR9 >> 16);
        if (VAR6->VAR46)
        {
            VAR6->VAR45 |= VAR47;
        }
        else
        {
            VAR6->VAR45 &= ~VAR47;
        }
        FUN15(VAR6);
        break;
    case VAR48:
        FUN2(VAR6->VAR42, VAR8, VAR9);
        FUN2(VAR6->VAR49, VAR8 >> 16, VAR9 >> 16);
        VAR6->VAR45 &= VAR6->VAR42;
        VAR6->VAR46 &= VAR6->VAR49;
        if (VAR6->VAR46)
        {
            VAR6->VAR45 |= VAR47;
        }
        else
        {
            VAR6->VAR45 &= ~VAR47;
        }
        if ((VAR6->VAR42 & VAR50) && VAR6->VAR51)
        {
            assert(VAR6->VAR52);
            VAR6->VAR45 |= VAR53;
            VAR6->VAR51 = false;
        }
        FUN15(VAR6);
        break;
    case VAR54:
        FUN2(VAR6->VAR55, VAR8, VAR9);
        FUN2(VAR6->VAR56, VAR8 >> 16, VAR9 >> 16);
        FUN15(VAR6);
        break;
    case VAR57:
        FUN2(VAR6->VAR58, VAR8, VAR9);
        break;
    case VAR59:
        VAR6->VAR60 = (VAR6->VAR60 & (0xFFFFFFFF00000000ULL | (VAR61)VAR8)) | (VAR61)VAR9;
        break;
    case VAR59 + 4:
        VAR6->VAR60 = (VAR6->VAR60 & (0x00000000FFFFFFFFULL | ((VAR61)VAR8 << 32))) | ((VAR61)VAR9 << 32);
        break;
    case VAR62:
        VAR6->VAR63 |= VAR9;
        VAR6->VAR46 |= (VAR9 >> 16) & VAR6->VAR49;
        if (VAR6->VAR63)
        {
            VAR6->VAR46 |= VAR64;
        }
        if (VAR6->VAR46)
        {
            VAR6->VAR45 |= VAR47;
        }
        FUN15(VAR6);
        break;
    default:
        FUN16("", VAR4, (int)VAR2, VAR9 >> VAR7, VAR9 >> VAR7);
        break;
    }
    FUN17("", VAR4, (int)VAR2, VAR9 >> VAR7, VAR9 >> VAR7);
}