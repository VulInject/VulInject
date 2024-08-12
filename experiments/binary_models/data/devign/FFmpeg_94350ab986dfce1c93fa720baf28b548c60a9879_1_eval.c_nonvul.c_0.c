double FUN1(VAR1 *VAR2, const double *VAR3, void *VAR4)
{
    Parser VAR5 = {0};
    VAR5.VAR3 = VAR3;
    VAR5.VAR4 = VAR4;
    return FUN2(&VAR5, VAR2);
}