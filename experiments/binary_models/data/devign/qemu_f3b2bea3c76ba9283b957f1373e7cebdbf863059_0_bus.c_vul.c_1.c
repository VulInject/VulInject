static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7 = NULL;
    VAR1 *VAR8;
    VAR8 = FUN2(FUN3(&VAR3->VAR9, VAR4));
    if (!VAR8)
    {
        FUN4(VAR6, "", VAR4);
        return NULL;
    }
    FUN5(FUN6(VAR8), true, "", &VAR7);
    if (VAR7)
    {
        FUN7(VAR6, VAR7);
        FUN8(VAR6, "", VAR4);
        FUN9(FUN6(VAR8));
        return NULL;
    }
    return VAR8;
}