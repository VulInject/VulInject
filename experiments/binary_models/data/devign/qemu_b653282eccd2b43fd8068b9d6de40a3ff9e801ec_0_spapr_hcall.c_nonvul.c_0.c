static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10 = FUN2(VAR3);
    target_ulong VAR11;
    if (!(VAR10->VAR12 & VAR13))
    {
        return VAR14;
    }
    if (VAR5)
    {
        return VAR15;
    }
    if (VAR6)
    {
        return VAR16;
    }
    switch (VAR4)
    {
    case VAR17:
        VAR11 = 0;
        break;
    case VAR18:
        VAR11 = 0x18000;
        break;
    case VAR19:
        VAR11 = 0xC000000000004000ULL;
        break;
    default:
        return VAR20;
    }
    FUN3(VAR8)
    {
        VAR21 *VAR22 = &FUN4(VAR3)->VAR22;
        FUN5(VAR8, VAR23, VAR4 << VAR24, VAR25);
        VAR22->VAR26 = VAR11;
    }
    return VAR27;
}