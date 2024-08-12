static int FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, uint64_t VAR5, int VAR6, VAR7 *VAR8, int *VAR9, int VAR10)
{
    VAR11 *VAR12 = FUN2(FUN3(VAR2));
    uint64_t VAR13 = 0;
    uint64_t VAR14;
    uint64_t VAR15;
    FUN4("" VAR16 "", VAR17, VAR5);
    if (((VAR6 != VAR18) && (VAR5 & VAR19)) || ((VAR6 == VAR18) && (VAR5 & VAR20)))
    {
        FUN5("", VAR17);
        FUN6(VAR2, VAR3, VAR21, VAR4, VAR10);
        return -1;
    }
    if ((VAR6 <= VAR22) && ((VAR5 & VAR22) != VAR6))
    {
        FUN6(VAR2, VAR3, VAR23, VAR4, VAR10);
        return -1;
    }
    VAR14 = VAR5 & VAR24;
    switch (VAR6)
    {
    case VAR25 + 4:
        VAR13 = (VAR3 >> 50) & 0x3ff8;
        break;
    case VAR25:
        VAR13 = (VAR3 >> 39) & 0x3ff8;
        break;
    case VAR26:
        VAR13 = (VAR3 >> 28) & 0x3ff8;
        break;
    case VAR27:
        VAR13 = (VAR3 >> 17) & 0x3ff8;
        break;
    case VAR18:
        VAR13 = (VAR3 >> 9) & 0x07f8;
        VAR14 = VAR5 & VAR28;
        break;
    }
    VAR15 = FUN7(VAR12->VAR29, VAR14 + VAR13);
    FUN4("" VAR16 "" VAR16 "" VAR16 "", VAR17, VAR14, VAR13, VAR15);
    if (VAR6 == VAR18)
    {
        return FUN8(VAR2, VAR3, VAR4, VAR15, VAR8, VAR9, VAR10);
    }
    else if (VAR6 - 4 == VAR18 && (VAR15 & VAR30) && (VAR2->VAR31[0] & VAR32))
    {
        return FUN9(VAR2, VAR3, VAR4, VAR15, VAR8, VAR9, VAR10);
    }
    else
    {
        return FUN1(VAR2, VAR3, VAR4, VAR15, VAR6 - 4, VAR8, VAR9, VAR10);
    }
}