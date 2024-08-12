void FUN1(VAR1 *VAR2, const char *VAR3)
{
    const char *VAR4[2];
    VAR4[0] = VAR3;
    VAR4[1] = NULL;
    FUN2(VAR2, VAR4, VAR3);
}