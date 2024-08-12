static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    uint8_t VAR7[256];
    uint8_t VAR8[256];
    uint16_t VAR9[256];
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    VAR13 = 0;
    VAR16 = 0;
    VAR12 = 0;
    VAR10 = FUN2(VAR4, 5);
    for (VAR14 = 0; VAR14 < VAR10; VAR14++)
    {
        VAR11 = FUN2(VAR4, 9);
        VAR12 += VAR11;
        if (VAR12 > 256)
        {
            FUN3(VAR2->VAR17, VAR18, "", VAR12);
            for (VAR15 = 0; VAR15 < VAR11; VAR15++)
            {
                VAR7[VAR16] = FUN2(VAR4, 8);
                VAR8[VAR16] = VAR14 + 1;
                VAR9[VAR16] = VAR13++;
                VAR16++;
                if (VAR13 > (65535 - 256) / 2)
                {
                    VAR13 <<= 1;
                    return FUN4(VAR6, VAR19, VAR16, VAR8, 1, 1, VAR9, 2, 2, VAR7, 1, 1, 0)