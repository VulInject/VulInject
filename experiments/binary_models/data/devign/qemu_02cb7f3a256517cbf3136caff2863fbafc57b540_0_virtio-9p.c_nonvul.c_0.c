static void FUN1(void *VAR1)
{
    int VAR2;
    gid_t VAR3;
    int32_t VAR4;
    V9fsQID VAR5;
    int VAR6 = 0;
    int VAR7, VAR8;
    size_t VAR9 = 7;
    V9fsString VAR10;
    struct stat VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = VAR1;
    VAR16 *VAR17 = VAR15->VAR17;
    FUN2(VAR15, VAR9, "", &VAR4, &VAR10, &VAR2, &VAR7, &VAR8, &VAR3);
    VAR13 = FUN3(VAR17, VAR4);
    if (VAR13 == NULL)
    {
        VAR6 = -VAR18;
        goto VAR19;
    }
    VAR6 = FUN4(VAR17, VAR13, &VAR10, VAR13->VAR20, VAR3, FUN5(VAR7, VAR8), VAR2, &VAR11);
    if (VAR6 < 0)
    {
        goto VAR21;
    }
    FUN6(&VAR11, &VAR5);
    VAR6 = VAR9;
    VAR6 += FUN7(VAR15, VAR9, "", &VAR5);
VAR21:
    FUN8(VAR17, VAR13);
VAR19:
    FUN9(VAR17, VAR15, VAR6);
    FUN10(&VAR10);
}