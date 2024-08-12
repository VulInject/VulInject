static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    unsigned VAR11 = FUN2(VAR2);
    if (VAR11 < VAR9->VAR12)
    {
        FUN3(VAR6, VAR13, "", VAR6->VAR14[VAR11].VAR15);
        FUN4(VAR4);
    }
    if (VAR11 >= VAR9->VAR12 + VAR6->VAR16)
    {
        FUN5(VAR6, &VAR9->VAR17[VAR11].VAR18, VAR4);
    }
    else
    {
        FUN6(VAR6, VAR11, VAR4);
    }
}