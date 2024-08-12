static int FUN1(VAR1 *VAR2, VAR3 **VAR4, size_t VAR5, VAR3 **VAR6, size_t VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11 = NULL;
    if (VAR7 != 0)
    {
        FUN2(VAR9, "");
        return -1;
    }
    if (VAR5 != 1)
    {
        FUN2(VAR9, "");
        return -1;
    }
    VAR2->VAR12 = VAR4[0]->VAR13 == VAR14;
    VAR11 = FUN3();
    FUN4(FUN5(VAR11), "");
    if (FUN6(VAR11, VAR4[0], VAR9) < 0)
    {
        return -1;
    }
    FUN7(VAR2, VAR11, false, false);
    FUN8(FUN9(VAR11));
    return 0;
}