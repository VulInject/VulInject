static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    bool VAR7;
    int VAR8 = 0;
    int64_t VAR9 = *VAR4;
    unsigned int VAR10 = *VAR6;
    int VAR11 = VAR2->VAR12 * VAR2->VAR13;
    assert(*VAR6 < VAR14);
    VAR7 = !FUN2(*VAR4 / VAR2->VAR12, VAR2->VAR15);
    VAR7 |= !FUN2((*VAR4 + *VAR6 - 1) / VAR2->VAR12, VAR2->VAR15);
    if (VAR7)
    {
        FUN3(FUN4(VAR2->VAR16), *VAR4, *VAR6, &VAR9, &VAR10);
    }
    if (VAR10 > VAR11)
    {
        VAR10 = VAR11;
        if (VAR7)
        {
            VAR10 = FUN5(VAR10, VAR2->VAR17);
        }
    }
    VAR10 = FUN6(VAR2, VAR9, VAR10);
    VAR8 = VAR9 + VAR10 - (*VAR4 + *VAR6);
    *VAR4 = VAR9;
    *VAR6 = VAR10;
    assert(VAR8 >= 0);
    return VAR8;
}