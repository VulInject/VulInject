static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, unsigned int VAR6, int VAR7)
{
    VAR8 *VAR9;
    if (VAR5 >= VAR10)
        return VAR11;
    VAR9 = &VAR2->VAR12[VAR5];
    if (VAR9->VAR13 + VAR7 > VAR9->VAR7 || VAR7 <= 0)
        return VAR11;
    FUN2(VAR4, VAR2->VAR14 + VAR6, VAR15);
    if (FUN3(VAR4, VAR9->VAR16 + VAR9->VAR13, VAR7) != VAR7)
        return FUN4(VAR17);
    VAR9->VAR13 += VAR7;
    return 0;
}