static void FUN1(VAR1 *VAR2, TCGMemOp VAR3, TCGCond VAR4, TCGArg VAR5, TCGArg VAR6, bool VAR7, VAR8 *VAR9)
{
    intptr_t VAR10;
    bool VAR11;
    if (VAR7 && VAR6 == 0 && (VAR4 == VAR12 || VAR4 == VAR13))
    {
        VAR11 = false;
    }
    else
    {
        VAR11 = true;
        FUN2(VAR2, VAR3, VAR5, VAR6, VAR7);
    }
    if (!VAR9->VAR14)
    {
        FUN3(VAR2, VAR2->VAR15, VAR16, VAR9, 0);
        VAR10 = FUN4(VAR2) >> 5;
    }
    else
    {
        VAR10 = VAR9->VAR17.VAR18 - VAR2->VAR15;
        assert(VAR10 == FUN5(VAR10, 0, 19));
    }
    if (VAR11)
    {
        FUN6(VAR2, 3202, VAR19, VAR4, VAR10);
    }
    else if (VAR4 == VAR12)
    {
        FUN6(VAR2, 3201, VAR20, VAR3, VAR5, VAR10);
    }
    else
    {
        FUN6(VAR2, 3201, VAR21, VAR3, VAR5, VAR10);
    }
}