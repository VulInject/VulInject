static int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6[0]->VAR5;
    VAR7 *VAR8 = VAR2->VAR9;
    if (!VAR8->VAR10)
        return 0;
    VAR3 = FUN2(VAR2->VAR11, VAR5, 0);
    if (VAR3)
        return VAR3;
    VAR3 = FUN3(VAR2->VAR11, &VAR2->VAR12, 0, VAR2->VAR13 & VAR14);
    if (VAR3)
        return VAR3;
    FUN4(VAR2->VAR11, 8192, 1);
    return VAR3;
}