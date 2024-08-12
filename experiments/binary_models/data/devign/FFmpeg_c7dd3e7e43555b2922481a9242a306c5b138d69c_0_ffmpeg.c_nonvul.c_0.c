static int FUN1(const char *VAR1, const char *VAR2)
{
    unsigned int VAR3;
    double VAR4;
    char *VAR5;
    VAR3 = FUN2(VAR2, &VAR5, 0);
    if (*VAR5)
        VAR5++;
    VAR4 = FUN3(VAR5, &VAR5);
    VAR6 = FUN4(VAR6, sizeof(*VAR6), &VAR7, VAR3 + 1);
    VAR6[VAR3] = VAR4;
    return 0;
}