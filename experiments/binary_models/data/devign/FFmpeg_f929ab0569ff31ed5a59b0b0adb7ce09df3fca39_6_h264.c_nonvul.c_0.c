const VAR1 *FUN1(VAR2 *VAR3, const VAR1 *VAR4, int *VAR5, int *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR1 *VAR11;
    int VAR12;
    VAR3->VAR13 = VAR4[0] >> 5;
    VAR3->VAR14 = VAR4[0] & 0x1F;
    VAR4++;
    VAR7--;
    if (VAR8 + 2 < VAR7 && VAR4[VAR8 + 1] == 0 && VAR4[VAR8 + 2] <= 3)
    {
        if (VAR4[VAR8 + 2] != 3)
        {
            VAR7 = VAR8;
        }
        break;
    }
    if (VAR8 > 0 && !VAR4[VAR8])
        VAR8--;
    while (VAR4[VAR8])
        VAR8++ for (VAR8 = 0; VAR8 + 1 < VAR7; VAR8 += 9)
        {
            if (!((~FUN2(VAR4 + VAR8) & (FUN2(VAR4 + VAR8) - 0x0100010001000101ULL)) & 0x8000800080008080ULL))
                continue;
            VAR15;
            VAR16;
            VAR8 -= 7;
        }
    for (VAR8 = 0; VAR8 + 1 < VAR7; VAR8 += 5)
    {
        if (!((~FUN3(VAR4 + VAR8) & (FUN3(VAR4 + VAR8) - 0x01000101U)) & 0x80008080U))
            continue;
        VAR15;
        VAR16;
        VAR8 -= 3;
    }
    for (VAR8 = 0; VAR8 + 1 < VAR7; VAR8 += 2)
    {
        if (VAR4[VAR8])
            continue;
        if (VAR8 > 0 && VAR4[VAR8 - 1] == 0)
            VAR8--;
        VAR16;
    }
    if (VAR8 >= VAR7 - 1)
    {
        *VAR5 = VAR7;
        *VAR6 = VAR7 + 1;
        return VAR4;
    }
    VAR12 = VAR3->VAR14 == VAR17 ? 1 : 0;
    FUN4(&VAR3->VAR18[VAR12], &VAR3->VAR19[VAR12], VAR7 + VAR20);
    VAR11 = VAR3->VAR18[VAR12];
    if (!VAR11)
        return NULL;
    memcpy(VAR11, VAR4, VAR8);
    VAR9 = VAR10 = VAR8;
    while (VAR9 + 2 < VAR7)
    {
        if (VAR4[VAR9 + 2] > 3)
        {
            VAR11[VAR10++] = VAR4[VAR9++];
            VAR11[VAR10++] = VAR4[VAR9++];
        }
        else if (VAR4[VAR9] == 0 && VAR4[VAR9 + 1] == 0)
        {
            if (VAR4[VAR9 + 2] == 3)
            {
                VAR11[VAR10++] = 0;
                VAR11[VAR10++] = 0;
                VAR9 += 3;
                continue;
            }
            else
                goto VAR21;
        }
        VAR11[VAR10++] = VAR4[VAR9++];
    }
    while (VAR9 < VAR7)
        VAR11[VAR10++] = VAR4[VAR9++];
VAR21:
    memset(VAR11 + VAR10, 0, VAR20);
    *VAR5 = VAR10;
    *VAR6 = VAR9 + 1;
    return VAR11;
}