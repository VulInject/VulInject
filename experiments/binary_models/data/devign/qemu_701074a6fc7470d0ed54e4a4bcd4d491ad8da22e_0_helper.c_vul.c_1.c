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
    VAR2->VAR31 = (VAR2->VAR31 & VAR2->VAR32) | (VAR3 & (VAR33 << 1));
    VAR2->VAR31 &= VAR2->VAR34;
    VAR2->VAR35 = (VAR2->VAR35 & ((~0ULL) << (VAR2->VAR36 - 7))) | (FUN4(VAR3, 62, 2) << (VAR2->VAR36 - 9)) | (FUN4(VAR3, 13, VAR2->VAR36 - 13) << 4);
    VAR7->VAR37 = VAR8;
    VAR2->VAR9 = VAR9;