static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4;
    int VAR5, VAR6, VAR7;
    int64_t VAR8, VAR9;
    VAR10 *VAR11 = &VAR2->VAR11;
    VAR4 = VAR2->VAR12->VAR13->VAR14 = FUN2(VAR11, 32);
    FUN3(VAR2->VAR15, VAR16, "", VAR4);
    if (VAR2->VAR17 < 0)
        VAR2->VAR17 = VAR4;
    VAR2->VAR18[0] = VAR2->VAR18[1] = NULL;
    for (VAR5 = 0; VAR5 < VAR2->VAR19; VAR5++)
    {
        VAR9 = (VAR4 + FUN4(VAR11)) & 0xFFFFFFFF;
        VAR8 = VAR20;
        for (VAR6 = 0; VAR6 < VAR21 && VAR8; VAR6++)
            if (VAR2->VAR22[VAR6] && FUN5(VAR2->VAR22[VAR6]->VAR13->VAR14 - VAR9) < VAR8)
            {
                VAR2->VAR18[VAR5] = VAR2->VAR22[VAR6];
                VAR8 = FUN5(VAR2->VAR22[VAR6]->VAR13->VAR14 - VAR9);
            }
        if (!VAR2->VAR18[VAR5] || VAR8)
            FUN3(VAR2->VAR15, VAR16, "");
        if (!VAR2->VAR18[VAR5])
            for (VAR6 = 0; VAR6 < VAR23; VAR6++)
                if (!VAR2->VAR24[VAR6].VAR13->VAR25[0])
                {
                    VAR2->VAR18[VAR5] = &VAR2->VAR24[VAR6];
                    FUN6(VAR2->VAR15, VAR2->VAR18[VAR5]->VAR13, VAR26);
                    break;
                }
        if (!VAR2->VAR18[VAR5])
        {
            FUN3(VAR2->VAR15, VAR27, "");
            return VAR28;
        }
    }
    if (VAR2->VAR12->VAR29)
    {
        VAR3 = (VAR4 + FUN4(VAR11)) & 0xFFFFFFFF;
        if (VAR3 != VAR4)
        {
            VAR30 *VAR31 = FUN7(VAR2->VAR22, VAR3);
            if (VAR31)
                VAR31->VAR29 &= VAR32;
            else
                FUN3(VAR2->VAR15, VAR16, "");
        }
        while (FUN8(VAR2->VAR22, VAR21, VAR2->VAR12))
        {
            FUN3(VAR2->VAR15, VAR27, "");
            FUN7(VAR2->VAR22, VAR2->VAR22[0]->VAR13->VAR14)->VAR29 &= VAR32;
        }
    }
    if (VAR2->VAR19)
    {
        VAR7 = FUN9(VAR2);
        if (VAR7 < 0)
            return VAR7;
        VAR7 = FUN10(VAR2);
        if (VAR7 < 0)
            return VAR7;
    }
    VAR7 = FUN11(VAR2);
    if (VAR7 < 0)
        return VAR7;
    FUN12(VAR2);
    return 0;
}