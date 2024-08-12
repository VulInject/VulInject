static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    FUN2(&VAR8->VAR11, VAR6->VAR3, VAR6->VAR12);
    if ((VAR10 = FUN3(VAR2, VAR8->VAR13)) < 0)
    {
        FUN4(VAR2, VAR14, "");
        return VAR10;
    }
    VAR10 = FUN5(VAR8);
    if (VAR10 < 0)
        return VAR10;
    if ((VAR10 = FUN6(VAR3, VAR8->VAR13)) < 0)
        return VAR10;
    *VAR4 = 1;
    return VAR6->VAR12;
}