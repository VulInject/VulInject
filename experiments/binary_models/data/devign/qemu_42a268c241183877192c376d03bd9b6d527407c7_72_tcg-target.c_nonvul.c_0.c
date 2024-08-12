static void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGArg VAR4, TCGArg VAR5, TCGArg VAR6, int VAR7, TCGArg VAR8)
{
    FUN2(VAR2, VAR5, VAR6, VAR7, 0);
    if (VAR9)
    {
        FUN3(VAR2, VAR10 | VAR11[VAR3], VAR4, VAR8);
    }
    else
    {
        int VAR12 = FUN4(FUN5());
        FUN6(VAR2, VAR11[FUN7(VAR3)], VAR12, 1);
        FUN8(VAR2, VAR13, VAR4, VAR8);
        FUN9(VAR2, VAR12, VAR2->VAR14);
    }
}