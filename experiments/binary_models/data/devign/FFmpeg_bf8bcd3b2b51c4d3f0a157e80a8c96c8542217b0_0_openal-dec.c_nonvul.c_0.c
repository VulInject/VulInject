static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 0;
    const char *VAR9;
    ALCint VAR10;
    FUN2(VAR6->VAR11, VAR12, (VAR13)sizeof(VAR14), &VAR10);
    if (VAR8 = FUN3(VAR6->VAR11, &VAR9))
        goto VAR15;
    if ((VAR8 = FUN4(VAR4, VAR10 * VAR6->VAR16)) < 0)
        goto VAR15;
    VAR4->VAR17 = FUN5();
    FUN6(VAR6->VAR11, VAR4->VAR18, VAR10);
    if (VAR8 = FUN3(VAR6->VAR11, &VAR9))
        goto VAR15;
    return VAR4->VAR19;
VAR15:
    if (VAR4->VAR18)
        FUN7(VAR4);
    if (VAR9)
        FUN8(VAR2, VAR20, "", VAR9);
    return VAR8;
}