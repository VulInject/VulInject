static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    int VAR11;
    VAR2->VAR12 = VAR9->VAR12;
    VAR2->VAR13 = VAR9->VAR13;
    VAR2->VAR14 = VAR9->VAR14;
    VAR2->VAR15 = VAR9->VAR15;
    VAR2->VAR16 = VAR9->VAR16;
    if ((VAR11 = FUN2(VAR4, &VAR7->VAR17)) < 0)
        return VAR11;
    return 0;
}