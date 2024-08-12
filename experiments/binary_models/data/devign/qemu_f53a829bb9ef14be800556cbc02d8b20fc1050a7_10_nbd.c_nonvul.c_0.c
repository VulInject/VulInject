void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    FUN2(VAR2);
    FUN3(VAR4, &VAR2->VAR6, VAR5, VAR5) { FUN4(VAR4); }
    FUN5(VAR2, NULL);
    FUN6(VAR2);
    if (VAR2->VAR7)
    {
        FUN7(VAR2->VAR7, VAR8, VAR9, VAR2);
        FUN8(VAR2->VAR7);
        VAR2->VAR7 = NULL;
    }
}