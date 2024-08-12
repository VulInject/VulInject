int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int (*VAR7)(VAR1 *, VAR3 *, VAR3 *, int), int (*VAR8)(VAR1 *, VAR3 *, VAR3 *))
{
    int VAR9;
    if (VAR5)
    {
        VAR10 *VAR11 = VAR2->VAR12[VAR5->VAR13];
        VAR14 *VAR15 = VAR11->VAR16;
        if (VAR11->VAR17->VAR18 == VAR19)
        {
            unsigned VAR20 = FUN2(VAR15->VAR21) + VAR5->VAR22;
            if (VAR20 > VAR15->VAR23)
            {
                if (FUN3(VAR15->VAR21, VAR20) < 0)
                    return -1;
                VAR15->VAR23 = VAR20;
            }
            FUN4(VAR15->VAR21, VAR5->VAR24, VAR5->VAR22, NULL);
        }
        else
        {
            VAR5->VAR25 = VAR5->VAR26 = VAR15->VAR26;
            VAR15->VAR26 += VAR5->VAR27;
            FUN5(VAR2, VAR5, VAR8);
        }
        VAR5 = NULL;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR28; VAR9++)
    {
        VAR10 *VAR11 = VAR2->VAR12[VAR9];
        if (VAR11->VAR17->VAR18 == VAR19)
        {
            AVPacket VAR29;
            while (FUN6(VAR2, &VAR29, VAR9, VAR6))
                FUN5(VAR2, &VAR29, VAR8);
        }
    }
    return FUN7(VAR2, VAR4, VAR5, VAR6);
}