static void FUN1(void *VAR1)
{
    int VAR2 = 0;
    V9fsString VAR3;
    int32_t VAR4, VAR5;
    size_t VAR6 = 7;
    V9fsPath VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR1;
    FUN2(&VAR3);
    VAR2 = FUN3(VAR11, VAR6, "", &VAR4, &VAR3, &VAR5);
    if (VAR2 < 0)
    {
        goto VAR12;
    }
    VAR9 = FUN4(VAR11, VAR4);
    if (VAR9 == NULL)
    {
        VAR2 = -VAR13;
        goto VAR12;
    }
    FUN5(&VAR7);
    VAR2 = FUN6(VAR11, &VAR9->VAR7, VAR3.VAR14, &VAR7);
    if (VAR2 < 0)
    {
        goto VAR15;
    }
    VAR2 = FUN7(VAR11, &VAR7);
    if (VAR2 < 0)
    {
        goto VAR15;
    }
    VAR2 = FUN8(VAR11, &VAR9->VAR7, &VAR3, VAR5);
    if (!VAR2)
    {
        VAR2 = VAR6;
    }
VAR15:
    FUN9(VAR11, VAR9);
    FUN10(&VAR7);
VAR12:
    FUN11(VAR11->VAR16, VAR11, VAR2);
    FUN12(&VAR3);
}