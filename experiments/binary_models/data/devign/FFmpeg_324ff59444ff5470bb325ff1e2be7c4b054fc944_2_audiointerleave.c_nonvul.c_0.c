int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int (*VAR7)(VAR1 *, VAR3 *, VAR3 *, int), int (*VAR8)(VAR1 *, VAR3 *, VAR3 *))
{
    int VAR9, VAR10;
    if (VAR5)
    {
        VAR11 *VAR12 = VAR2->VAR13[VAR5->VAR14];
        VAR15 *VAR16 = VAR12->VAR17;
        if (VAR12->VAR18->VAR19 == VAR20)
        {
            unsigned VAR21 = FUN2(VAR16->VAR22) + VAR5->VAR23;
            if (VAR21 > VAR16->VAR24)
            {
                if (FUN3(VAR16->VAR22, VAR21) < 0)
                    return -1;
                VAR16->VAR24 = VAR21;
            }
            FUN4(VAR16->VAR22, VAR5->VAR25, VAR5->VAR23, NULL);
        }
        else
        {
            VAR5->VAR26 = VAR5->VAR27 = VAR16->VAR27;
            VAR16->VAR27 += VAR5->VAR28;
            if ((VAR10 = FUN5(VAR2, VAR5, VAR8)) < 0)
                return VAR10;
        }
        VAR5 = NULL;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR29; VAR9++)
    {
        VAR11 *VAR12 = VAR2->VAR13[VAR9];
        if (VAR12->VAR18->VAR19 == VAR20)
        {
            AVPacket VAR30;
            while (FUN6(VAR2, &VAR30, VAR9, VAR6))
                if ((VAR10 = FUN5(VAR2, &VAR30, VAR8)) < 0)
                    return VAR10;
        }
    }
    return FUN7(VAR2, VAR4, NULL, VAR6);
}