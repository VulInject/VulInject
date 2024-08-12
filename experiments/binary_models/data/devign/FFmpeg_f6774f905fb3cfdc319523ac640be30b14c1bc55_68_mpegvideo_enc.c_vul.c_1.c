static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4 != VAR5 && VAR2->VAR6 && VAR2->VAR6 != VAR2->VAR7 && VAR2->VAR6->VAR8.VAR9[0])
    {
        FUN2(VAR2, VAR2->VAR6);
    }
    VAR2->VAR10->VAR8.VAR4 = VAR2->VAR4;
    VAR2->VAR10->VAR8.VAR11 = VAR2->VAR4 == VAR12;
    FUN2(VAR2, &VAR2->VAR13);
    if ((VAR3 = FUN3(VAR2, &VAR2->VAR13, VAR2->VAR10)) < 0)
        return VAR3;
    if (VAR2->VAR4 != VAR5)
    {
        VAR2->VAR6 = VAR2->VAR7;
        if (!VAR2->VAR14)
            VAR2->VAR7 = VAR2->VAR10;
    }
    if (VAR2->VAR6)
    {
        FUN2(VAR2, &VAR2->VAR15);
        if (VAR2->VAR6->VAR8.VAR9[0] && (VAR3 = FUN3(VAR2, &VAR2->VAR15, VAR2->VAR6)) < 0)
            return VAR3;
    }
    if (VAR2->VAR7)
    {
        FUN2(VAR2, &VAR2->VAR16);
        if (VAR2->VAR7->VAR8.VAR9[0] && (VAR3 = FUN3(VAR2, &VAR2->VAR16, VAR2->VAR7)) < 0)
            return VAR3;
    }
    if (VAR2->VAR17 != VAR18)
    {
        int VAR19;
        for (VAR19 = 0; VAR19 < 4; VAR19++)
        {
            if (VAR2->VAR17 == VAR20)
            {
                VAR2->VAR13.VAR8.VAR21[VAR19] += VAR2->VAR13.VAR8.VAR22[VAR19];
            }
            VAR2->VAR13.VAR8.VAR22[VAR19] *= 2;
            VAR2->VAR15.VAR8.VAR22[VAR19] *= 2;
            VAR2->VAR16.VAR8.VAR22[VAR19] *= 2;
        }
    }
    if (VAR2->VAR23 || VAR2->VAR24 == VAR25)
    {
        VAR2->VAR26 = VAR2->VAR27;
        VAR2->VAR28 = VAR2->VAR29;
    }
    else if (VAR2->VAR30 == VAR31 || VAR2->VAR30 == VAR32)
    {
        VAR2->VAR26 = VAR2->VAR33;
        VAR2->VAR28 = VAR2->VAR34;
    }
    else
    {
        VAR2->VAR26 = VAR2->VAR35;
        VAR2->VAR28 = VAR2->VAR36;
    }
    if (VAR2->VAR37)
    {
        assert(VAR2->VAR38->VAR39 && VAR2->VAR40);
        FUN4(VAR2);
    }
    return 0;
}