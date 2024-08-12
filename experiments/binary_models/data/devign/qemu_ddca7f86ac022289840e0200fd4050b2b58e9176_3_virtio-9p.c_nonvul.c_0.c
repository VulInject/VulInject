static void FUN1(void *VAR1)
{
    int VAR2;
    int32_t VAR3;
    int64_t VAR4;
    ssize_t VAR5 = 0;
    V9fsString VAR6;
    size_t VAR7 = 7;
    VAR8 *VAR9;
    VAR8 *VAR10;
    VAR11 *VAR12 = VAR1;
    VAR13 *VAR14 = VAR12->VAR14;
    FUN2(&VAR6);
    VAR5 = FUN3(VAR12, VAR7, "", &VAR3, &VAR6, &VAR4, &VAR2);
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    FUN4(VAR12->VAR16, VAR12->VAR17, VAR3, VAR6.VAR18, VAR4, VAR2);
    VAR9 = FUN5(VAR12, VAR3);
    if (VAR9 == NULL)
    {
        VAR5 = -VAR19;
        goto VAR15;
    }
    VAR10 = VAR9;
    VAR10->VAR20 = VAR21;
    VAR10->VAR22.VAR23.VAR24 = 0;
    VAR10->VAR22.VAR23.VAR25 = VAR4;
    VAR10->VAR22.VAR23.VAR2 = VAR2;
    FUN2(&VAR10->VAR22.VAR23.VAR6);
    FUN6(&VAR10->VAR22.VAR23.VAR6, &VAR6);
    if (VAR4)
    {
        VAR10->VAR22.VAR23.VAR26 = FUN7(VAR4);
    }
    else
    {
        VAR10->VAR22.VAR23.VAR26 = NULL;
    }
    VAR5 = VAR7;
    FUN8(VAR12, VAR9);
VAR15:
    FUN9(VAR14, VAR12, VAR5);
    FUN10(&VAR6);
}