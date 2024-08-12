void FUN1(VAR1)(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR3));
    uint64_t VAR9 = VAR5 & VAR10;
    uint64_t VAR11, VAR12;
    VAR11 = (VAR4 & VAR13);
    VAR11 += (VAR5 & VAR14) >> 9;
    VAR12 = FUN4(VAR8->VAR15, VAR11);
    VAR12 |= VAR16;
    FUN5(VAR8->VAR15, VAR11, VAR12);
    if (VAR6 & 1)
    {
        if (VAR5 & ~VAR14)
        {
            FUN6(VAR8, VAR9);
            FUN6(VAR8, VAR9 ^ 0x80000000);
        }
        else
        {
            FUN7(VAR8);
        }
    }
    else
    {
        if (VAR5 & ~VAR14)
        {
            FUN8(VAR8, VAR9);
            FUN8(VAR8, VAR9 ^ 0x80000000);
        }
        else
        {
            FUN9(VAR8);
        }
    }
}