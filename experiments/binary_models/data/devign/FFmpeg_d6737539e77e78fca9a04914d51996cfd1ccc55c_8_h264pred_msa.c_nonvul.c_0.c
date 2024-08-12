static void FUN1(VAR1 *VAR2, int32_t VAR3)
{
    uint32_t VAR4;
    uint64_t VAR5, VAR6;
    VAR4 = VAR2[0 * VAR3 - 1];
    VAR4 += VAR2[1 * VAR3 - 1];
    VAR4 += VAR2[2 * VAR3 - 1];
    VAR4 += VAR2[3 * VAR3 - 1];
    VAR4 = (VAR4 + 2) >> 2;
    VAR5 = VAR4 * 0x0101010101010101;
    VAR6 = 0x8080808080808080;
    FUN2(VAR5, VAR5, VAR5, VAR5, VAR2, VAR3);
    VAR2 += (4 * VAR3);
    FUN2(VAR6, VAR6, VAR6, VAR6, VAR2, VAR3);
}