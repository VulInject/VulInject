static void FUN1(void *VAR1)
{
    int32_t VAR2;
    ssize_t VAR3 = 0;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    struct statfs VAR7;
    VAR8 *VAR9 = VAR1;
    VAR10 *VAR11 = VAR9->VAR11;
    VAR3 = FUN2(VAR9, VAR4, "", &VAR2);
    if (VAR3 < 0)
    {
        goto VAR12;
    }
    VAR6 = FUN3(VAR9, VAR2);
    if (VAR6 == NULL)
    {
        VAR3 = -VAR13;
        goto VAR12;
    }
    VAR3 = FUN4(VAR9, &VAR6->VAR14, &VAR7);
    if (VAR3 < 0)
    {
        goto VAR15;
    }
    VAR3 = FUN5(VAR11, VAR9, &VAR7);
    if (VAR3 < 0)
    {
        goto VAR15;
    }
    VAR3 += VAR4;
VAR15:
    FUN6(VAR9, VAR6);
VAR12:
    FUN7(VAR11, VAR9, VAR3);
    return;
}