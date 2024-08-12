static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    int32_t VAR6, VAR7;
    VAR8 *VAR9, *VAR10;
    V9fsString VAR11;
    size_t VAR12 = 7;
    int VAR13 = 0;
    FUN2(&VAR11);
    VAR13 = FUN3(VAR3, VAR12, "", &VAR6, &VAR7, &VAR11);
    if (VAR13 < 0)
    {
        goto VAR14;
    }
    FUN4(VAR3->VAR15, VAR3->VAR16, VAR6, VAR7, VAR11.VAR17);
    VAR9 = FUN5(VAR3, VAR6);
    if (VAR9 == NULL)
    {
        VAR13 = -VAR18;
        goto VAR14;
    }
    VAR10 = FUN5(VAR3, VAR7);
    if (VAR10 == NULL)
    {
        VAR13 = -VAR18;
        goto VAR19;
    }
    VAR13 = FUN6(VAR3, VAR10, VAR9, &VAR11);
    if (!VAR13)
    {
        VAR13 = VAR12;
    }
VAR19:
    FUN7(VAR3, VAR9);
VAR14:
    FUN8(&VAR11);
    FUN9(VAR5, VAR3, VAR13);
}