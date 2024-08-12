static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    heap_elem_t VAR6[VAR5];
    int VAR7[2 * VAR5];
    int VAR8[2 * VAR5];
    int VAR9, VAR10, VAR11;
    for (VAR9 = 1;; VAR9 <<= 1)
    {
        for (VAR10 = 0; VAR10 < VAR5; VAR10++)
        {
            VAR6[VAR10].VAR12 = VAR10;
            VAR6[VAR10].VAR13 = (VAR4[VAR10] << 8) + VAR9;
        }
        for (VAR10 = VAR5 / 2 - 1; VAR10 >= 0; VAR10--)
            FUN2(VAR6, VAR10, VAR5);
        for (VAR11 = VAR5; VAR11 < VAR5 * 2 - 1; VAR11++)
        {
            uint64_t VAR14 = VAR6[0].VAR13;
            VAR7[VAR6[0].VAR12] = VAR11;
            VAR6[0].VAR13 = VAR15;
            FUN2(VAR6, 0, VAR5);
            VAR7[VAR6[0].VAR12] = VAR11;
            VAR6[0].VAR12 = VAR11;
            VAR6[0].VAR13 += VAR14;
            FUN2(VAR6, 0, VAR5);
        }
        VAR8[2 * VAR5 - 2] = 0;
        for (VAR10 = 2 * VAR5 - 3; VAR10 >= VAR5; VAR10--)
            VAR8[VAR10] = VAR8[VAR7[VAR10]] + 1;
        for (VAR10 = 0; VAR10 < VAR5; VAR10++)
        {
            VAR2[VAR10] = VAR8[VAR7[VAR10]] + 1;
            if (VAR2[VAR10] >= 32)
                break;
        }
        if (VAR10 == VAR5)
            break;
    }
}