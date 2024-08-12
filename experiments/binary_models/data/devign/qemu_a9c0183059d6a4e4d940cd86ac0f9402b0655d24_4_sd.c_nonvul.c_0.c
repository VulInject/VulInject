static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    uint32_t VAR5, VAR6;
    uint32_t VAR7 = 0;
    VAR6 = VAR4 >> (VAR8 + VAR9 + VAR10);
    for (VAR5 = 0; VAR5 < 32; VAR5++, VAR6++, VAR4 += VAR11)
    {
        if (VAR4 < VAR3->VAR12 && FUN2(VAR6, VAR3->VAR13))
        {
            VAR7 |= (1 << VAR5);
        }
    }
    return VAR7;
}