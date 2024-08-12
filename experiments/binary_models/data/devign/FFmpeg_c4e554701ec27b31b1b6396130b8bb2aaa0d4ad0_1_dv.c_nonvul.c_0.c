static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    const VAR8 *VAR9;
    VAR6->VAR10 = FUN2(VAR2);
    if (!VAR6->VAR10)
        return -1;
    if (FUN3(&VAR2->VAR11, VAR6->VAR12, 4) <= 0 || FUN4(&VAR2->VAR11, -4, VAR13) < 0)
        return VAR14;
    VAR9 = FUN5(VAR6->VAR12);
    VAR2->VAR15 = FUN6(VAR9->VAR16 * 8, VAR9->VAR17, VAR9->VAR18);
    return 0;
}