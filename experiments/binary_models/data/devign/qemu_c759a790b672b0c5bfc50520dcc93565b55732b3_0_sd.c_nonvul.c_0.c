static void FUN1(void *VAR1, bool VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR4);
    VAR7 *VAR8 = FUN3(FUN4(VAR6));
    bool VAR9 = FUN5(VAR4);
    bool VAR10 = FUN6(VAR4);
    if (VAR9)
    {
        FUN7(VAR6);
    }
    if (VAR8)
    {
        FUN8(VAR8, VAR9);
        if (VAR9)
        {
            FUN9(VAR8, VAR10);
        }
    }
    else
    {
        FUN10(VAR4->VAR11, VAR9);
        if (VAR9)
        {
            FUN10(VAR4->VAR12, VAR10);
        }
    }
}