static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    HuffEntry VAR5[256];
    uint32_t VAR6[256];
    uint8_t VAR7[256];
    uint8_t VAR8[256];
    uint32_t VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < 256; VAR10++)
    {
        VAR5[VAR10].VAR11 = 255 - VAR10;
        VAR5[VAR10].VAR4 = VAR4[VAR10];
        if (VAR4[VAR10] == 0)
            return VAR12;
    }
    FUN2(VAR5, 256, VAR13, VAR14);
    VAR9 = 1;
    for (VAR10 = 255; VAR10 >= 0; VAR10--)
    {
        VAR6[VAR10] = VAR9 >> (32 - VAR5[VAR10].VAR4);
        VAR7[VAR10] = VAR5[VAR10].VAR4;
        VAR8[VAR10] = VAR5[VAR10].VAR11;
        VAR9 += 0x80000000u >> (VAR5[VAR10].VAR4 - 1);
    }
    FUN3(VAR2);
    return FUN4(VAR2, FUN5(VAR5[255].VAR4, 12), 256, VAR7, sizeof(*VAR7), sizeof(*VAR7), VAR6, sizeof(*VAR6), sizeof(*VAR6), VAR8, sizeof(*VAR8), sizeof(*VAR8), 0);
}