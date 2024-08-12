static void FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3->VAR4.VAR5 != VAR6);
    VAR2->VAR7 = VAR2->VAR3->VAR4.VAR5 * VAR2->VAR8->VAR9.VAR10;
    if (VAR2->VAR11 == VAR12)
    {
        VAR2->VAR13 = VAR2->VAR14 - (VAR2->VAR15 - VAR2->VAR7);
        assert(VAR2->VAR13 > 0 && VAR2->VAR13 < VAR2->VAR14);
    }
    else
    {
        VAR2->VAR14 = VAR2->VAR7 - VAR2->VAR15;
        VAR2->VAR15 = VAR2->VAR7;
        assert(VAR2->VAR16 == 0 || VAR2->VAR14 > 0);
    }
}