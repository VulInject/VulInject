static void FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, VAR6 *VAR7, void *VAR8)
{
    uint64_t VAR9 = 0;
    size_t VAR10;
    if (VAR2->VAR11->VAR12)
    {
        int64_t VAR13 = FUN2(VAR2->VAR11->VAR12);
        if (VAR13 < 0)
        {
            FUN3(VAR8, VAR13);
            return;
        }
        VAR9 = VAR13;
    }
    if (VAR3 >= VAR9 || VAR3 + VAR5->VAR10 > VAR9)
    {
        FUN4(VAR5, 0, 0, VAR5->VAR10);
    }
    if (VAR3 >= VAR9)
    {
        FUN3(VAR8, 0);
        return;
    }
    VAR10 = FUN5((VAR14)VAR9 - VAR3, VAR5->VAR10);
    FUN6(VAR2->VAR11->VAR15, VAR16);
    FUN7(VAR2->VAR11->VAR12, VAR3 / VAR17, VAR5, VAR10 / VAR17, VAR7, VAR8);
}