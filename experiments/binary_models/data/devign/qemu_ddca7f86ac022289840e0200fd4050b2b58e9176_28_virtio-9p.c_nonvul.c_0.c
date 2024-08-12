static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    size_t VAR4 = 7;
    V9fsString VAR5;
    int32_t VAR6;
    int VAR7 = 0;
    VAR8 *VAR9;
    VAR7 = FUN2(VAR3, VAR4, "", &VAR6);
    if (VAR7 < 0)
    {
        goto VAR10;
    }
    FUN3(VAR3->VAR11, VAR3->VAR12, VAR6);
    VAR9 = FUN4(VAR3, VAR6);
    if (VAR9 == NULL)
    {
        VAR7 = -VAR13;
        goto VAR10;
    }
    FUN5(&VAR5);
    VAR7 = FUN6(VAR3, &VAR9->VAR14, &VAR5);
    if (VAR7 < 0)
    {
        goto VAR15;
    }
    VAR7 = FUN7(VAR3, VAR4, "", &VAR5);
    if (VAR7 < 0)
    {
        FUN8(&VAR5);
        goto VAR15;
    }
    VAR7 += VAR4;
    FUN9(VAR3->VAR11, VAR3->VAR12, VAR5.VAR16);
    FUN8(&VAR5);
VAR15:
    FUN10(VAR3, VAR9);
VAR10:
    FUN11(VAR3->VAR17, VAR3, VAR7);
}