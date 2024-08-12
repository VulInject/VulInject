static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, void *VAR6, size_t VAR7)
{
    char *VAR8;
    ssize_t VAR9;
    if (FUN2(VAR5, "", 12) == 0)
    {
        VAR10 = VAR11;
        return -1;
    }
    VAR8 = FUN3(VAR3, VAR4);
    VAR9 = FUN4(VAR8, VAR5, VAR6, VAR7);
    FUN5(VAR8);
    return VAR9;
}