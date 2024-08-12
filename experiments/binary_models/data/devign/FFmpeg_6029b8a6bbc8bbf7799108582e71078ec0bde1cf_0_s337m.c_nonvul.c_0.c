static int FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = 0;
    int VAR4[3] = {0};
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13;
    for (VAR6 = 0; VAR6 < VAR2->VAR14; VAR6++)
    {
        VAR3 = (VAR3 << 8) | VAR2->VAR13[VAR6];
        if (!FUN2(VAR3))
            continue;
        VAR13 = VAR2->VAR13 + VAR6 + 1;
        if (FUN3(VAR3))
        {
            VAR9 = FUN4(VAR13);
            VAR10 = FUN4(VAR13 + 2);
        }
        else
        {
            VAR9 = FUN5(VAR13);
            VAR10 = FUN5(VAR13 + 3);
        }
        if (FUN6(NULL, VAR3, VAR9, VAR10, &VAR11, NULL))
            continue;
        VAR5 = FUN3(VAR3) ? 0 : FUN7(VAR3) ? 1
                                                              : 2;
        VAR4[VAR5]++;
        VAR6 += FUN3(VAR3) ? 4 : 6;
        VAR6 += VAR11;
        VAR3 = 0;
    }
    VAR7 = VAR8 = 0;
    for (VAR5 = 0; VAR5 < FUN8(VAR4); VAR5++)
    {
        VAR7 += VAR4[VAR5];
        if (VAR4[VAR8] < VAR4[VAR5])
            VAR8 = VAR5;
    }
    if (VAR4[VAR8] > 3 && VAR4[VAR8] * 4 > VAR7 * 3)
        return VAR15 + 1;
    return 0;
}