static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    int64_t VAR7 = 0;
    VAR8 *VAR9 = FUN2(VAR8, 1);
    VAR10 *VAR11 = NULL;
    VAR9->VAR12 = FUN3();
    VAR7 = FUN4(FUN5(VAR3, VAR13, 0), VAR14);
    VAR11 = FUN6();
    VAR6 = FUN7(VAR1, VAR11, VAR5);
    if (VAR6 < 0)
    {
        goto VAR15;
    }
    VAR6 = FUN8(VAR9, VAR11, VAR16, VAR5, 0);
    if (VAR6 < 0)
    {
        goto VAR15;
    }
    VAR6 = FUN9(VAR9->VAR17, VAR9->VAR18, VAR7);
    FUN10(VAR9);
VAR15:
    FUN11(VAR9);
    return VAR6;