int FUN1(const VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9;
    VAR1 *VAR10;
    int64_t VAR11 = VAR6 ? VAR12 : VAR13;
    VAR5->VAR14 = 0;
    if (VAR7 + 2 < VAR3 && VAR2[VAR7 + 1] == 0 && VAR2[VAR7 + 2] <= 3)
    {
        if (VAR2[VAR7 + 2] != 3 && VAR2[VAR7 + 2] != 0)
        {
            VAR3 = VAR7;
        }
        break;
    }
    if (VAR7 > 0 && !VAR2[VAR7])
        VAR7--;
    while (VAR2[VAR7])
        VAR7++ for (VAR7 = 0; VAR7 + 1 < VAR3; VAR7 += 9)
        {
            if (!((~FUN2(VAR2 + VAR7) & (FUN2(VAR2 + VAR7) - 0x0100010001000101ULL)) & 0x8000800080008080ULL))
                continue;
            VAR15;
            VAR16;
            VAR7 -= 7;
        }
    for (VAR7 = 0; VAR7 + 1 < VAR3; VAR7 += 5)
    {
        if (!((~FUN3(VAR2 + VAR7) & (FUN3(VAR2 + VAR7) - 0x01000101U)) & 0x80008080U))
            continue;
        VAR15;
        VAR16;
        VAR7 -= 3;
    }
    for (VAR7 = 0; VAR7 + 1 < VAR3; VAR7 += 2)
    {
        if (VAR2[VAR7])
            continue;
        if (VAR7 > 0 && VAR2[VAR7 - 1] == 0)
            VAR7--;
        VAR16;
    }
    if (VAR7 >= VAR3 - 1 && VAR6)
    {
        VAR5->VAR17 = VAR5->VAR18 = VAR2;
        VAR5->VAR19 = VAR5->VAR20 = VAR3;
        return VAR3;
    }
    FUN4(&VAR5->VAR21, &VAR5->VAR22, VAR3 + VAR11);
    if (!VAR5->VAR21)
        return FUN5(VAR23);
    VAR10 = VAR5->VAR21;
    memcpy(VAR10, VAR2, VAR7);
    VAR8 = VAR9 = VAR7;
    while (VAR8 + 2 < VAR3)
    {
        if (VAR2[VAR8 + 2] > 3)
        {
            VAR10[VAR9++] = VAR2[VAR8++];
            VAR10[VAR9++] = VAR2[VAR8++];
        }
        else if (VAR2[VAR8] == 0 && VAR2[VAR8 + 1] == 0 && VAR2[VAR8 + 2] != 0)
        {
            if (VAR2[VAR8 + 2] == 3)
            {
                VAR10[VAR9++] = 0;
                VAR10[VAR9++] = 0;
                VAR8 += 3;
                if (VAR5->VAR24)
                {
                    VAR5->VAR14++;
                    if (VAR5->VAR25 < VAR5->VAR14)
                    {
                        VAR5->VAR25 *= 2;
                        FUN6(VAR5->VAR25 >= VAR5->VAR14);
                        FUN7(&VAR5->VAR24, VAR5->VAR25, sizeof(*VAR5->VAR24));
                        if (!VAR5->VAR24)
                        {
                            VAR5->VAR25 = 0;
                            return FUN5(VAR23);
                        }
                    }
                    if (VAR5->VAR24)
                        VAR5->VAR24[VAR5->VAR14 - 1] = VAR9 - 1;
                }
                continue;
            }
            else
                goto VAR26;
        }
        VAR10[VAR9++] = VAR2[VAR8++];
    }
    while (VAR8 < VAR3)
        VAR10[VAR9++] = VAR2[VAR8++];
VAR26:
    memset(VAR10 + VAR9, 0, VAR12);
    VAR5->VAR17 = VAR10;
    VAR5->VAR19 = VAR9;
    VAR5->VAR18 = VAR2;
    VAR5->VAR20 = VAR8;
    return VAR8;
}