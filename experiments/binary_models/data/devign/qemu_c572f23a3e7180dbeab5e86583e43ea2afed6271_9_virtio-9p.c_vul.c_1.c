static void FUN1(void *VAR1)
{
    int32_t VAR2;
    V9fsStat VAR3;
    ssize_t VAR4 = 0;
    size_t VAR5 = 7;
    struct stat VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10 = VAR1;
    VAR11 *VAR12 = VAR10->VAR12;
    FUN2(VAR10, VAR5, "", &VAR2);
    VAR8 = FUN3(VAR10, VAR2);
    if (VAR8 == NULL)
    {
        VAR4 = -VAR13;
        goto VAR14;
    }
    VAR4 = FUN4(VAR10, &VAR8->VAR15, &VAR6);
    if (VAR4 < 0)
    {
        goto VAR16;
    }
    VAR4 = FUN5(VAR10, &VAR8->VAR15, &VAR6, &VAR3);
    if (VAR4 < 0)
    {
        goto VAR16;
    }
    VAR5 += FUN6(VAR10, VAR5, "", 0, &VAR3);
    VAR4 = VAR5;
    FUN7(&VAR3);
VAR16:
    FUN8(VAR10, VAR8);
VAR14:
    FUN9(VAR10->VAR17, VAR10->VAR18, VAR3.VAR19, VAR3.VAR20, VAR3.VAR21, VAR3.VAR22);
    FUN10(VAR12, VAR10, VAR4);