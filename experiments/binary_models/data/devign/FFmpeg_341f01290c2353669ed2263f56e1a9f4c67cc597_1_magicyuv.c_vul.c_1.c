static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    HuffEntry VAR5[4096];
    uint32_t VAR6[4096];
    uint8_t VAR7[4096];
    uint16_t VAR8[4096];
    uint32_t VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < 4096; VAR10++)
    {
        VAR5[VAR10].VAR11 = 4095 - VAR10;
        VAR5[VAR10].VAR4 = VAR4[VAR10];
        if (VAR4[VAR10] == 0)
            return VAR12;
    }
    FUN2(VAR5, 4096, VAR13, VAR14);
    VAR9 = 1;
    for (VAR10 = 4095; VAR10 >= 0; VAR10--)
    {
        VAR6[VAR10] = VAR9 >> (32 - VAR5[VAR10].VAR4);
        VAR7[VAR10] = VAR5[VAR10].VAR4;
        VAR8[VAR10] = VAR5[VAR10].VAR11;
        VAR9 += 0x80000000u >> (VAR5[VAR10].VAR4 - 1);
    }
    FUN3(VAR2);
    return FUN4(VAR2, FUN5(VAR5[4095].VAR4, 14), 4096, VAR7, sizeof(*VAR7), sizeof(*VAR7), VAR6, sizeof(*VAR6), sizeof(*VAR6), VAR8, sizeof(*VAR8), sizeof(*VAR8), 0);
}