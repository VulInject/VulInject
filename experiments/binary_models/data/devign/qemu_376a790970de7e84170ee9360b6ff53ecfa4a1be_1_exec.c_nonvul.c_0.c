void FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3)
{
    target_ulong VAR4, VAR5;
    assert(VAR2 < (1ul << VAR6));
    assert(VAR1 < VAR2);
    VAR1 = VAR1 & VAR7;
    VAR2 = FUN2(VAR2);
    if (VAR3 & VAR8)
    {
        VAR3 |= VAR9;
    }
    for (VAR4 = VAR1, VAR5 = VAR2 - VAR1; VAR5 != 0; VAR5 -= VAR10, VAR4 += VAR10)
    {
        VAR11 *VAR12 = FUN3(VAR4 >> VAR13, 1);
        if (!(VAR12->VAR3 & VAR8) && (VAR3 & VAR8) && VAR12->VAR14)
        {
            FUN4(VAR4, 0, NULL);
        }
        VAR12->VAR3 = VAR3;
    }
}