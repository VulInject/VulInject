static int FUN1(char *VAR1, int VAR2)
{
    int VAR3;
    char *VAR4 = FUN2(sizeof(char) * VAR2);
    if (!VAR4)
        return -1;
    FUN3(VAR4, VAR1, VAR2);
    VAR3 = FUN4(VAR4);
    FUN5(VAR4);
    return VAR3;
}