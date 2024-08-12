static VAR1 FUN1(struct VAR2 *VAR3, VAR4 *VAR5, const VAR4 *VAR6, ssize_t VAR7)
{
    ssize_t VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    struct VAR14 *VAR15;
    VAR4 *VAR16;
    for (VAR9 = 0; VAR9 < VAR3->VAR17; VAR9++)
    {
        VAR3->VAR18[VAR9].VAR19 = 0;
        for (VAR10 = 0; VAR10 < VAR3->VAR18[VAR9].VAR20; VAR10++)
            VAR3->VAR18[VAR9].VAR21[VAR10].VAR19 = 0;
    }
    if (VAR7 < 1)
        return -VAR22;
    if ((*VAR6 & ~VAR23) == VAR24)
    {
        VAR8 = FUN2(&VAR6, &VAR7);
        if (VAR8 < 3 || VAR7 < VAR8)
            return -VAR22;
        VAR7 -= VAR8;
        while (VAR8)
            if (FUN3(VAR3, &VAR6, &VAR8))
                return -VAR22;
    }
    else if (FUN3(VAR3, &VAR6, &VAR8))
        return -VAR22;
    if (VAR7 < 3)
        return -VAR22;
    VAR13 = (VAR6[0] << 8) | VAR6[1];
    VAR6 += 2;
    VAR7 -= 2;
    if (VAR13 < 0x0007)
        return -VAR22;
    if ((*VAR6 & ~VAR23) == VAR24)
    {
        VAR8 = FUN2(&VAR6, &VAR7);
        if (VAR8 < 3 || VAR7 < VAR8)
            return -VAR22;
        VAR7 -= VAR8;
        while (VAR8)
            if (FUN4(VAR3, &VAR6, &VAR8))
                return -VAR22;
    }
    else if (FUN4(VAR3, &VAR6, &VAR8))
        return -VAR22;
    if (VAR7 < 1)
        return -VAR22;
    if (*VAR6)
    {
        if (VAR7 <= sizeof(int))
            return -VAR22;
        VAR7 -= sizeof(int);
        memcpy(&VAR11, VAR6 + 1, sizeof(int));
    }
    else
        VAR11 = 0;
    if (VAR7 > 1)
        return -VAR22;
    VAR16 = VAR5 + 2;
    VAR13 = FUN5(VAR13, VAR25);
    VAR7 = 3 - VAR11;
    VAR12 = 0;
    for (VAR9 = 0; VAR9 < VAR3->VAR17; VAR9++)
        if ((VAR15 = &VAR3->VAR18[VAR9])->VAR19)
        {
            VAR7 += 3;
            VAR8 = VAR7;
            for (VAR10 = 0; VAR10 < VAR15->VAR20; VAR10++)
                if (VAR15->VAR21[VAR10].VAR19)
                {
                    if (VAR7 >= 0)
                        if (VAR7 + VAR15->VAR21[VAR10].VAR7 < VAR13)
                        {
                            memcpy(VAR16 + VAR7, VAR15->VAR21[VAR10].VAR26, VAR15->VAR21[VAR10].VAR7);
                            VAR12 = VAR7 + VAR15->VAR21[VAR10].VAR7;
                        }
                    VAR7 += VAR15->VAR21[VAR10].VAR7;
                }
            if (VAR8 == VAR7)
                VAR7 -= 3;
            else if (VAR8 >= 3 && VAR8 < VAR13)
            {
                VAR16[VAR8 - 3] = VAR24 | VAR27;
                VAR16[VAR8 - 2] = (VAR7 - VAR8) >> 8;
                VAR16[VAR8 - 1] = (VAR7 - VAR8) & 0xff;
            }
        }
    if (VAR7 == 3 - VAR11)
        VAR7 -= 3;
    else if (0 >= VAR11)
    {
        VAR16[0] = VAR24 | VAR27;
        VAR16[1] = (VAR7 + VAR11 - 3) >> 8;
        VAR16[2] = (VAR7 + VAR11 - 3) & 0xff;
    }
    VAR5[0] = VAR12 >> 8;
    VAR5[1] = VAR12 & 0xff;
    if (VAR12 < VAR7)
    {
        VAR7 = VAR12 + VAR11;
        VAR16[VAR12++] = sizeof(int);
        memcpy(VAR16 + VAR12, &VAR7, sizeof(int));
        VAR12 += sizeof(int);
    }
    else
        VAR16[VAR12++] = 0;
    return VAR12 + 2;
}