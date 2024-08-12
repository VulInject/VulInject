VAR1 FUN1(VAR2 **VAR3)
{
    int VAR4;
    VAR2 *VAR5 = NULL;
    if (!FUN2())
    {
        FUN3(VAR3, VAR6);
        return 0;
    }
    FUN4("");
    FUN5(VAR7);
    FUN6(&VAR4, VAR3, true);
    if (FUN7(VAR3))
    {
        goto VAR8;
    }
    return VAR4;
VAR8:
    FUN8(&VAR5);
    if (FUN7(&VAR5))
    {
        FUN9("", FUN10(VAR5));
        FUN11(VAR5);
    }
    return 0;
}