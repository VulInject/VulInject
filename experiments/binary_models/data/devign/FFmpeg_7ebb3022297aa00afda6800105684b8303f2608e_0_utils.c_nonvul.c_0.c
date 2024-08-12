VAR1 *FUN1(float VAR2, float VAR3, float VAR4, float VAR5, float VAR6, float VAR7, int VAR8)
{
    VAR1 *VAR9 = FUN2(sizeof(VAR1));
    if (!VAR9)
        return NULL;
    if (VAR2 != 0.0)
    {
        VAR9->VAR10 = FUN3(VAR2, 3.0);
        VAR9->VAR11 = FUN3(VAR2, 3.0);
    }
    else
    {
        VAR9->VAR10 = FUN4();
        VAR9->VAR11 = FUN4();
    }
    if (VAR3 != 0.0)
    {
        VAR9->VAR12 = FUN3(VAR3, 3.0);
        VAR9->VAR13 = FUN3(VAR3, 3.0);
    }
    else
    {
        VAR9->VAR12 = FUN4();
        VAR9->VAR13 = FUN4();
    }
    if (!VAR9->VAR10 || !VAR9->VAR11 || !VAR9->VAR12 || !VAR9->VAR13)
        goto VAR14;
    if (VAR5 != 0.0)
    {
        VAR15 *VAR16 = FUN4();
        if (!VAR16)
            goto VAR14;
        FUN5(VAR9->VAR12, -VAR5);
        FUN5(VAR9->VAR13, -VAR5);
        FUN6(VAR9->VAR12, VAR16);
        FUN6(VAR9->VAR13, VAR16);
        FUN7(VAR16);
    }
    if (VAR4 != 0.0)
    {
        VAR15 *VAR16 = FUN4();
        if (!VAR16)
            goto VAR14;
        FUN5(VAR9->VAR10, -VAR4);
        FUN5(VAR9->VAR11, -VAR4);
        FUN6(VAR9->VAR10, VAR16);
        FUN6(VAR9->VAR11, VAR16);
        FUN7(VAR16);
    }
    if (VAR6 != 0.0)
        FUN8(VAR9->VAR12, (int)(VAR6 + 0.5));
    if (VAR7 != 0.0)
        FUN8(VAR9->VAR13, (int)(VAR7 + 0.5));
    FUN9(VAR9->VAR12, 1.0);
    FUN9(VAR9->VAR13, 1.0);
    FUN9(VAR9->VAR10, 1.0);
    FUN9(VAR9->VAR11, 1.0);
    if (VAR8)
        FUN10(VAR9->VAR12, NULL, VAR17);
    if (VAR8)
        FUN10(VAR9->VAR10, NULL, VAR17);
    return VAR9;
VAR14:
    FUN7(VAR9->VAR10);
    FUN7(VAR9->VAR11);
    FUN7(VAR9->VAR12);
    FUN7(VAR9->VAR13);
    FUN11(&VAR9);
    return NULL;
}