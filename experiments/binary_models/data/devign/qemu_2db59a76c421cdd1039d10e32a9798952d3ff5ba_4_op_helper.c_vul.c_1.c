void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    uint32_t VAR6 = FUN2(VAR3->VAR7[VAR8], VAR3);
    uint32_t VAR9 = VAR3->VAR7[VAR10];
    uint32_t VAR11, VAR12;
    if ((VAR3->VAR7[VAR13] & (VAR14 | VAR15)) ^ VAR14)
    {
        return;
    }
    for (VAR12 = 1;; ++VAR12)
    {
        if (VAR12 > VAR5)
        {
            return;
        }
        if (VAR9 & FUN3(VAR6 + VAR12, VAR3))
        {
            break;
        }
    }
    VAR11 = FUN2(VAR6 + VAR12, VAR3);
    FUN4(VAR3, VAR12);
    VAR3->VAR7[VAR13] = (VAR3->VAR7[VAR13] & ~VAR16) | (VAR6 << VAR17) | VAR15;
    VAR3->VAR7[VAR18] = VAR3->VAR4 = VAR4;
    if (VAR9 & FUN3(VAR11 + 1, VAR3))
    {
        FUN1(VAR19)
        (VAR3, VAR20);
    }
    else if (VAR9 & FUN3(VAR11 + 2, VAR3))
    {
        FUN1(VAR19)
        (VAR3, VAR21);
    }
    else
    {
        FUN1(VAR19)
        (VAR3, VAR22);
    }
}