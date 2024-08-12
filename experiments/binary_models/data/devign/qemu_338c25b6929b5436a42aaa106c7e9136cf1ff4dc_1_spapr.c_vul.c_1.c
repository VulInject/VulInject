static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    bool final = VAR5 < 0;
    int VAR6 = FUN2(VAR4) / VAR7;
    int VAR8 = 0, VAR9 = 0;
    int VAR10 = VAR4->VAR11;
    int64_t VAR12 = FUN3(VAR13);
    assert(!VAR4->VAR14);
    do
    {
        int VAR15, VAR16;
        while ((VAR10 < VAR6) && !FUN4(FUN5(VAR4->VAR17, VAR10)))
        {
            VAR10++;
            VAR8++;
        }
        VAR15 = VAR10;
        while ((VAR10 < VAR6) && FUN4(FUN5(VAR4->VAR17, VAR10)) && FUN6(FUN5(VAR4->VAR17, VAR10)))
        {
            FUN7(FUN5(VAR4->VAR17, VAR10));
            VAR10++;
            VAR8++;
        }
        VAR16 = VAR10;
        while ((VAR10 < VAR6) && FUN4(FUN5(VAR4->VAR17, VAR10)) && !FUN6(FUN5(VAR4->VAR17, VAR10)))
        {
            FUN7(FUN5(VAR4->VAR17, VAR10));
            VAR10++;
            VAR8++;
        }
        if (VAR10 > VAR15)
        {
            int VAR18 = VAR16 - VAR15;
            int VAR19 = VAR10 - VAR16;
            FUN8(VAR2, VAR15);
            FUN9(VAR2, VAR18);
            FUN9(VAR2, VAR19);
            FUN10(VAR2, FUN5(VAR4->VAR17, VAR15), VAR7 * VAR18);
            VAR9 += VAR10 - VAR15;
            if (!final && (FUN3(VAR13) - VAR12) > VAR5)
            {
                break;
            }
        }
        if (VAR8 >= VAR6)
        {
            break;
        }
        if (VAR10 >= VAR6)
        {
            assert(VAR10 == VAR6);
            VAR10 = 0;
        }
    } while ((VAR8 < VAR6) && (!FUN11(VAR2) || final));
    if (VAR10 >= VAR6)
    {
        assert(VAR10 == VAR6);
        VAR10 = 0;
    }
    VAR4->VAR11 = VAR10;
    return (VAR8 >= VAR6) && (VAR9 == 0) ? 1 : 0;
}