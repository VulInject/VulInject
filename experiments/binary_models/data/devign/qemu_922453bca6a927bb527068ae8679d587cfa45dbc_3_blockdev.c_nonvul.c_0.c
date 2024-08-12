int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    VAR8 *VAR9;
    VAR9 = FUN3(VAR7);
    if (!VAR9)
    {
        FUN4(VAR10, VAR7);
        return -1;
    }
    if (FUN5(VAR9))
    {
        FUN4(VAR11, VAR7);
        return -1;
    }
    FUN6();
    FUN7(VAR9);
    FUN8(VAR9);
    if (FUN9(VAR9))
    {
        FUN10(VAR9);
    }
    else
    {
        FUN11(FUN12(VAR9));
    }
    return 0;
}