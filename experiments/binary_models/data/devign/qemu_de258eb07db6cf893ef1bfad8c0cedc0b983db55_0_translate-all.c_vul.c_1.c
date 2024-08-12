void FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3)
{
    target_ulong VAR4, VAR5;
    assert(VAR2 < ((VAR6)1 << VAR7));
    assert(VAR1 < VAR2);
    FUN2();
    VAR1 = VAR1 & VAR8;
    VAR2 = FUN3(VAR2);
    if (VAR3 & VAR9)
    {
        VAR3 |= VAR10;
    }
    for (VAR4 = VAR1, VAR5 = VAR2 - VAR1; VAR5 != 0; VAR5 -= VAR11, VAR4 += VAR11)
    {
        VAR12 *VAR13 = FUN4(VAR4 >> VAR14, 1);
        if (!(VAR13->VAR3 & VAR9) && (VAR3 & VAR9) && VAR13->VAR15)
        {
            FUN5(VAR4, 0);
        }
        VAR13->VAR3 = VAR3;
    }
}