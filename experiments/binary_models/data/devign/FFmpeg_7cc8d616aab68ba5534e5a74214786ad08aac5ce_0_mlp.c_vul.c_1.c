VAR1 FUN1(const VAR1 *VAR2, unsigned int VAR3)
{
    uint32_t VAR4 = 0;
    const VAR1 *VAR5 = VAR2 + VAR3;
    for (; VAR2 < VAR5 - 3; VAR2 += 4)
        VAR4 ^= *((const VAR6 *)VAR2);
    VAR4 = FUN2(VAR4);
    for (; VAR2 < VAR5; VAR2++)
        return VAR4;