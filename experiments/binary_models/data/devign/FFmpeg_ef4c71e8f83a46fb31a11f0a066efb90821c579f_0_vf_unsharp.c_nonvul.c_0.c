static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    const VAR7 *VAR8 = FUN2(VAR2->VAR9);
    int VAR10;
    VAR4->VAR11 = VAR8->VAR12;
    VAR4->VAR13 = VAR8->VAR14;
    VAR10 = FUN3(VAR2->VAR5, &VAR4->VAR15, "", VAR2->VAR16);
    if (VAR10 < 0)
        return VAR10;
    VAR10 = FUN3(VAR2->VAR5, &VAR4->VAR17, "", FUN4(VAR2->VAR16, VAR4->VAR11));
    if (VAR10 < 0)
        return VAR10;
    return 0;
}