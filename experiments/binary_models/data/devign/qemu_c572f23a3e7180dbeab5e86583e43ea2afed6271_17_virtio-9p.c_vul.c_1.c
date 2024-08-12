static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    int32_t VAR6, VAR7, VAR8;
    V9fsString VAR9, VAR10;
    VAR11 *VAR12;
    size_t VAR13 = 7;
    V9fsQID VAR14;
    ssize_t VAR15;
    FUN2(VAR3, VAR13, "", &VAR6, &VAR7, &VAR9, &VAR10, &VAR8);
    FUN3(VAR3->VAR16, VAR3->VAR17, VAR6, VAR7, VAR9.VAR18, VAR10.VAR18);
    VAR12 = FUN4(VAR5, VAR6);
    if (VAR12 == NULL)
    {
        VAR15 = -VAR19;
        goto VAR20;
    }
    VAR12->VAR21 = VAR8;
    VAR15 = FUN5(VAR3, NULL, "", &VAR12->VAR22);
    if (VAR15 < 0)
    {
        VAR15 = -VAR19;
        FUN6(VAR5, VAR6);
        goto VAR23;
    }
    VAR15 = FUN7(VAR3, VAR12, &VAR14);
    if (VAR15 < 0)
    {
        VAR15 = -VAR19;
        FUN6(VAR5, VAR6);
        goto VAR23;
    }
    VAR13 += FUN8(VAR3, VAR13, "", &VAR14);
    VAR15 = VAR13;
VAR23:
    FUN9(VAR3, VAR12);
VAR20:
    FUN10(VAR5, VAR3, VAR15);
    FUN11(&VAR9);
    FUN11(&VAR10);