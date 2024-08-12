static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    bool VAR6;
    int VAR7 = 0;
    int VAR8 = VAR2->VAR9 >> VAR10;
    int64_t VAR11 = *VAR4;
    int VAR12 = *VAR5;
    int VAR13 = VAR8 * VAR2->VAR14;
    VAR6 = !FUN2(*VAR4 / VAR8, VAR2->VAR15);
    VAR6 |= !FUN2((*VAR4 + *VAR5 - 1) / VAR8, VAR2->VAR15);
    if (VAR6)
    {
        FUN3(FUN4(VAR2->VAR16), *VAR4, *VAR5, &VAR11, &VAR12);
    }
    if (VAR12 > VAR13)
    {
        VAR12 = VAR13;
        if (VAR6)
        {
            VAR12 = FUN5(VAR12, VAR2->VAR17 >> VAR10);
        }
    }
    FUN6(VAR2, VAR11, &VAR12);
    VAR7 = VAR11 + VAR12 - (*VAR4 + *VAR5);
    *VAR4 = VAR11;
    *VAR5 = VAR12;
    assert(VAR7 >= 0);
    return VAR7;
}