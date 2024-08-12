static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12 = 0;
    if (!VAR8->VAR13)
    {
        if (!(VAR8->VAR13 = FUN2()))
            return FUN3(VAR14);
        if (!FUN4(VAR8->VAR13, VAR15, VAR16, VAR8))
        {
            FUN5(VAR8->VAR13);
            VAR8->VAR13 = NULL;
            return FUN3(VAR14);
        }
    }
    if (VAR2->VAR17.VAR18 && VAR6->VAR19 != VAR20)
        VAR8->VAR19 = FUN6(VAR6->VAR19, VAR2->VAR17, VAR21);
    if (VAR6->VAR22)
    {
        int VAR23;
        const int VAR24 = VAR6->VAR22 + 45;
        if (VAR24 < 184 || VAR24 > 65504 || VAR24 % 184 != 0)
            return VAR25;
        VAR8->VAR26 = VAR6->VAR22;
        if (FUN7(*VAR6->VAR3))
        {
            if ((VAR23 = FUN8(VAR8, VAR6->VAR3 + 1, VAR6->VAR22 - 1)) < 0)
                return VAR23;
            FUN9(VAR2, "", VAR8, VAR6->VAR22, VAR23, (double)VAR6->VAR19 / 90000.0);
            if (VAR23 > 0)
            {
                int VAR27;
                FUN10(VAR2, VAR28, "");
                for (VAR27 = 0; VAR27 < VAR23; VAR27++)
                    FUN10(VAR2, VAR28, "", VAR8->VAR29[VAR27].VAR30);
                FUN10(VAR2, VAR28, "");
                FUN11(VAR8->VAR13, VAR8->VAR29, VAR23, 0.0);
                VAR8->VAR31 += VAR23;
            }
        }
        VAR8->VAR19 = VAR20;
        VAR12 = VAR8->VAR26;
    }
    if (VAR12 < 0)
        return VAR12;
    if (VAR8->VAR32)
    {
        int VAR27;
        VAR11->VAR33 = VAR8->VAR34;
        VAR11->VAR35 = 0;
        VAR11->VAR36 = VAR8->VAR37;
        VAR11->VAR38 = 0;
        VAR11->VAR19 = VAR8->VAR39->VAR19;
        if (VAR8->VAR39->VAR40->VAR41 != VAR42)
        {
            VAR11->VAR43 = FUN12(sizeof(*VAR11->VAR43));
            if (VAR11->VAR43)
            {
                VAR11->VAR38 = 1;
                VAR11->VAR43[0] = VAR8->VAR39->VAR40;
            }
            else
            {
                VAR12 = FUN3(VAR14);
            }
        }
        else
        {
            FUN10(VAR2, VAR28, "");
            VAR11->VAR43 = NULL;
        }
        if (!VAR11->VAR43)
            FUN13(&VAR8->VAR39->VAR40);
        for (VAR27 = 0; VAR27 < VAR8->VAR32 - 1; VAR27++)
            VAR8->VAR39[VAR27] = VAR8->VAR39[VAR27 + 1];
        VAR8->VAR32--;
        if (VAR12 >= 0)
            *VAR4 = 1;
    }
    else
        *VAR4 = 0;
    return VAR12;
}