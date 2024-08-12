static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = (VAR11 *)VAR6->VAR13[0];
    int VAR14;
    if ((VAR14 = FUN2(VAR2, VAR4, VAR9->VAR15)) < 0)
        return VAR14;
    VAR4->VAR16 = FUN3(VAR9->VAR17, VAR12, VAR9->VAR18, VAR4->VAR13, VAR4->VAR16);
    *VAR7 = 1;
    VAR4->VAR19 = VAR6->VAR19;
    return 0;
}