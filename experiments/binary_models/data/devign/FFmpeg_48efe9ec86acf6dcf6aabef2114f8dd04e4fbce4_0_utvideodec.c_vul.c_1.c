static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    int VAR6;
    HuffEntry VAR7[256];
    int VAR8;
    uint32_t VAR9[256];
    uint8_t VAR10[256];
    uint8_t VAR11[256];
    uint32_t VAR12;
    *VAR5 = -1;
    for (VAR6 = 0; VAR6 < 256; VAR6++)
    {
        VAR7[VAR6].VAR13 = VAR6;
        VAR7[VAR6].VAR14 = *VAR2++;
    }
    FUN2(VAR7, 256, sizeof(*VAR7), VAR15);
    if (!VAR7[0].VAR14)
    {
        *VAR5 = VAR7[0].VAR13;
        return 0;
    }
    if (VAR7[0].VAR14 > 32)
        return -1;
    VAR8 = 255;
    while (VAR7[VAR8].VAR14 == 255 && VAR8)
        VAR8--;
    VAR12 = 1;
    for (VAR6 = VAR8; VAR6 >= 0; VAR6--)
    {
        VAR9[VAR6] = VAR12 >> (32 - VAR7[VAR6].VAR14);
        VAR10[VAR6] = VAR7[VAR6].VAR14;
        VAR11[VAR6] = VAR7[VAR6].VAR13;
        VAR12 += 0x80000000u >> (VAR7[VAR6].VAR14 - 1);
    }
    return FUN3(VAR4, FUN4(VAR7[VAR8].VAR14, 11), VAR8 + 1, VAR10, sizeof(*VAR10), sizeof(*VAR10), VAR9, sizeof(*VAR9), sizeof(*VAR9), VAR11, sizeof(*VAR11), sizeof(*VAR11), 0);
}