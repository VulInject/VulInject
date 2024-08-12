static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    VAR1 *VAR8;
    VAR4 *VAR9 = NULL;
    VAR8 = FUN3();
    FUN4(FUN5(VAR8), "");
    FUN6(VAR8, VAR7, &VAR9);
    FUN7(VAR7);
    if (VAR9)
    {
        FUN8(FUN9(VAR8));
        FUN10(VAR5, VAR9);
        return NULL;
    }
    FUN11(FUN5(VAR8), false);
    return VAR8;
}