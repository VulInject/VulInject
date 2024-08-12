static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, VAR3 *VAR7, int VAR8, int VAR9)
{
    int VAR10;
    switch (VAR5)
    {
    case VAR11:
        memcpy(VAR4, VAR6, VAR8);
        break;
    case VAR12:
        VAR2->FUN2(VAR4, VAR6, VAR6 - VAR9, VAR8);
        memcpy(VAR4, VAR6, VAR9);
        break;
    case VAR13:
        VAR2->FUN2(VAR4, VAR6, VAR7, VAR8);
        break;
    case VAR14:
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
            VAR4[VAR10] = VAR6[VAR10] - (VAR7[VAR10] >> 1);
        for (; VAR10 < VAR8; VAR10++)
            VAR4[VAR10] = VAR6[VAR10] - ((VAR6[VAR10 - VAR9] + VAR7[VAR10]) >> 1);
        break;
    case VAR15:
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
            VAR4[VAR10] = VAR6[VAR10] - VAR7[VAR10];
        FUN3(VAR4 + VAR10, VAR6 + VAR10, VAR7 + VAR10, VAR8 - VAR10, VAR9);
        break;
    }
}