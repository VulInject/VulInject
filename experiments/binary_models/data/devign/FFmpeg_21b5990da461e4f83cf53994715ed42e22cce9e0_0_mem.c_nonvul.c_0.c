void *FUN1(void *VAR1, unsigned int *VAR2, size_t VAR3)
{
    if (VAR3 <= *VAR2)
        return VAR1;
    VAR3 = FUN2(VAR3 + VAR3 / 16 + 32, VAR3);
    VAR1 = FUN3(VAR1, VAR3);
    if (!VAR1)
        VAR3 = 0;
    *VAR2 = VAR3;
    return VAR1;
}