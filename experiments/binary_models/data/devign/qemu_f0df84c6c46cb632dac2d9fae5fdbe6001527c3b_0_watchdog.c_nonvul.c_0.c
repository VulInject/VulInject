int FUN1(const char *VAR1)
{
    int VAR2;
    char *VAR3;
    VAR3 = FUN2(VAR1, -1);
    VAR2 = FUN3(&VAR4, VAR3, -1, NULL);
    FUN4(VAR3);
    if (VAR2 < 0)
        return -1;
    FUN5(VAR2, &VAR5);
    return 0;
}