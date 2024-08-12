FUN1(const struct VAR1 *VAR2, const unsigned int VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6)
{
    size_t VAR7, VAR8;
    unsigned int VAR9;
    uint32_t VAR10 = 0;
    VAR7 = 0;
    VAR8 = 0;
    for (VAR9 = 0; VAR9 < VAR3 && VAR5; VAR9++)
    {
        if (VAR4 < (VAR7 + VAR2[VAR9].VAR11))
        {
            size_t VAR12 = FUN2((VAR7 + VAR2[VAR9].VAR11) - VAR4, VAR5);
            void *VAR13 = VAR2[VAR9].VAR14 + (VAR4 - VAR7);
            VAR10 += FUN3(VAR12, VAR13, VAR6);
            VAR6 += VAR12;
            VAR8 += VAR12;
            VAR4 += VAR12;
            VAR5 -= VAR12;
        }
        VAR7 += VAR2[VAR9].VAR11;
    }
    return VAR10;
}