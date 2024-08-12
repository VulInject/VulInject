static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR5 = FUN3(VAR4, FUN4(VAR2->VAR6), &VAR2->VAR7, VAR8, VAR9, &VAR2->VAR7, VAR8, VAR10, 0);
    if (VAR5)
    {
        return VAR5;
    }
    VAR5 = FUN5(VAR2, FUN4(VAR2->VAR6));
    if (VAR5)
    {
        goto VAR11;
    }
    return 0;
VAR11:
    FUN6(VAR4, &VAR2->VAR7, &VAR2->VAR7);
    return VAR5;
}