static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    bool VAR6 = VAR5 != -1;
    int VAR7 = FUN2(VAR4) / VAR8;
    int VAR9 = VAR4->VAR10;
    int64_t VAR11 = FUN3(VAR12);
    assert(VAR4->VAR13);
    do
    {
        int VAR14;
        while ((VAR9 < VAR7) && !FUN4(FUN5(VAR4->VAR15, VAR9)))
        {
            VAR9++;
            FUN6(FUN5(VAR4->VAR15, VAR9));
        }
        VAR14 = VAR9;
        while ((VAR9 < VAR7) && (VAR9 - VAR14 < VAR16) && FUN4(FUN5(VAR4->VAR15, VAR9)))
        {
            VAR9++;
            FUN6(FUN5(VAR4->VAR15, VAR9));
        }
        if (VAR9 > VAR14)
        {
            int VAR17 = VAR9 - VAR14;
            FUN7(VAR2, VAR14);
            FUN8(VAR2, VAR17);
            FUN8(VAR2, 0);
            FUN9(VAR2, FUN5(VAR4->VAR15, VAR14), VAR8 * VAR17);
            if (VAR6 && (FUN3(VAR12) - VAR11) > VAR5)
            {
                break;
            }
        }
    } while ((VAR9 < VAR7) && !FUN10(VAR2));
    if (VAR9 >= VAR7)
    {
        assert(VAR9 == VAR7);
        VAR9 = 0;
        VAR4->VAR13 = false;
    }
    VAR4->VAR10 = VAR9;
}