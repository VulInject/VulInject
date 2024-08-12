static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10, *VAR11, *VAR12;
    int VAR13, VAR14, VAR15;
    VAR13 = FUN2(VAR6, VAR7, VAR8);
    VAR10 = malloc(VAR13);
    if (!VAR10)
        return;
    switch (VAR6)
    {
    case VAR16:
        VAR12 = VAR10;
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            if (VAR15 == 1)
            {
                VAR7 >>= 1;
                VAR8 >>= 1;
            }
            VAR11 = VAR5->VAR17[VAR15];
            for (VAR14 = 0; VAR14 < VAR8; VAR14++)
            {
                memcpy(VAR12, VAR11, VAR7);
                VAR12 += VAR7;
                VAR11 += VAR5->VAR18[VAR15];
            }
        }
        break;
    case VAR19:
        VAR13 = (VAR7 * VAR8) * 2;
        VAR10 = malloc(VAR13);
        VAR12 = VAR10;
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            if (VAR15 == 1)
            {
                VAR7 >>= 1;
            }
            VAR11 = VAR5->VAR17[VAR15];
            for (VAR14 = 0; VAR14 < VAR8; VAR14++)
            {
                memcpy(VAR12, VAR11, VAR7);
                VAR12 += VAR7;
                VAR11 += VAR5->VAR18[VAR15];
            }
        }
        break;
    case VAR20:
        VAR13 = (VAR7 * VAR8) * 3;
        VAR10 = malloc(VAR13);
        VAR12 = VAR10;
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            VAR11 = VAR5->VAR17[VAR15];
            for (VAR14 = 0; VAR14 < VAR8; VAR14++)
            {
                memcpy(VAR12, VAR11, VAR7);
                VAR12 += VAR7;
                VAR11 += VAR5->VAR18[VAR15];
            }
        }
        break;
    case VAR21:
        VAR13 = (VAR7 * VAR8) * 2;
        VAR10 = malloc(VAR13);
        VAR12 = VAR10;
        VAR11 = VAR5->VAR17[0];
        for (VAR14 = 0; VAR14 < VAR8; VAR14++)
        {
            memcpy(VAR12, VAR11, VAR7 * 2);
            VAR12 += VAR7 * 2;
            VAR11 += VAR5->VAR18[0];
        }
        break;
    case VAR22:
    case VAR23:
        VAR13 = (VAR7 * VAR8) * 3;
        VAR10 = malloc(VAR13);
        VAR12 = VAR10;
        VAR11 = VAR5->VAR17[0];
        for (VAR14 = 0; VAR14 < VAR8; VAR14++)
        {
            memcpy(VAR12, VAR11, VAR7 * 3);
            VAR12 += VAR7 * 3;
            VAR11 += VAR5->VAR18[0];
        }
        break;
    default:
        return;
    }
    VAR2->VAR24->FUN3(VAR2, VAR3, VAR10, VAR13);
    free(VAR10);
}