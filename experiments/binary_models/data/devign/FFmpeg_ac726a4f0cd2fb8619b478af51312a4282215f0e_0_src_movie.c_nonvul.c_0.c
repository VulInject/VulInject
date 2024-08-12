static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    int VAR9;
    if (VAR6->VAR10 == VAR11)
        return VAR12;
    if ((VAR9 = FUN2(VAR2)) < 0)
        return VAR9;
    VAR4 = FUN3(VAR6->VAR13, ~0);
    FUN4(VAR2, VAR4);
    FUN5(VAR2, 0, VAR2->VAR14, 1);
    FUN6(VAR2);
    FUN7(VAR6->VAR13);
    VAR6->VAR13 = NULL;
    return 0;
}