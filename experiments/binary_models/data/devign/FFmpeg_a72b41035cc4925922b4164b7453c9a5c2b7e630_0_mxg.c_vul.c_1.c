static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    unsigned int VAR7 = VAR5->VAR8 - VAR5->VAR9;
    unsigned int VAR10;
    int VAR11;
    if (VAR7 > VAR7 + VAR3)
        return FUN2(VAR12);
    VAR10 = VAR5->VAR13 - VAR5->VAR9;
    VAR5->VAR9 = FUN3(VAR5->VAR9, &VAR5->VAR14, VAR7 + VAR3 + VAR15);
    if (!VAR5->VAR9)
        return FUN2(VAR12);
    VAR5->VAR8 = VAR5->VAR9 + VAR7;
    if (VAR5->VAR13)
        VAR5->VAR13 = VAR5->VAR9 + VAR10;
    VAR11 = FUN4(VAR2->VAR16, VAR5->VAR8 + VAR5->VAR3, VAR3 - VAR5->VAR3);
    if (VAR11 < 0)
        return VAR11;
    VAR5->VAR3 += VAR11;
    return VAR11;
}