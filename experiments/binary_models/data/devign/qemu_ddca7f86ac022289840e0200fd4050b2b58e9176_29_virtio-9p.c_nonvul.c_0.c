static void FUN1(void *VAR1)
{
    int32_t VAR2;
    ssize_t VAR3 = 0;
    size_t VAR4 = 7;
    V9fsString VAR5;
    int32_t VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10 = VAR1;
    VAR11 *VAR12 = VAR10->VAR12;
    FUN2(&VAR5);
    VAR3 = FUN3(VAR10, VAR4, "", &VAR2, &VAR6, &VAR5);
    if (VAR3 < 0)
    {
        goto VAR13;
    }
    VAR8 = FUN4(VAR10, VAR2);
    if (VAR8 == NULL)
    {
        VAR3 = -VAR14;
        goto VAR13;
    }
    FUN5(VAR8->VAR15 != VAR16);
    if (!(VAR10->VAR12->VAR17.VAR18 & VAR19))
    {
        VAR3 = -VAR20;
        goto VAR21;
    }
    FUN6(VAR12);
    VAR3 = FUN7(VAR10, VAR8, VAR6, &VAR5);
    FUN8(VAR12);
    if (!VAR3)
    {
        VAR3 = VAR4;
    }
VAR21:
    FUN9(VAR10, VAR8);
VAR13:
    FUN10(VAR12, VAR10, VAR3);
    FUN11(&VAR5);
}