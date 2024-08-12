static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const void *VAR12 = NULL;
    const void *VAR13 = NULL;
    struct VAR14 *VAR15, *VAR16;
    int VAR17;
    VAR18 *VAR19 = NULL;
    int VAR20 = 0;
    VAR17 = FUN2(VAR2, &VAR8->VAR21, VAR6->VAR3, VAR6->VAR22);
    if (VAR17)
        return VAR17;
    VAR19 = FUN3(VAR6, VAR23, &VAR20);
    if (VAR20 > 1)
    {
        const uint64_t VAR24 = FUN4(VAR19);
        VAR19 += 8;
        VAR20 -= 8;
        if (VAR24 == 1)
        {
            if (!VAR8->VAR25)
            {
                VAR8->VAR25 = 1;
                VAR17 = FUN5(VAR2, (VAR2->VAR26 == VAR27) ? &VAR28 : &VAR29, &VAR28, &VAR29, 1);
                if (VAR17)
                    return VAR17;
            }
            VAR17 = FUN2(VAR2, &VAR8->VAR30, VAR19, VAR20);
            if (VAR17)
                return VAR17;
        }
    }
    if ((VAR15 = FUN6(&VAR8->VAR21, &VAR12)) && (!VAR8->VAR25 || (VAR16 = FUN6(&VAR8->VAR30, &VAR13))))
    {
        VAR18 *VAR31[4];
        int VAR32[4];
        if (VAR15->VAR33 > VAR15->VAR34 || VAR15->VAR35 > VAR15->VAR36)
        {
            FUN7(VAR2, VAR37, "", VAR15->VAR33, VAR15->VAR35, VAR15->VAR34, VAR15->VAR36);
            return VAR38;
        }
        if ((VAR17 = FUN8(VAR2, VAR15, VAR8->VAR25)) < 0)
        {
            FUN7(VAR2, VAR37, "", VAR15->VAR39, VAR15->VAR40);
            return VAR17;
        }
        if ((int)VAR15->VAR33 != VAR2->VAR41 || (int)VAR15->VAR35 != VAR2->VAR42)
        {
            FUN7(VAR2, VAR43, "", VAR2->VAR41, VAR2->VAR42, VAR15->VAR33, VAR15->VAR35);
            VAR17 = FUN9(VAR2, VAR15->VAR33, VAR15->VAR35);
            if (VAR17 < 0)
                return VAR17;
        }
        if ((VAR17 = FUN10(VAR2, VAR11, 0)) < 0)
            return VAR17;
        VAR31[0] = VAR15->VAR31[VAR44];
        VAR31[1] = VAR15->VAR31[VAR45];
        VAR31[2] = VAR15->VAR31[VAR46];
        VAR31[3] = VAR8->VAR25 ? VAR16->VAR31[VAR44] : NULL;
        VAR32[0] = VAR15->VAR47[VAR44];
        VAR32[1] = VAR15->VAR47[VAR45];
        VAR32[2] = VAR15->VAR47[VAR46];
        VAR32[3] = VAR8->VAR25 ? VAR16->VAR47[VAR44] : 0;
        FUN11(VAR11->VAR3, VAR11->VAR48, (const VAR18 **)VAR31, VAR32, VAR2->VAR49, VAR15->VAR33, VAR15->VAR35);
        *VAR4 = 1;
    }
    return VAR6->VAR22;
}