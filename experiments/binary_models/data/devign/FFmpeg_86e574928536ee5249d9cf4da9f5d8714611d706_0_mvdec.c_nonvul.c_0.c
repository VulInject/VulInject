static char *FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    char *VAR5;
    if (VAR3 < 0 || VAR3 == VAR6)
        return NULL;
    VAR5 = FUN2(VAR3 + 1);
    if (!VAR5)
        return NULL;
    VAR4 = FUN3(VAR2, VAR3, VAR5, VAR3 + 1);
    if (VAR4 < VAR3)
        FUN4(VAR2, VAR3 - VAR4);
    return VAR5;
}