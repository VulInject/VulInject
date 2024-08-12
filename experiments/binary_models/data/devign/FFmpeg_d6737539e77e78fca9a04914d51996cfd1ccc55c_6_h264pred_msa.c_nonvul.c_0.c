static void FUN1(VAR1 *VAR2, int32_t VAR3)
{
    uint32_t VAR4, VAR5;
    uint64_t VAR6, VAR7;
    VAR4 = VAR2[0 * VAR3 - 1];
    VAR4 += VAR2[1 * VAR3 - 1];
    VAR4 += VAR2[2 * VAR3 - 1];
    VAR4 += VAR2[3 * VAR3 - 1];
    VAR5 = VAR2[4 * VAR3 - 1];
    VAR5 += VAR2[5 * VAR3 - 1];
    VAR5 += VAR2[6 * VAR3 - 1];
    VAR5 += VAR2[7 * VAR3 - 1];
    VAR4 = (VAR4 + 2) >> 2;
    VAR5 = (VAR5 + 2) >> 2;
    VAR6 = VAR4 * 0x0101010101010101;
    VAR7 = VAR5 * 0x0101010101010101;
    FUN2(VAR6, VAR6, VAR6, VAR6, VAR2, VAR3);
    VAR2 += (4 * VAR3);
    FUN2(VAR7, VAR7, VAR7, VAR7, VAR2, VAR3);
}