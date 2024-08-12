VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3(VAR4));
    uint32_t VAR8 = 0;
    int VAR9 = VAR7->VAR10;
    uint64_t VAR11 = VAR4->VAR12.VAR13 & VAR14;
    uint64_t VAR15;
    int VAR16;
    if (!(VAR4->VAR12.VAR13 & VAR17) && (VAR5 >> 32))
    {
        FUN4(VAR4, VAR18, 2);
    }
    VAR7->VAR10 = VAR9;
    if (FUN5(VAR4, VAR5, 0, VAR11, &VAR15, &VAR16, true))
    {
        VAR8 = 3;
    }
    if (VAR7->VAR10 == VAR19)
    {
        VAR15 = VAR4->VAR20 | 0x80000000;
    }
    else
    {
        VAR15 |= VAR5 & ~VAR21;
    }
    VAR7->VAR10 = VAR9;
    VAR4->VAR22 = VAR8;
    return VAR15;
}