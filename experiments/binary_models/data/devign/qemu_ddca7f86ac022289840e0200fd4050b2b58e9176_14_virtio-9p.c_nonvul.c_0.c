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
    FUN2(&VAR9);
    FUN2(&VAR10);
    VAR15 = FUN3(VAR3, VAR13, "", &VAR6, &VAR7, &VAR9, &VAR10, &VAR8);
    if (VAR15 < 0)
    {
        goto VAR16;
    }
    FUN4(VAR3->VAR17, VAR3->VAR18, VAR6, VAR7, VAR9.VAR19, VAR10.VAR19);
    VAR12 = FUN5(VAR5, VAR6);
    if (VAR12 == NULL)
    {
        VAR15 = -VAR20;
        goto VAR16;
    }
    VAR12->VAR21 = VAR8;
    VAR15 = FUN6(VAR3, NULL, "", &VAR12->VAR22);
    if (VAR15 < 0)
    {
        VAR15 = -VAR20;
        FUN7(VAR5, VAR6);
        goto VAR23;
    }
    VAR15 = FUN8(VAR3, VAR12, &VAR14);
    if (VAR15 < 0)
    {
        VAR15 = -VAR20;
        FUN7(VAR5, VAR6);
        goto VAR23;
    }
    VAR15 = FUN9(VAR3, VAR13, "", &VAR14);
    if (VAR15 < 0)
    {
        FUN7(VAR5, VAR6);
        goto VAR23;
    }
    VAR15 += VAR13;
    FUN10(VAR3->VAR17, VAR3->VAR18, VAR14.VAR24, VAR14.VAR25, VAR14.VAR22);
    VAR5->VAR26 = VAR6;
    FUN11(&VAR5->VAR27, VAR28, VAR5->VAR29.VAR30, VAR5->VAR17);
    FUN12(VAR5->VAR27);
VAR23:
    FUN13(VAR3, VAR12);
VAR16:
    FUN14(VAR5, VAR3, VAR15);
    FUN15(&VAR9);
    FUN15(&VAR10);
}