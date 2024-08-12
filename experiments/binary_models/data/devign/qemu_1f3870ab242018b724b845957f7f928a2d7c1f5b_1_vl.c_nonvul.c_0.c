static int FUN1(const char *VAR1)
{
    int VAR2, VAR3;
    const char *VAR4;
    if (!VAR5)
        return -1;
    VAR4 = strchr(VAR1, '');
    if (!VAR4)
        return -1;
    VAR2 = FUN2(VAR1, NULL, 0);
    VAR3 = FUN2(VAR4 + 1, NULL, 0);
    return FUN3(VAR2, VAR3);
}