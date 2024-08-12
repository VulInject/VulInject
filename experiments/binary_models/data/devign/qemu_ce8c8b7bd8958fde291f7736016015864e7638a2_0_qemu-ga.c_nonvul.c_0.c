static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    int VAR7;
    FUN2(VAR4);
    FUN3("");
    VAR6 = FUN4(FUN5(VAR4));
    if (VAR6)
    {
        VAR7 = FUN6(VAR2, VAR6);
        if (VAR7)
        {
            FUN7("", strerror(VAR7));
        }
        FUN8(VAR6);
    }
}