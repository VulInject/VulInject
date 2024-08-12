static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = NULL;
    FUN2(VAR2, VAR6, &VAR5, VAR3);
    if (VAR5)
        FUN3(VAR2, &VAR5);
    FUN4(&VAR5);
}