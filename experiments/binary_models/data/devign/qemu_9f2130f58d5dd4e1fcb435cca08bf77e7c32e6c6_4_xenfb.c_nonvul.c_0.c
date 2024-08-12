static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR5.VAR2);
    struct VAR6 *VAR7;
    int VAR8;
    int VAR9;
    if (FUN3(VAR2, "", &VAR8) == -1)
        VAR8 = 0;
    VAR9 = FUN4(&VAR4->VAR5);
    if (VAR9 != 0)
        return VAR9;
    VAR7 = VAR4->VAR5.VAR10;
    VAR9 = FUN5(VAR4, VAR8 * 1024 * 1024U, VAR7->VAR11, VAR7->VAR12, VAR7->VAR13, VAR7->VAR14, 0, VAR7->VAR15);
    if (VAR9 != 0)
        return VAR9;
    VAR9 = FUN6(VAR4);
    if (VAR9 != 0)
        return VAR9;
    VAR4->VAR16 = FUN7(NULL, 0, &VAR17, VAR4);
    if (FUN3(VAR2, "", &VAR4->VAR18) == -1)
        VAR4->VAR18 = 0;
    if (VAR4->VAR18)
        FUN8(VAR2, "", 1);
    FUN9(VAR2, 1, "", VAR4->VAR18, VAR8);
    return 0;
}