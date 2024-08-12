void FUN1(void *VAR1, unsigned int *VAR2, size_t VAR3)
{
    void **VAR4 = VAR1;
    if (VAR3 < *VAR2)
        return;
    VAR3 = FUN2(17 * VAR3 / 16 + 32, VAR3);
    FUN3(*VAR4);
    *VAR4 = FUN4(VAR3);
    if (!*VAR4)
        VAR3 = 0;
    *VAR2 = VAR3;
}