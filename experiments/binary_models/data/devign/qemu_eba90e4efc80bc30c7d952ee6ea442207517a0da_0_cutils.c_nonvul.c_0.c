VAR1 FUN1(const char *VAR2, char **VAR3, const char VAR4, int64_t VAR5)
{
    int64_t VAR6 = -1;
    char *VAR7;
    unsigned char VAR8;
    int VAR9 = 0;
    double VAR10, VAR11, VAR12, VAR13;
    VAR14 = 0;
    VAR10 = FUN2(VAR2, &VAR7);
    if (FUN3(VAR10) || VAR7 == VAR2 || VAR14 != 0)
    {
        goto VAR15;
    }
    VAR13 = FUN4(VAR10, &VAR12);
    if (VAR13 != 0)
    {
        VAR9 = 1;
    }
    VAR8 = *VAR7;
    VAR11 = FUN5(VAR8, VAR5);
    if (VAR11 >= 0)
    {
        VAR7++;
    }
    else
    {
        VAR11 = FUN5(VAR4, VAR5);
        assert(VAR11 >= 0);
    }
    if (VAR11 == 1 && VAR9)
    {
        goto VAR15;
    }
    if ((VAR10 * VAR11 >= VAR16) || VAR10 < 0)
    {
        goto VAR15;
    }
    VAR6 = VAR10 * VAR11;
VAR15:
    if (VAR3)
    {
        *VAR3 = VAR7;
    }
    return VAR6;
}