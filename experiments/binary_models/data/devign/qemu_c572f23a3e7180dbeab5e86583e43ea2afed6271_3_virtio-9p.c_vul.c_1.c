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
    FUN2(VAR12, VAR7, "", &VAR3, &VAR6, &VAR4, &VAR2);
    VAR9 = FUN3(VAR12, VAR3);
    if (VAR9 == NULL)
    {
        VAR5 = -VAR15;
        goto VAR16;
    }
    VAR10 = VAR9;
    VAR10->VAR17 = VAR18;
    VAR10->VAR19.VAR20.VAR21 = 0;
    VAR10->VAR19.VAR20.VAR22 = VAR4;
    VAR10->VAR19.VAR20.VAR2 = VAR2;
    FUN4(&VAR10->VAR19.VAR20.VAR6);
    FUN5(&VAR10->VAR19.VAR20.VAR6, &VAR6);
    if (VAR4)
    {
        VAR10->VAR19.VAR20.VAR23 = FUN6(VAR4);
    }
    else
    {
        VAR10->VAR19.VAR20.VAR23 = NULL;
    }
    VAR5 = VAR7;
    FUN7(VAR12, VAR9);
VAR16:
    FUN8(VAR14, VAR12, VAR5);
    FUN9(&VAR6);