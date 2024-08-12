static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (!VAR4->VAR5)
    {
        return;
    }
    FUN3(VAR4->VAR5, VAR6, NULL);
    FUN4(VAR2, VAR4->VAR7);
    FUN5(VAR2);
    FUN6(FUN7(VAR4->VAR8));
    VAR4->VAR8 = NULL;
    FUN6(FUN7(VAR4->VAR5));
    VAR4->VAR5 = NULL;
}