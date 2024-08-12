static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5, const uint16_t VAR6[], const VAR3 *VAR7, int VAR8, uint32_t VAR9)
{
    int16_t VAR10;
    VAR10 = VAR7[((VAR2->VAR11 & 0x7f0) >> 4) * VAR8 + VAR5];
    VAR10 = FUN2(VAR10 + VAR2->VAR12);
    VAR2->VAR12 = VAR10 - (VAR10 >> 3);
    *VAR4 = FUN3(VAR10);
    if ((VAR2->VAR11 += VAR6[VAR5] - (VAR2->VAR11 >> 5)) < 0)
        VAR2->VAR11 = 0;
}