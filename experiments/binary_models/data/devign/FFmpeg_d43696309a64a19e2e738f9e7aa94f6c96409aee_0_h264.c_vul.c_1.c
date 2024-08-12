static const VAR1 *FUN1(VAR2 *VAR3, const VAR1 *VAR4, int *VAR5, int *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR1 *VAR11;
    int VAR12;
    VAR3->VAR13 = VAR4[0] >> 5;
    VAR3->VAR14 = VAR4[0] & 0x1F;
    VAR4++;
    VAR7--;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
        FUN2("", VAR4[VAR8]);
    for (VAR8 = 0; VAR8 + 1 < VAR7; VAR8 += 2)
    {
        if (VAR4[VAR8])
            continue;
        if (VAR8 > 0 && VAR4[VAR8 - 1] == 0)
            VAR8--;
        if (VAR8 + 2 < VAR7 && VAR4[VAR8 + 1] == 0 && VAR4[VAR8 + 2] <= 3)
        {
            if (VAR4[VAR8 + 2] != 3)
            {
                VAR7 = VAR8;
            }
            break;
        }
    }
    if (VAR8 >= VAR7 - 1)
    {
        *VAR5 = VAR7;
        *VAR6 = VAR7 + 1;
        return VAR4;
    }
    VAR12 = VAR3->VAR14 == VAR15 ? 1 : 0;
    VAR3->VAR16[VAR12] = FUN3(VAR3->VAR16[VAR12], &VAR3->VAR17[VAR12], VAR7);
    VAR11 = VAR3->VAR16[VAR12];
    if (VAR11 == NULL)
    {
        return NULL;
    }
    VAR9 = VAR10 = 0;
    while (VAR9 < VAR7)
    {
        if (VAR9 + 2 < VAR7 && VAR4[VAR9] == 0 && VAR4[VAR9 + 1] == 0 && VAR4[VAR9 + 2] <= 3)
        {
            if (VAR4[VAR9 + 2] == 3)
            {
                VAR11[VAR10++] = 0;
                VAR11[VAR10++] = 0;
                VAR9 += 3;
                continue;
            }
            else
                break;
        }
        VAR11[VAR10++] = VAR4[VAR9++];
    }
    *VAR5 = VAR10;
    *VAR6 = VAR9 + 1;
    return VAR11;
}