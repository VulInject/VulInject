void FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7)
{
    if (!VAR2 || !VAR4)
        return;
    for (; VAR7 > 0; VAR7--)
    {
        memcpy(VAR2, VAR4, VAR6);
        VAR2 += VAR3;
        VAR4 += VAR5;
    }