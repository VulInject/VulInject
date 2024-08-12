static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11 = NULL;
    VAR4 = FUN2(VAR3, 29, 3);
    VAR5 = FUN2(VAR3, 22, 2);
    VAR6 = FUN2(VAR3, 16, 5);
    VAR7 = FUN2(VAR3, 12, 4);
    VAR8 = FUN2(VAR3, 5, 5);
    VAR9 = FUN2(VAR3, 0, 5);
    if (VAR4 || VAR5 > 1)
    {
        FUN3(VAR2);
        return;
    }
    if (!FUN4(VAR2))
    {
        return;
    }
    if (VAR7 < 0x0e)
    {
        VAR10 *VAR12 = FUN5();
        VAR11 = FUN5();
        FUN6(VAR7, VAR12);
        FUN7(VAR2, VAR5, VAR9, VAR6);
        FUN8(VAR11);
        FUN9(VAR12);
    }
    FUN7(VAR2, VAR5, VAR9, VAR8);
    if (VAR7 < 0x0e)
    {
        FUN9(VAR11);
    }
}