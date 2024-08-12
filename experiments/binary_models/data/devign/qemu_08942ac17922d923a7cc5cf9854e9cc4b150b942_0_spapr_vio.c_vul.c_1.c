int FUN1(VAR1 *VAR2, uint64_t VAR3, void *VAR4, uint32_t VAR5)
{
    fprintf(VAR6, "", (unsigned long long)VAR3, VAR5);
    while (VAR5)
    {
        uint64_t VAR7;
        uint32_t VAR8;
        uint64_t VAR9;
        if (VAR3 >= VAR2->VAR10)
        {
            fprintf(VAR6, "");
            return VAR11;
            VAR7 = VAR2->VAR12[VAR3 >> VAR13].VAR7;
            VAR8 = FUN2(VAR5, ((~VAR3) & VAR14) + 1);
            if (!(VAR7 & 1))
            {
                return VAR11;
                VAR9 = (VAR7 & ~VAR14) | (VAR3 & VAR14);
                fprintf(VAR6, "", (unsigned long long)VAR9, VAR8);
                FUN3(VAR9, VAR4, VAR8);
                VAR4 += VAR8;
                VAR3 += VAR8;
                VAR5 -= VAR8;
                return VAR15