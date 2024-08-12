double FUN1(const char *VAR1, const char *VAR2, int VAR3, double VAR4, double VAR5)
{
    char *VAR6;
    const char *VAR7;
    double VAR8 = FUN2(VAR2, &VAR6);
    if (*VAR6)
        VAR7 = "";
    else if (VAR8 < VAR4 || VAR8 > VAR5)
        VAR7 = "";
    else if (VAR3 == VAR9 && (VAR10)VAR8 != VAR8)
        VAR7 = "";
    else if (VAR3 == VAR11 && (int)VAR8 != VAR8)
        VAR7 = "";
    else
        return VAR8;
    FUN3(NULL, VAR12, VAR7, VAR1, VAR2, VAR4, VAR5);
    FUN4(1);
    return 0;
}