void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5 = NULL;
    if (VAR2->VAR6->VAR7)
        VAR5 = VAR2->VAR6->VAR8[0];
    if (VAR5)
    {
        VAR5->VAR9 = FUN2(VAR5, VAR10, VAR2->VAR11, VAR2->VAR12);
        VAR5->VAR9->VAR13 = VAR4->VAR13;
        FUN3(VAR5, FUN4(VAR5->VAR9, ~0));
    }
}