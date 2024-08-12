int FUN1(void *VAR1, const char *VAR2)
{
    int VAR3;
    char *VAR4 = FUN2(VAR2);
    char *VAR5 = strrchr(VAR4, '');
    int VAR6;
    if (!VAR5)
    {
        return -1;
    }
    VAR5[0] = '';
    VAR5++;
    VAR3 = FUN3(VAR1, VAR4);
    if (VAR3 < 0)
    {
        return VAR3;
    }
    VAR6 = FUN4(VAR1, VAR3, VAR5);
    FUN5(VAR4);
    return VAR6;
}