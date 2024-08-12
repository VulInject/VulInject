static int FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4;
    int VAR5, VAR6, VAR7;
    int VAR8 = VAR3 / VAR9;
    if (VAR8 < VAR10)
        return VAR11;
    VAR5 = FUN2(VAR2->VAR12, VAR13 * VAR8, VAR13, NULL) * VAR10 / VAR8;
    VAR7 = FUN2(VAR2->VAR12, VAR14 * VAR8, VAR14, NULL) * VAR10 / VAR8;
    VAR6 = FUN2(VAR2->VAR12, VAR9 * VAR8, VAR9, NULL) * VAR10 / VAR8;
    FUN3(NULL, "", VAR5, VAR7, VAR6);
    if (VAR5 > VAR6 && VAR5 > VAR7 && VAR5 > 6)
        return VAR15 + VAR5 - VAR10;
    else if (VAR7 > VAR5 && VAR7 > VAR6 && VAR7 > 6)
        return VAR15 + VAR7 - VAR10;
    else if (VAR6 > 6)
        return VAR15 + VAR6 - VAR10;
    else
        return VAR11;
}