static void FUN1(VAR1 **VAR2, int *VAR3, const VAR1 *VAR4, uint32_t VAR5, const VAR1 *VAR6, uint32_t VAR7)
{
    uint32_t VAR8 = *VAR3;
    uint8_t VAR9 = VAR8 ? 3 : 4;
    *VAR3 += VAR5 + VAR7 + VAR9;
    *VAR2 = FUN2(*VAR2, *VAR3);
    if (VAR4)
        memcpy(*VAR2 + VAR8, VAR4, VAR5);
    memcpy(*VAR2 + VAR5 + VAR9 + VAR8, VAR6, VAR7);
    if (!VAR8)
        FUN3(*VAR2 + VAR5, 1);
    else
    {
        (*VAR2 + VAR8)[0] = (*VAR2 + VAR8)[1] = 0;
        (*VAR2 + VAR8)[2] = 1;
    }
}