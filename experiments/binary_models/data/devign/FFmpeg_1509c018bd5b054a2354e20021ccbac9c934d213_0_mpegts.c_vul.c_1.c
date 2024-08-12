static int FUN1(const VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6;
    if (VAR3 < (VAR7 * 5 + 1))
        return VAR8;
    VAR4 = FUN2(VAR2, VAR3, VAR9, NULL);
    VAR6 = FUN2(VAR2, VAR3, VAR10, NULL);
    VAR5 = FUN2(VAR2, VAR3, VAR7, NULL);
    FUN3(NULL, "", VAR4, VAR6, VAR5);
    if (VAR4 > VAR5 && VAR4 > VAR6)
        return VAR9;
    else if (VAR6 > VAR4 && VAR6 > VAR5)
        return VAR10;
    else if (VAR4 < VAR5 && VAR6 < VAR5)
        return VAR7;
    else
        return VAR8;
}