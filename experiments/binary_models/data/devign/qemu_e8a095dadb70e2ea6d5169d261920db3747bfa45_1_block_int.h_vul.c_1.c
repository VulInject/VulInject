void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    if (!VAR2->VAR9)
    {
        return;
    }
    VAR2->VAR10 = VAR4;
    FUN2(VAR8, &VAR2->VAR11, VAR12) { FUN1(VAR8->VAR2, VAR4); }
    if (VAR2->VAR9->VAR13)
    {
        VAR2->VAR9->FUN1(VAR2, VAR4);
    }
    FUN2(VAR6, &VAR2->VAR14, VAR15) { VAR6->FUN3(VAR4, VAR6->VAR16); }
}