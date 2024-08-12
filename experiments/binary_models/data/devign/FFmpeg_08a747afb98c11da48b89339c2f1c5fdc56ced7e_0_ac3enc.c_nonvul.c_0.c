static void FUN1(VAR1 *VAR2)
{
    static const int VAR3[8] = {0, 0, 2, 2, 2, 4, 2, 4};
    int VAR4;
    int VAR5;
    VAR5 = 16;
    if (VAR2->VAR6)
    {
        VAR5 += 35;
        VAR5 += 1 + 1 + 1;
        VAR5 += 2;
        VAR5 += 10;
        if (VAR2->VAR7)
            VAR5 += 5 * VAR2->VAR8;
        else
            VAR5 += VAR9 * 2 * VAR2->VAR8;
        if (VAR2->VAR10)
            VAR5 += VAR9;
        VAR5 += VAR2->VAR8 * 5;
        VAR5 += 10;
        VAR5++;
    }
    else
    {
        VAR5 += 49;
        VAR5 += VAR3[VAR2->VAR11];
    }
    for (VAR4 = 0; VAR4 < VAR9; VAR4++)
    {
        if (!VAR2->VAR6)
        {
            VAR5 += VAR2->VAR8;
            VAR5 += VAR2->VAR8;
        }
        VAR5++;
        if (VAR2->VAR6)
            VAR5++;
        if (!VAR2->VAR6)
        {
            VAR5 += 2 * VAR2->VAR8;
            if (VAR2->VAR10)
                VAR5++;
            VAR5++;
            if (!VAR4)
                VAR5 += 2 + 2 + 2 + 2 + 3;
        }
        if (VAR2->VAR6)
            VAR5++;
        if (!VAR2->VAR6)
        {
            VAR5++;
            VAR5++;
        }
    }
    VAR5++;
    VAR5 += 1 + 16;
    VAR2->VAR12 = VAR5;
}