void FUN1(VAR1 *VAR2, VAR1 *VAR3, uint64_t VAR4, uint64_t VAR5)
{
    FUN2(""
            : ""(*VAR2), ""(*VAR3)
            : ""(VAR4), ""(VAR5));
    uint64_t VAR6, VAR7, VAR8, VAR9;
    VAR9 = (VAR1)((VAR10)VAR4) * (VAR1)((VAR10)VAR5);
    VAR7 = (VAR4 >> 32) * (VAR10)VAR5;
    VAR8 = (VAR10)VAR4 * (VAR5 >> 32);
    VAR6 = (VAR4 >> 32) * (VAR5 >> 32);
    VAR6 += VAR7 >> 32;
    VAR7 = (VAR1)((VAR10)VAR7) + VAR8 + (VAR9 >> 32);
    *VAR2 = VAR6 + (VAR7 >> 32);
    *VAR3 = (VAR7 << 32) + (VAR10)VAR9;
}