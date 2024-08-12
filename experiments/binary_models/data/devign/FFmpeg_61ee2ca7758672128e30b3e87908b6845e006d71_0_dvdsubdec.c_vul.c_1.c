static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    static const uint8_t VAR6[4][4] = {
        {0xff},
        {0x00, 0xff},
        {0x00, 0x80, 0xff},
        {0x00, 0x55, 0xaa, 0xff},
    };
    uint8_t VAR7[16] = {0};
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16 = VAR2->VAR16, *VAR17 = VAR2->VAR17;
    if (VAR2->VAR18)
    {
        for (VAR9 = 0; VAR9 < 4; VAR9++)
            VAR4[VAR9] = (VAR2->VAR19[VAR16[VAR9]] & 0x00ffffff) | ((VAR17[VAR9] * 17U) << 24);
        return;
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        VAR4[VAR9] = 0;
    VAR8 = 0;
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        if (VAR17[VAR9] != 0 && !VAR7[VAR16[VAR9]])
        {
            VAR7[VAR16[VAR9]] = 1;
            VAR8++;
        }
    }
    if (VAR8 == 0)
        return;
    VAR11 = 0;
    memset(VAR7, 0, 16);
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        if (VAR17[VAR9] != 0)
        {
            if (!VAR7[VAR16[VAR9]])
            {
                VAR10 = VAR6[VAR8 - 1][VAR11];
                VAR12 = (((VAR5 >> 16) & 0xff) * VAR10) >> 8;
                VAR13 = (((VAR5 >> 8) & 0xff) * VAR10) >> 8;
                VAR14 = (((VAR5 >> 0) & 0xff) * VAR10) >> 8;
                VAR4[VAR9] = VAR14 | (VAR13 << 8) | (VAR12 << 16) | ((VAR17[VAR9] * 17) << 24);
                VAR7[VAR16[VAR9]] = (VAR9 + 1);
                VAR11++;
            }
            else
            {
                VAR4[VAR9] = (VAR4[VAR7[VAR16[VAR9]] - 1] & 0x00ffffff) | ((VAR17[VAR9] * 17) << 24);
            }
        }
    }
}