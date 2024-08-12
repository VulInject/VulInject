static inline void FUN1(VAR1 *VAR2, ptrdiff_t VAR3, const VAR1 *VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7[4];
    uint16_t VAR8 = FUN2(VAR4 + 8);
    uint16_t VAR9 = FUN2(VAR4 + 10);
    uint32_t VAR10 = FUN3(VAR4 + 12);
    FUN4(VAR7, VAR8, VAR9, 1, 0);
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        const uint16_t VAR11 = FUN2(VAR4 + 2 * VAR6);
        uint8_t VAR12[4];
        VAR12[0] = ((VAR11 >> 0) & 0x0F) * 17;
        VAR12[1] = ((VAR11 >> 4) & 0x0F) * 17;
        VAR12[2] = ((VAR11 >> 8) & 0x0F) * 17;
        VAR12[3] = ((VAR11 >> 12) & 0x0F) * 17;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            uint8_t VAR13 = VAR12[VAR5];
            uint32_t VAR14 = VAR7[VAR10 & 3] | (VAR13 << 24);
            VAR10 >>= 2;
            FUN5(VAR2 + VAR5 * 4, VAR14);
        }
        VAR2 += VAR3;
    }
}