int FUN1(void *VAR1, size_t VAR2, size_t VAR3)
{
    void **VAR4 = VAR1;
    *VAR4 = FUN2(*VAR4, VAR2, VAR3);
    if (!*VAR4 && !(VAR2 && VAR3))
        return FUN3(VAR5);
    return 0;
}