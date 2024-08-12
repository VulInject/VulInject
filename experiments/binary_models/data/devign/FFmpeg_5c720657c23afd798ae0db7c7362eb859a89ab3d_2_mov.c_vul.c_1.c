static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    uint64_t VAR8;
    VAR9 *VAR10;
    int VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR8 = (VAR15)VAR7->VAR16->VAR17 + VAR5.VAR8 + 8 + VAR18;
    if (VAR8 > VAR19 || (VAR15)VAR5.VAR8 > VAR19)
        return VAR20;
    if ((VAR11 = FUN2(&VAR7->VAR16->VAR21, VAR8)) < 0)
    {
        VAR7->VAR16->VAR17 = 0;
        return VAR11;
    }
    VAR10 = VAR7->VAR16->VAR21 + VAR7->VAR16->VAR17;
    VAR7->VAR16->VAR17 = VAR8 - VAR18;
    FUN3(VAR10, VAR5.VAR8 + 8);
    FUN4(VAR10 + 4, VAR5.VAR22);
    FUN5(VAR4, VAR10 + 8, VAR5.VAR8);
    return 0;
}