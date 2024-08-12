bool FUN1(const VAR1 *VAR2, const char *VAR3, bool VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, VAR3);
    if (!VAR6 || FUN3(VAR6) != VAR7)
        return VAR4;
    return FUN4(FUN5(VAR6));
}