VAR1 FUN1(VAR2 *VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3, VAR4, VAR6);
    VAR9 *VAR10;
    int64_t VAR11;
    if (!VAR8)
    {
        return -1;
    }
    VAR10 = FUN3(VAR8);
    if (!VAR10)
    {
        FUN4(VAR6, VAR12, VAR4, "");
        VAR11 = -1;
    }
    else
    {
        VAR11 = FUN5(VAR10);
    }
    FUN6(VAR10);
    return VAR11;
}