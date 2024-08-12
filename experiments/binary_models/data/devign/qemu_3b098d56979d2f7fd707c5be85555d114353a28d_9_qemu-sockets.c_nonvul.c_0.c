void FUN1(VAR1 **VAR2, VAR1 *VAR3)
{
    VAR4 *VAR5, *VAR6;
    VAR7 *VAR8;
    *VAR2 = NULL;
    VAR5 = FUN2(&VAR8);
    FUN3(VAR5, NULL, &VAR3, &VAR9);
    FUN4(VAR5, &VAR8);
    FUN5(VAR5);
    if (!VAR8)
    {
        return;
    }
    VAR6 = FUN6(VAR8, true);
    FUN3(VAR6, NULL, VAR2, &VAR9);
    FUN5(VAR6);
    FUN7(VAR8);
}