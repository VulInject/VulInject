static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6;
    VAR4 *VAR7 = NULL;
    VAR6 = FUN2();
    FUN3(FUN4(VAR6), "");
    FUN5(VAR6, VAR3, &VAR7);
    if (VAR7)
    {
        FUN6(VAR5, VAR7);
        return NULL;
    }
    FUN7(FUN4(VAR6), false);
    return VAR6;