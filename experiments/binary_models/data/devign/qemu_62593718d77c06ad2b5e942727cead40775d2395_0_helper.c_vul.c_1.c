static inline bool FUN1(VAR1 *VAR2, ARMMMUIdx VAR3)
{
    if (FUN2(VAR2, VAR4))
    {
        switch (VAR2->VAR5.VAR6[FUN3(VAR2, VAR3)] & (VAR7 | VAR8))
        {
        case VAR7:
            return VAR3 == VAR9 || VAR3 == VAR10;
        case VAR7 | VAR8:
            return false;
        case 0:
        default:
            return true;
        }
    }
    if (VAR3 == VAR11)
    {
        return (VAR2->VAR12.VAR13 & VAR14) == 0;
    }
    return (FUN4(VAR2, VAR3) & VAR15) == 0;
}