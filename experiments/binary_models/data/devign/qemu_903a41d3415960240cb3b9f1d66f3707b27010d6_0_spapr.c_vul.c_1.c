static VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR1 *VAR6 = NULL;
    if (FUN2())
    {
        VAR7 *VAR8 = NULL;
        if (FUN3(VAR3))
        {
            VAR6 = FUN4(VAR9, VAR4, VAR5, &VAR8);
        }
        if (FUN5(VAR3) && !VAR6)
        {
            FUN6("", FUN7(VAR8));
        }
    }
    if (!VAR6)
    {
        VAR6 = FUN4(VAR10, VAR4, VAR5, &VAR11);
    }
    return VAR6;