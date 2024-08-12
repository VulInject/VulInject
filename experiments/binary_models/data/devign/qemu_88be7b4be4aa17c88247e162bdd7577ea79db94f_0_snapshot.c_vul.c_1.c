int FUN1(const char *VAR1, VAR2 **VAR3)
{
    int VAR4 = 0;
    VAR2 *VAR5;
    VAR6 *VAR7 = NULL;
    while (VAR4 == 0 && (VAR7 = FUN2(VAR7, &VAR5)))
    {
        VAR8 *VAR9 = FUN3(VAR5);
        FUN4(VAR9);
        if (FUN5(VAR5))
        {
            VAR4 = FUN6(VAR5, VAR1);
        }
        FUN7(VAR9);
    }
    *VAR3 = VAR5;
    return VAR4;
}