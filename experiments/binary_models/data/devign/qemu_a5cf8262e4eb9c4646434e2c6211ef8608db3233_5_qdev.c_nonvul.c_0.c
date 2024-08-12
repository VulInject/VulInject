char *FUN1(VAR1 *VAR2)
{
    char VAR3[128];
    int VAR4;
    VAR4 = FUN2(VAR2, VAR3, 128);
    VAR3[VAR4 - 1] = '';
    return FUN3(VAR3);
}