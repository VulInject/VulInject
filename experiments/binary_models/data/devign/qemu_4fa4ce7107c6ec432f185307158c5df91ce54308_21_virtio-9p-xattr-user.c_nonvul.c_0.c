static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, void *VAR5, size_t VAR6, int VAR7)
{
    char *VAR8;
    int VAR9;
    if (FUN2(VAR4, "", 12) == 0)
    {
        VAR10 = VAR11;
        return -1;
    }
    VAR8 = FUN3(VAR2, VAR3);
    VAR9 = FUN4(VAR8, VAR4, VAR5, VAR6, VAR7);
    FUN5(VAR8);
    return VAR9;
}