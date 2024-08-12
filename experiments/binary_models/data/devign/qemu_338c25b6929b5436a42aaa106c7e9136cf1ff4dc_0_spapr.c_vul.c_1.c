static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    int VAR6 = FUN2(VAR4) / VAR7;
    int VAR8 = VAR4->VAR9;
    int64_t VAR10 = FUN3(VAR11);
    assert(VAR4->VAR12);
    do
    {
        int VAR13;
        while ((VAR8 < VAR6) && !FUN4(FUN5(VAR4->VAR14, VAR8)))
        {
            VAR8++;
            FUN6(FUN5(VAR4->VAR14, VAR8));
        }
        VAR13 = VAR8;
        while ((VAR8 < VAR6) && FUN4(FUN5(VAR4->VAR14, VAR8)))
        {
            VAR8++;
            FUN6(FUN5(VAR4->VAR14, VAR8));
        }
        if (VAR8 > VAR13)
        {
            int VAR15 = VAR8 - VAR13;
            FUN7(VAR2, VAR13);
            FUN8(VAR2, VAR15);
            FUN8(VAR2, 0);
            FUN9(VAR2, FUN5(VAR4->VAR14, VAR13), VAR7 * VAR15);
            if ((FUN3(VAR11) - VAR10) > VAR5)
            {
                break;
            }
        }
    } while ((VAR8 < VAR6) && !FUN10(VAR2));
    if (VAR8 >= VAR6)
    {
        assert(VAR8 == VAR6);
        VAR8 = 0;
        VAR4->VAR12 = false;
    }
    VAR4->VAR9 = VAR8;
}