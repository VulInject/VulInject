void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7 = NULL;
    VAR8 *VAR9 = FUN2(VAR2);
    if (VAR4->VAR10->VAR11)
    {
        VAR4->VAR10->FUN3(VAR9, VAR4, &VAR7);
    }
    else
    {
        if (!VAR4->VAR10->VAR12 && !VAR4->VAR10->VAR13)
        {
            return;
        }
        FUN4(VAR9, VAR4->VAR14, VAR4->VAR10->VAR14, VAR4->VAR10->VAR12, VAR4->VAR10->VAR13, VAR4->VAR10->VAR15, VAR4, &VAR7);
    }
    if (VAR7)
    {
        FUN5(VAR6, VAR7);
        return;
    }
    FUN6(VAR9, VAR4->VAR14, VAR4->VAR10->VAR16, &VAR17);
    if (VAR4->VAR10->VAR18)
    {
        VAR4->VAR10->FUN7(VAR9, VAR4);
    }
}