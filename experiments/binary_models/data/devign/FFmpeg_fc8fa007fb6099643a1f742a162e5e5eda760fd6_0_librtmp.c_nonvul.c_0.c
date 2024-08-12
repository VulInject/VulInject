static VAR1 FUN1(VAR2 *VAR3, int VAR4, int64_t VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    if (VAR6 & VAR10)
        return FUN2(VAR11);
    if (VAR4 < 0)
        VAR5 = FUN3(VAR5, 1000, VAR12, VAR6 & VAR13 ? VAR14 : VAR15);
    if (!FUN4(VAR8, VAR5))
        return -1;
    return VAR5;
}