static double FUN1(VAR1 *VAR2, double VAR3)
{
    VAR4 *VAR5;
    double VAR6, VAR7;
    int VAR8;
    if (VAR3 < VAR2->VAR9)
        return VAR2->VAR10;
    VAR6 = FUN2(VAR3);
    for (VAR8 = 1;; VAR8++)
        if (VAR6 <= VAR2->VAR11[VAR8 + 1].VAR12)
            break;
    VAR5 = &VAR2->VAR11[VAR8];
    VAR6 -= VAR5->VAR12;
    VAR7 = VAR5->VAR13 + VAR6 * (VAR5->VAR14 * VAR6 + VAR5->VAR15);
    return FUN3(VAR7);
}