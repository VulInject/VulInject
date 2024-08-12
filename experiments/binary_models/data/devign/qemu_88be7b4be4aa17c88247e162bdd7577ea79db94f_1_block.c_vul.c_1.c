void FUN1(VAR1 **VAR2)
{
    VAR3 *VAR4;
    VAR1 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    while ((VAR7 = FUN2(VAR7, &VAR4)) != NULL)
    {
        VAR8 *VAR9 = FUN3(VAR4);
        FUN4(VAR9);
        FUN5(VAR4, &VAR5);
        FUN6(VAR9);
        if (VAR5)
        {
            FUN7(VAR2, VAR5);
            return;
        }
    }
}