void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (!VAR2->VAR7)
    {
        return;
    }
    VAR2->VAR8 = VAR4;
    if (VAR2->VAR9)
    {
        FUN1(VAR2->VAR9->VAR2, VAR4);
    }
    if (VAR2->VAR10)
    {
        FUN1(VAR2->VAR10->VAR2, VAR4);
    }
    if (VAR2->VAR7->VAR11)
    {
        VAR2->VAR7->FUN1(VAR2, VAR4);
    }
    if (VAR2->VAR12)
    {
        FUN2(&VAR2->VAR13, VAR4);
    }
    FUN3(VAR6, &VAR2->VAR14, VAR15) { VAR6->FUN4(VAR4, VAR6->VAR16); }
}