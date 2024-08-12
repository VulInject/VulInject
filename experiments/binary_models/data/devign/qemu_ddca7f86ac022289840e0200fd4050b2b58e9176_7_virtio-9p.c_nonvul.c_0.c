static void FUN1(void *VAR1)
{
    int32_t VAR2, VAR3, VAR4;
    gid_t VAR5;
    ssize_t VAR6 = 0;
    ssize_t VAR7 = 7;
    V9fsString VAR8;
    VAR9 *VAR10;
    struct stat VAR11;
    V9fsQID VAR12;
    int32_t VAR13;
    VAR14 *VAR15 = VAR1;
    FUN2(&VAR8);
    VAR6 = FUN3(VAR15, VAR7, "", &VAR2, &VAR8, &VAR3, &VAR4, &VAR5);
    if (VAR6 < 0)
    {
        goto VAR16;
    }
    FUN4(VAR15->VAR17, VAR15->VAR18, VAR2, VAR3, VAR4, VAR5);
    VAR10 = FUN5(VAR15, VAR2);
    if (VAR10 == NULL)
    {
        VAR6 = -VAR19;
        goto VAR16;
    }
    VAR3 = FUN6(VAR15->VAR20, VAR3);
    VAR6 = FUN7(VAR15, VAR10, &VAR8, VAR5, VAR3 | VAR21, VAR4, &VAR11);
    if (VAR6 < 0)
    {
        goto VAR22;
    }
    VAR10->VAR23 = VAR24;
    VAR10->VAR25 = VAR3;
    if (VAR3 & VAR26)
    {
        VAR10->VAR3 |= VAR27;
    }
    VAR13 = FUN8(VAR15, &VAR10->VAR28);
    FUN9(&VAR11, &VAR12);
    VAR6 = FUN10(VAR15, VAR7, "", &VAR12, VAR13);
    if (VAR6 < 0)
    {
        goto VAR22;
    }
    VAR6 += VAR7;
    FUN11(VAR15->VAR17, VAR15->VAR18, VAR12.VAR29, VAR12.VAR30, VAR12.VAR28, VAR13);
VAR22:
    FUN12(VAR15, VAR10);
VAR16:
    FUN13(VAR15->VAR20, VAR15, VAR6);
    FUN14(&VAR8);
}