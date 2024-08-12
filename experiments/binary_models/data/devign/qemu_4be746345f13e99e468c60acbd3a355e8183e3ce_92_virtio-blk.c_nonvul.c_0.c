static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4)
{
    BlockErrorAction VAR5 = FUN2(VAR2->VAR6->VAR7, VAR4, VAR3);
    VAR8 *VAR9 = VAR2->VAR6;
    if (VAR5 == VAR10)
    {
        VAR2->VAR11 = VAR9->VAR12;
        VAR9->VAR12 = VAR2;
    }
    else if (VAR5 == VAR13)
    {
        FUN3(VAR2, VAR14);
        FUN4(FUN5(VAR9->VAR7), &VAR2->VAR15);
        FUN6(VAR2);
    }
    FUN7(VAR9->VAR7, VAR5, VAR4, VAR3);
    return VAR5 != VAR16;
}