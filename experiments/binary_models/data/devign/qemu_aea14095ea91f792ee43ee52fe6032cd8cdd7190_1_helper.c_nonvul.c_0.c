static void FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3(VAR2));
    int VAR8 = 0, VAR9 = 0;
    if (VAR4 == VAR10)
    {
        VAR9 |= VAR11;
    }
    switch (VAR5)
    {
    default:
    case VAR12:
        if (VAR4 == VAR13)
        {
            VAR8 = VAR14;
        }
        else
        {
            VAR8 = VAR15;
        }
        break;
    case VAR16:
        if (VAR4 == VAR13)
        {
            VAR8 = VAR17;
        }
        else
        {
            VAR8 = VAR18;
        }
        VAR9 |= VAR19;
        break;
    case VAR20:
        if (VAR4 == VAR13)
        {
            VAR8 = VAR17;
        }
        else
        {
            VAR8 = VAR18;
        }
        break;
    case VAR21:
        VAR8 = VAR22;
        break;
    case VAR23:
        if (VAR2->VAR24 & (1 << VAR25))
        {
            VAR8 = VAR26;
        }
        else
        {
            VAR8 = VAR18;
        }
        break;
    case VAR27:
        if (VAR2->VAR24 & (1 << VAR25))
        {
            VAR8 = VAR28;
        }
        else
        {
            VAR8 = VAR18;
        }
        break;
    }
    VAR2->VAR29 = VAR3;
    VAR2->VAR30 = (VAR2->VAR30 & ~0x007fffff) | ((VAR3 >> 9) & 0x007ffff0);
    VAR2->VAR31 = (VAR2->VAR31 & 0xFF) | (VAR3 & (VAR32 << 1));
    VAR2->VAR31 &= VAR2->VAR33;
    VAR2->VAR34 = (VAR2->VAR34 & ((~0ULL) << (VAR2->VAR35 - 7))) | ((VAR3 & 0xC00000000000ULL) >> (55 - VAR2->VAR35)) | ((VAR3 & ((1ULL << VAR2->VAR35) - 1) & 0xFFFFFFFFFFFFE000ULL) >> 9);
    VAR7->VAR36 = VAR8;
    VAR2->VAR9 = VAR9;
}