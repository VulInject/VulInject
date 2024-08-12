static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5, const uint16_t VAR6[], const VAR3 *VAR7, int VAR8, uint32_t VAR9)
{
    int16_t VAR10;
    VAR10 = VAR7[((VAR2->VAR11 & 0x7f0) >> 4) * VAR8 + VAR5];
    if ((VAR2->VAR12 ^ VAR10) >= 0)
    {
        VAR2->VAR13 = FUN2(VAR2->VAR13 + 506, 32767);
    }
    else
    {
        if (VAR2->VAR13 - 314 < -32768)
            VAR2->VAR13 = -32767;
        else
            VAR2->VAR13 -= 314;
    }
    VAR10 = FUN3(VAR10 + VAR2->VAR14);
    VAR2->VAR14 = ((VAR10 * VAR2->VAR13) >> 15);
    VAR10 >>= 1;
    VAR4[0] = FUN4(VAR2->VAR12 + VAR2->VAR15 - ((VAR2->VAR15 - VAR10) >> 2));
    VAR4[VAR9] = FUN4(VAR2->VAR12 + VAR10 + ((VAR2->VAR15 - VAR10) >> 2));
    VAR2->VAR15 = VAR2->VAR12;
    VAR2->VAR12 = VAR10;
    if ((VAR2->VAR11 += VAR6[VAR5] - (VAR2->VAR11 >> 5)) < 0)
        VAR2->VAR11 = 0;
}