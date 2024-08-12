static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    V9fsString VAR4;
    V9fsString VAR5;
    VAR6 *VAR7;
    V9fsQID VAR8;
    struct stat VAR9;
    int32_t VAR10;
    int VAR11 = 0;
    gid_t VAR12;
    size_t VAR13 = 7;
    FUN2(VAR3, VAR13, "", &VAR10, &VAR4, &VAR5, &VAR12);
    VAR7 = FUN3(VAR3->VAR14, VAR10);
    if (VAR7 == NULL)
    {
        VAR11 = -VAR15;
        goto VAR16;
    }
    VAR11 = FUN4(VAR3->VAR14, VAR7, &VAR4, VAR5.VAR17, VAR12, &VAR9);
    if (VAR11 < 0)
    {
        goto VAR18;
    }
    FUN5(&VAR9, &VAR8);
    VAR13 += FUN6(VAR3, VAR13, "", &VAR8);
    VAR11 = VAR13;
VAR18:
    FUN7(VAR3->VAR14, VAR7);
VAR16:
    FUN8(VAR3->VAR14, VAR3, VAR11);
    FUN9(&VAR4);
    FUN9(&VAR5);
}