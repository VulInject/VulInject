static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, uint8_t VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12[256];
    int VAR13, VAR14;
    VAR11 = VAR3 + (VAR3 == VAR15);
    for (VAR10 = 0, VAR8 = 0; VAR10 < VAR4; VAR10++)
    {
        VAR13 = FUN2(VAR2, 7);
        VAR12[VAR8++] = VAR16[VAR13][0];
        VAR12[VAR8++] = VAR16[VAR13][1];
        VAR12[VAR8++] = VAR16[VAR13][2];
    }
    VAR14 = VAR5;
    for (VAR8 = 0, VAR9 = 0; VAR8 < VAR4 * 3; VAR8++)
    {
        VAR14 += VAR12[VAR8] - 2;
        if (VAR14 > 24U)
            return -1;
        switch (VAR11)
        {
        case 4:
            VAR7[VAR9++] = VAR14;
            VAR7[VAR9++] = VAR14;
        case 2:
            VAR7[VAR9++] = VAR14;
        case 1:
            VAR7[VAR9++] = VAR14;
        }
    }
    return 0;
}