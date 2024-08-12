static void FUN1(void *VAR1)
{
    size_t VAR2 = 7;
    struct stat VAR3;
    VAR4 *VAR5;
    V9fsGetlock VAR6;
    int32_t VAR7, VAR8 = 0;
    VAR9 *VAR10 = VAR1;
    VAR11 *VAR12 = VAR10->VAR12;
    FUN2(&VAR6.VAR13);
    VAR8 = FUN3(VAR10, VAR2, "", &VAR7, &VAR6.VAR14, &VAR6.VAR15, &VAR6.VAR16, &VAR6.VAR17, &VAR6.VAR13);
    if (VAR8 < 0)
    {
        goto VAR18;
    }
    FUN4(VAR10->VAR19, VAR10->VAR20, VAR7, VAR6.VAR14, VAR6.VAR15, VAR6.VAR16);
    VAR5 = FUN5(VAR10, VAR7);
    if (VAR5 == NULL)
    {
        VAR8 = -VAR21;
        goto VAR18;
    }
    VAR8 = FUN6(VAR10, VAR5, &VAR3);
    if (VAR8 < 0)
    {
        goto VAR22;
    }
    VAR6.VAR14 = VAR23;
    VAR8 = FUN7(VAR10, VAR2, "", VAR6.VAR14, VAR6.VAR15, VAR6.VAR16, VAR6.VAR17, &VAR6.VAR13);
    if (VAR8 < 0)
    {
        goto VAR22;
    }
    VAR8 += VAR2;
    FUN8(VAR10->VAR19, VAR10->VAR20, VAR6.VAR14, VAR6.VAR15, VAR6.VAR16, VAR6.VAR17);
VAR22:
    FUN9(VAR10, VAR5);
VAR18:
    FUN10(VAR12, VAR10, VAR8);
    FUN11(&VAR6.VAR13);
}