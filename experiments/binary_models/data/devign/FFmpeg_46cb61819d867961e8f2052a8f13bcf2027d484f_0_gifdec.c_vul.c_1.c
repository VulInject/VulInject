static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12;
    FUN2(&VAR8->VAR13, VAR6->VAR3, VAR6->VAR14);
    VAR8->VAR11.VAR15 = VAR6->VAR15;
    VAR8->VAR11.VAR16 = VAR6->VAR15;
    VAR8->VAR11.VAR17 = VAR6->VAR18;
    VAR8->VAR11.VAR19 = VAR6->VAR20;
    if (VAR6->VAR14 >= 6)
    {
        VAR8->VAR21 = memcmp(VAR6->VAR3, VAR22, 6) == 0 || memcmp(VAR6->VAR3, VAR23, 6) == 0;
    }
    else
    {
        VAR8->VAR21 = 0;
        if (VAR8->VAR21)
        {
            VAR8->VAR24 = 0;
            if ((VAR12 = FUN3(VAR8)) < 0)
                return VAR12;
            if ((VAR12 = FUN4(VAR8->VAR25, VAR8->VAR26, 0, VAR2)) < 0)
                return VAR12;
            FUN5(VAR2, VAR8->VAR25, VAR8->VAR26);
            if (VAR8->VAR11.VAR3[0])
                VAR2->FUN6(VAR2, &VAR8->VAR11);
            if ((VAR12 = FUN7(VAR2, &VAR8->VAR11)) < 0)
            {
                FUN8(VAR2, VAR27, "");
                return VAR12;
                VAR8->VAR11.VAR28 = VAR29;
                VAR8->VAR11.VAR30 = 1;
            }
            else
            {
                if ((VAR12 = VAR2->FUN9(VAR2, &VAR8->VAR11)) < 0)
                {
                    FUN8(VAR2, VAR27, "");
                    return VAR12;
                    VAR8->VAR11.VAR28 = VAR31;
                    VAR8->VAR11.VAR30 = 0;
                    VAR12 = FUN10(VAR8, VAR4);
                    if (VAR12 < 0)
                        return VAR12;
                    else if (*VAR4)
                        *VAR11 = VAR8->VAR11;
                    return VAR6->VAR14