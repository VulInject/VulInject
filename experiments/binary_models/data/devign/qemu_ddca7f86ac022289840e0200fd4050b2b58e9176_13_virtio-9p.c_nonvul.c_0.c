static void FUN1(void *VAR1)
{
    ssize_t VAR2;
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    V9fsString VAR7;
    size_t VAR8 = 7;
    FUN2(&VAR7);
    VAR2 = FUN3(VAR4, VAR8, "", &VAR6->VAR9, &VAR7);
    if (VAR2 < 0)
    {
        VAR8 = VAR2;
        goto VAR10;
    }
    FUN4(VAR4->VAR11, VAR4->VAR12, VAR6->VAR9, VAR7.VAR13);
    FUN5(VAR4);
    if (!strcmp(VAR7.VAR13, ""))
    {
        VAR6->VAR14 = VAR15;
    }
    else if (!strcmp(VAR7.VAR13, ""))
    {
        VAR6->VAR14 = VAR16;
    }
    else
    {
        FUN6(&VAR7, "");
    }
    VAR2 = FUN7(VAR4, VAR8, "", VAR6->VAR9, &VAR7);
    if (VAR2 < 0)
    {
        VAR8 = VAR2;
        goto VAR10;
    }
    VAR8 += VAR2;
    FUN8(VAR4->VAR11, VAR4->VAR12, VAR6->VAR9, VAR7.VAR13);
VAR10:
    FUN9(VAR6, VAR4, VAR8);
    FUN10(&VAR7);
    return;
}