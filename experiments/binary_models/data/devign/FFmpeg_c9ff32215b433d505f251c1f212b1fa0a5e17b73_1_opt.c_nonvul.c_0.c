static int FUN1(void *VAR1, const char *VAR2, int VAR3, int VAR4, enum AVOptionType VAR5, const char *VAR6, int VAR7)
{
    void *VAR8;
    const VAR9 *VAR10 = FUN2(VAR1, VAR2, NULL, 0, VAR4, &VAR8);
    int VAR11, VAR12;
    const VAR13 *class = *(VAR13 **)VAR1;
    if (!VAR10 || !VAR8)
        return VAR14;
    if (VAR10->VAR5 != VAR5)
    {
        FUN3(VAR1, VAR15, "", VAR2, VAR6);
        return FUN4(VAR16);
    }
    if (class->VAR17 && class->VAR17 < FUN5(52, 11, 100))
    {
        VAR11 = -1;
        VAR12 = VAR7 - 1;
    }
    else
    {
        VAR11 = FUN6(VAR10->VAR11, -1);
        VAR12 = FUN7(VAR10->VAR12, VAR7 - 1);
    }
    if (VAR3 < VAR11 || VAR3 > VAR12)
    {
        FUN3(VAR1, VAR15, "", VAR3, VAR2, VAR6, VAR11, VAR12);
        return FUN4(VAR18);
    }
    *(int *)(((VAR19 *)VAR8) + VAR10->VAR20) = VAR3;
    return 0;
}