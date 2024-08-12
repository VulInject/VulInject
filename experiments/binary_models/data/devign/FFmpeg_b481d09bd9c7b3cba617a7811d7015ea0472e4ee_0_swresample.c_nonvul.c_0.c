int FUN1(struct VAR1 *VAR2, VAR3 *VAR4[VAR5], int VAR6, const VAR3 *VAR7[VAR5], int VAR8)
{
    VAR9 *VAR10 = &VAR2->VAR10;
    VAR9 *VAR11 = &VAR2->VAR11;
    while (VAR2->VAR12 > 0)
    {
        int VAR13;
        VAR3 *VAR14[VAR5];
        if ((VAR13 = FUN2(&VAR2->VAR15, FUN3(VAR2->VAR12, VAR16))) < 0)
            return VAR13;
        FUN4(&VAR2->VAR15, VAR14);
        VAR2->VAR12 *= -1;
        VAR13 = FUN1(VAR2, VAR14, FUN3(-VAR2->VAR12, VAR16), VAR7, VAR8);
        VAR2->VAR12 *= -1;
        VAR8 = 0;
        if (VAR13 > 0)
        {
            VAR2->VAR12 -= VAR13;
            continue;
        }
        if (VAR2->VAR12 || !VAR4)
            return 0;
    }
    if (!VAR7)
    {
        if (VAR2->VAR17)
        {
            if (!VAR2->VAR18)
                VAR2->VAR19->FUN5(VAR2);
            VAR2->VAR20 = 0;
            VAR2->VAR18 = 1;
        }
        else if (!VAR2->VAR21)
        {
            return 0;
        }
    }
    else
        FUN6(VAR10, (void *)VAR7);
    FUN6(VAR11, VAR4);
    if (VAR2->VAR17)
    {
        int VAR13 = FUN7(VAR2, VAR11, VAR6, VAR10, VAR8);
        if (VAR13 > 0 && !VAR2->VAR12)
            VAR2->VAR22 += VAR13 * (VAR23)VAR2->VAR24;
        return VAR13;
    }
    else
    {
        AudioData VAR25 = *VAR10;
        int VAR26 = 0;
        int VAR13, VAR27;
        VAR27 = FUN3(VAR6, VAR2->VAR21);
        if (VAR27)
        {
            FUN8(&VAR25, &VAR2->VAR28, VAR2->VAR29);
            VAR13 = FUN7(VAR2, VAR11, VAR27, &VAR25, VAR27);
            if (VAR13 < 0)
                return VAR13;
            VAR26 = VAR13;
            VAR2->VAR21 -= VAR13;
            VAR2->VAR29 += VAR13;
            FUN8(VAR11, VAR11, VAR13);
            VAR6 -= VAR13;
            if (!VAR2->VAR21)
                VAR2->VAR29 = 0;
        }
        if (VAR8)
        {
            VAR27 = VAR2->VAR29 + VAR2->VAR21 + VAR8 - VAR6;
            if (VAR8 > VAR6)
            {
                if (VAR27 > VAR2->VAR28.VAR30 && VAR2->VAR21 + VAR8 - VAR6 <= VAR2->VAR29)
                {
                    FUN8(&VAR25, &VAR2->VAR28, VAR2->VAR29);
                    copy(&VAR2->VAR28, &VAR25, VAR2->VAR21);
                    VAR2->VAR29 = 0;
                }
                else if ((VAR13 = FUN2(&VAR2->VAR28, VAR27)) < 0)
                    return VAR13;
            }
            if (VAR6)
            {
                VAR27 = FUN3(VAR8, VAR6);
                VAR13 = FUN7(VAR2, VAR11, VAR27, VAR10, VAR27);
                if (VAR13 < 0)
                    return VAR13;
                FUN8(VAR10, VAR10, VAR13);
                VAR8 -= VAR13;
                VAR26 += VAR13;
            }
            if (VAR8)
            {
                FUN8(&VAR25, &VAR2->VAR28, VAR2->VAR29 + VAR2->VAR21);
                copy(&VAR25, VAR10, VAR8);
                VAR2->VAR21 += VAR8;
            }
        }
        if (VAR26 > 0 && !VAR2->VAR12)
            VAR2->VAR22 += VAR26 * (VAR23)VAR2->VAR24;
        return VAR26;
    }
}