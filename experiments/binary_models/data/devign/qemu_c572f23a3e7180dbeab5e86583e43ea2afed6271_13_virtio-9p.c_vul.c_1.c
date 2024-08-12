static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    size_t VAR4 = 7;
    V9fsString VAR5;
    int32_t VAR6;
    int VAR7 = 0;
    VAR8 *VAR9;
    FUN2(VAR3, VAR4, "", &VAR6);
    VAR9 = FUN3(VAR3, VAR6);
    if (VAR9 == NULL)
    {
        VAR7 = -VAR10;
        goto VAR11;
    }
    FUN4(&VAR5);
    VAR7 = FUN5(VAR3, &VAR9->VAR12, &VAR5);
    if (VAR7 < 0)
    {
        goto VAR13;
    }
    VAR4 += FUN6(VAR3, VAR4, "", &VAR5);
    VAR7 = VAR4;
    FUN7(&VAR5);
VAR13:
    FUN8(VAR3, VAR9);
VAR11:
    FUN9(VAR3->VAR14, VAR3->VAR15, VAR5.VAR16);
    FUN10(VAR3->VAR17, VAR3, VAR7);