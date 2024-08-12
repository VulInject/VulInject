int FUN1(void *VAR1, const char *VAR2, const char *VAR3, void *VAR4, int VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR1, VAR2);
    if (VAR6 < 0)
        return VAR6;
    return FUN3(VAR1, VAR6, VAR3, VAR4, VAR5);
}