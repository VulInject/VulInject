void FUN1(const VAR1 *VAR2)
{
    VAR3 = realloc((void *)VAR3, ++VAR4 * sizeof(*VAR3));
    VAR3[VAR4 - 1] = *VAR2;
    FUN2(VAR3, VAR4, sizeof(*VAR3), VAR5);
}