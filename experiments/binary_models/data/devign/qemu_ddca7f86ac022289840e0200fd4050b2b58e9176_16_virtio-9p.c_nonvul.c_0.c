static void FUN1(void *VAR1)
{
    ssize_t VAR2 = 0;
    size_t VAR3 = 7;
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = VAR5->VAR7;
    int32_t VAR8, VAR9;
    V9fsString VAR10, VAR11;
    FUN2(&VAR10);
    FUN2(&VAR11);
    VAR2 = FUN3(VAR5, VAR3, "", &VAR8, &VAR10, &VAR9, &VAR11);
    if (VAR2 < 0)
    {
        goto VAR12;
    }
    FUN4(VAR7);
    VAR2 = FUN5(VAR5, VAR8, &VAR10, VAR9, &VAR11);
    FUN6(VAR7);
    if (!VAR2)
    {
        VAR2 = VAR3;
    }
VAR12:
    FUN7(VAR7, VAR5, VAR2);
    FUN8(&VAR10);
    FUN8(&VAR11);
}