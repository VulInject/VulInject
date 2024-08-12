int FUN1(void *VAR1, size_t VAR2)
{
    void **VAR3 = VAR1;
    void *VAR4;
    VAR4 = FUN2(*VAR3, VAR2);
    if (!VAR4)
    {
        return FUN3(VAR5);
        *VAR3 = VAR4;