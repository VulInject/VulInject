int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4, enum qcow2_discard_type VAR5, bool VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint64_t VAR10;
    uint64_t VAR11;
    int VAR12;
    VAR10 = VAR3 + (VAR4 << VAR13);
    VAR3 = FUN2(VAR3, VAR8->VAR14);
    VAR10 = FUN3(VAR8, VAR10);
    if (VAR3 > VAR10)
    {
        return 0;
    }
    VAR11 = FUN4(VAR8, VAR10 - VAR3);
    VAR8->VAR15 = true;
    while (VAR11 > 0)
    {
        VAR12 = FUN5(VAR2, VAR3, VAR11, VAR5, VAR6);
        if (VAR12 < 0)
        {
            goto VAR16;
        }
        VAR11 -= VAR12;
        VAR3 += (VAR12 * VAR8->VAR14);
    }
    VAR12 = 0;
VAR16:
    VAR8->VAR15 = false;
    FUN6(VAR2, VAR12);
    return VAR12;
}