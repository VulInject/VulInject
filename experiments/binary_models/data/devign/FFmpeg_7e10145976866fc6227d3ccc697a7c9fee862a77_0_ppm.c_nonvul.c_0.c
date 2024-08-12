static int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4)
{
    char VAR5[3];
    VAR6 *VAR7 = FUN2(VAR2);
    int VAR8;
    if (!fgets(VAR5, 3, VAR7))
        return -1;
    if (!FUN3(VAR5, "", 2))
    {
        *VAR3 = FUN4(VAR2);
        *VAR4 = FUN4(VAR2);
        VAR8 = FUN4(VAR2);
        return VAR8 != 255 || *VAR3 <= 0 || *VAR4 <= 0;
    }
    return 1;
}