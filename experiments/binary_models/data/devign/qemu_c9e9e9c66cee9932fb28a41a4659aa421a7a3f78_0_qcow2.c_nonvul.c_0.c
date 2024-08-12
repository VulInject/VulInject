static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR6->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    VAR3 *VAR13 = NULL;
    int VAR14;
    VAR10 = VAR6->VAR10;
    VAR6->VAR10 = NULL;
    FUN2(VAR2);
    memset(VAR6, 0, sizeof(VAR5));
    VAR12 = FUN3(VAR2->VAR12);
    VAR8 &= ~VAR15;
    VAR14 = FUN4(VAR2, VAR12, VAR8, &VAR13);
    FUN5(VAR12);
    if (VAR13)
    {
        FUN6(VAR4, VAR13);
        FUN7(VAR4, "");
        VAR2->VAR16 = NULL;
        return;
    }
    else if (VAR14 < 0)
    {
        FUN8(VAR4, -VAR14, "");
        VAR2->VAR16 = NULL;
        return;
    }
    VAR6->VAR10 = VAR10;
}