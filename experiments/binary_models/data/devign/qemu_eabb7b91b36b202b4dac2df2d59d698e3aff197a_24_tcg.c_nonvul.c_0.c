static void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGRegSet VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR3];
    FUN2(VAR6->VAR8 == VAR9);
    if (!VAR6->VAR10 && !VAR6->VAR11)
    {
        if (!VAR6->VAR12)
        {
            FUN3(VAR2, FUN4(VAR2, VAR6));
        }
        else if (VAR6->VAR13)
        {
            FUN5(VAR4, VAR6->VAR3);
            FUN6(VAR2, VAR6->VAR14, VAR15[VAR16], VAR4);
        }
        FUN7(VAR2, VAR6->VAR17, VAR3, VAR6->VAR14->VAR3, VAR6->VAR18);
    }
    VAR6->VAR10 = 1;
}