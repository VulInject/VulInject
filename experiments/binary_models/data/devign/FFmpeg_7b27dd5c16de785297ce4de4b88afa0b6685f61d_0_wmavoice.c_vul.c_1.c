static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    int VAR12, VAR13, VAR14;
    for (VAR12 = VAR6->VAR12; VAR12 > VAR2->VAR15; VAR12 -= VAR2->VAR15)
        ;
    FUN2(&VAR8->VAR11, VAR6->VAR3, VAR12 << 3);
    if (!(VAR12 % VAR2->VAR15))
    {
        if (!VAR12)
        {
            VAR8->VAR16 = 0;
            VAR8->VAR17 = 0;
        }
        else
        {
            if ((VAR13 = FUN3(VAR8)) < 0)
                return VAR13;
            VAR8->VAR17 = VAR13;
        }
        if (VAR8->VAR18 > 0)
        {
            int VAR19 = FUN4(VAR11);
            FUN5(&VAR8->VAR20, VAR6->VAR3, VAR12, VAR11, VAR8->VAR16);
            FUN6(&VAR8->VAR20);
            VAR8->VAR18 += VAR8->VAR16;
            if ((VAR13 = FUN7(VAR2, VAR3, VAR4)) == 0 && *VAR4)
            {
                VAR19 += VAR8->VAR16;
                VAR8->VAR21 = VAR19 & 7;
                VAR13 = VAR19 >> 3;
                if (VAR13 > VAR6->VAR12)
                {
                    FUN8(VAR2, VAR22, "", VAR13, VAR6->VAR12);
                    return VAR23;
                }
                return VAR13;
            }
            else
                FUN9(VAR11, VAR8->VAR16 - VAR19 + FUN4(VAR11));
        }
        else if (VAR8->VAR16)
        {
            FUN9(VAR11, VAR8->VAR16);
        }
    }
    else if (VAR8->VAR21)
        FUN10(VAR11, VAR8->VAR21);
    VAR8->VAR18 = 0;
    VAR8->VAR21 = 0;
    VAR14 = FUN11(VAR11);
    if (VAR8->VAR17-- == 0)
    {
        *VAR4 = 0;
        return VAR12;
    }
    else if (VAR8->VAR17 > 0)
    {
        if ((VAR13 = FUN7(VAR2, VAR3, VAR4)) < 0)
        {
            return VAR13;
        }
        else if (*VAR4)
        {
            int VAR19 = FUN4(VAR11);
            VAR8->VAR21 = VAR19 & 7;
            VAR13 = VAR19 >> 3;
            if (VAR13 > VAR6->VAR12)
            {
                FUN8(VAR2, VAR22, "", VAR13, VAR6->VAR12);
                return VAR23;
            }
            return VAR13;
        }
    }
    else if ((VAR8->VAR18 = VAR14) > 0)
    {
        FUN12(&VAR8->VAR20, VAR8->VAR24, VAR25);
        FUN5(&VAR8->VAR20, VAR6->VAR3, VAR12, VAR11, VAR8->VAR18);
    }
    return VAR12;
}