static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    int VAR6, VAR7;
    if (VAR2 < (VAR5->VAR8 - VAR9))
    {
        VAR6 = VAR10;
        VAR2 += VAR9;
        VAR7 = FUN2(VAR2);
    }
    else
    {
        int VAR11;
        VAR2 -= (VAR5->VAR8 - VAR9);
        VAR11 = VAR2 / VAR9;
        VAR2 %= VAR9;
        VAR6 = 1 << VAR11;
        VAR7 = VAR6;
    }
    assert(VAR2 >= VAR12);
    if (VAR3 == FUN3(VAR2, VAR6))
    {
        return;
    }
    if (VAR5->VAR13 == VAR14 || VAR5->VAR13 == VAR15)
    {
        FUN4(VAR5, VAR2, VAR3, VAR6, VAR7);
    }
    else
    {
        FUN5(VAR5, VAR2, VAR3, VAR6, VAR7);
    }
    FUN6(VAR5);