static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    HuffEntry VAR5[1024];
    uint32_t VAR6[1024];
    uint8_t VAR7[1024];
    uint16_t VAR8[1024];
    uint32_t VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < 1024; VAR10++)
    {
        VAR5[VAR10].VAR11 = 1023 - VAR10;
        VAR5[VAR10].VAR4 = VAR4[VAR10];
    }
    FUN2(VAR5, 1024, VAR12, VAR13);
    VAR9 = 1;
    for (VAR10 = 1023; VAR10 >= 0; VAR10--)
    {
        VAR6[VAR10] = VAR9 >> (32 - VAR5[VAR10].VAR4);
        VAR7[VAR10] = VAR5[VAR10].VAR4;
        VAR8[VAR10] = VAR5[VAR10].VAR11;
        VAR9 += 0x80000000u >> (VAR5[VAR10].VAR4 - 1);
    }
    FUN3(VAR2);
    return FUN4(VAR2, FUN5(VAR5[1023].VAR4, 12), 1024, VAR7, sizeof(*VAR7), sizeof(*VAR7), VAR6, sizeof(*VAR6), sizeof(*VAR6), VAR8, sizeof(*VAR8), sizeof(*VAR8), 0);