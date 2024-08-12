static void FUN1(float *VAR1, float *VAR2, int *VAR3, int *VAR4)
{
    int VAR5, VAR6, VAR7;
    float VAR8, VAR9, VAR10, VAR11;
    for (VAR5 = 0, VAR7 = 0; VAR7 < 4 * 256; VAR7 += 256, VAR5++)
    {
        int VAR12 = VAR3[VAR5];
        int VAR13 = VAR4[VAR5];
        VAR6 = VAR7;
        if (VAR12 != VAR13)
        {
            VAR8 = VAR14[VAR12 * 2];
            VAR9 = VAR14[VAR12 * 2 + 1];
            VAR10 = VAR14[VAR13 * 2];
            VAR11 = VAR14[VAR13 * 2 + 1];
            for (; VAR6 < VAR7 + 8; VAR6++)
            {
                float VAR15 = VAR1[VAR6];
                float VAR16 = VAR2[VAR6];
                VAR16 = VAR15 * FUN2(VAR8, VAR10, VAR6 - VAR7) + VAR16 * FUN2(VAR9, VAR11, VAR6 - VAR7);
                VAR1[VAR6] = VAR16;
                VAR2[VAR6] = VAR15 * 2.0 - VAR16;
            }
        }
        switch (VAR13)
        {
        case 0:
            for (; VAR6 < VAR7 + 256; VAR6++)
            {
                float VAR15 = VAR1[VAR6];
                float VAR16 = VAR2[VAR6];
                VAR1[VAR6] = VAR16 * 2.0;
                VAR2[VAR6] = (VAR15 - VAR16) * 2.0;
            }
            break;
        case 1:
            for (; VAR6 < VAR7 + 256; VAR6++)
            {
                float VAR15 = VAR1[VAR6];
                float VAR16 = VAR2[VAR6];
                VAR1[VAR6] = (VAR15 + VAR16) * 2.0;
                VAR2[VAR6] = VAR16 * -2.0;
            }
            break;
        case 2:
        case 3:
            for (; VAR6 < VAR7 + 256; VAR6++)
            {
                float VAR15 = VAR1[VAR6];
                float VAR16 = VAR2[VAR6];
                VAR1[VAR6] = VAR15 + VAR16;
                VAR2[VAR6] = VAR15 - VAR16;
            }
            break;
        default:
            assert(0);
        }
    }
}