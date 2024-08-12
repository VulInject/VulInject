VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, const VAR5 *VAR6, void *VAR7)
{
    VAR8 *VAR9 = NULL;
    int VAR10 = 640;
    int VAR11 = 480;
    VAR1 *VAR12;
    VAR13 *VAR14;
    VAR14 = FUN2();
    FUN3();
    VAR12 = FUN4(VAR14, VAR15);
    VAR12->VAR6 = VAR6;
    VAR12->VAR16 = VAR7;
    if (VAR3)
    {
        FUN5(FUN6(VAR12), FUN6(VAR3), "", &VAR9);
        FUN7(FUN6(VAR12), VAR4, "", &VAR9);
    }
    VAR12->VAR17 = FUN8(VAR10, VAR11);
    return VAR12;
}