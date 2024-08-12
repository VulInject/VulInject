VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, const VAR5 *VAR6, void *VAR7)
{
    static const char VAR8[] = "";
    int VAR9 = 640;
    int VAR10 = 480;
    VAR1 *VAR11;
    VAR12 *VAR13;
    VAR13 = FUN2();
    FUN3();
    VAR11 = FUN4(VAR13, VAR14, VAR4);
    VAR11->VAR6 = VAR6;
    VAR11->VAR15 = VAR7;
    if (VAR3)
    {
        FUN5(FUN6(VAR11), FUN6(VAR3), "", &VAR16);
    }
    VAR11->VAR17 = FUN7(VAR9, VAR10, VAR8);
    return VAR11;
}