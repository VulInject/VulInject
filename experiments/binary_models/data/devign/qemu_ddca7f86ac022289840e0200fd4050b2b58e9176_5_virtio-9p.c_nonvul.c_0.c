static void FUN1(void *VAR1)
{
    int VAR2;
    int32_t VAR3;
    int VAR4;
    size_t VAR5 = 7;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR1;
    VAR10 *VAR11 = VAR9->VAR11;
    VAR2 = FUN2(VAR9, VAR5, "", &VAR3, &VAR4);
    if (VAR2 < 0)
    {
        goto VAR12;
    }
    FUN3(VAR9->VAR13, VAR9->VAR14, VAR3, VAR4);
    VAR7 = FUN4(VAR9, VAR3);
    if (VAR7 == NULL)
    {
        VAR2 = -VAR15;
        goto VAR12;
    }
    VAR2 = FUN5(VAR9, VAR7, VAR4);
    if (!VAR2)
    {
        VAR2 = VAR5;
    }
    FUN6(VAR9, VAR7);
VAR12:
    FUN7(VAR11, VAR9, VAR2);
}