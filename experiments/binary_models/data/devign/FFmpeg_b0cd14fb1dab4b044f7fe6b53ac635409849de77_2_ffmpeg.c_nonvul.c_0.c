static enum VAR1 FUN1(VAR2 *VAR3, const enum VAR1 *VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    const enum VAR1 *VAR8;
    int VAR9;
    for (VAR8 = VAR4; *VAR8 != VAR10; VAR8++)
    {
        const VAR11 *VAR12 = FUN2(*VAR8);
        const VAR13 *VAR14 = NULL;
        int VAR15;
        if (!(VAR12->VAR16 & VAR17))
            break;
        if (VAR6->VAR18 == VAR19 || VAR6->VAR18 == VAR20)
        {
            for (VAR15 = 0;; VAR15++)
            {
                VAR14 = FUN3(VAR3->VAR21, VAR15);
                if (!VAR14)
                    break;
                if (!(VAR14->VAR22 & VAR23))
                    continue;
                if (VAR14->VAR24 == *VAR8)
                    break;
            }
        }
        if (VAR14)
        {
            if (VAR14->VAR25 != VAR6->VAR26)
            {
                continue;
            }
            VAR9 = FUN4(VAR3);
            if (VAR9 < 0)
            {
                if (VAR6->VAR18 == VAR19)
                {
                    FUN5(NULL, VAR27, ""
                                               "",
                           FUN6(VAR14->VAR25), VAR6->VAR28, VAR6->VAR29->VAR30);
                    return VAR10;
                }
                continue;
            }
        }
        else
        {
            const VAR31 *VAR32 = NULL;
            int VAR15;
            for (VAR15 = 0; VAR33[VAR15].VAR34; VAR15++)
            {
                if (VAR33[VAR15].VAR24 == *VAR8)
                {
                    VAR32 = &VAR33[VAR15];
                    break;
                }
            }
            if (!VAR32)
            {
                continue;
            }
            if (VAR32->VAR35 != VAR6->VAR18)
            {
                continue;
            }
            VAR9 = VAR32->FUN7(VAR3);
            if (VAR9 < 0)
            {
                FUN5(NULL, VAR27, ""
                                           "",
                       VAR32->VAR34, VAR6->VAR28, VAR6->VAR29->VAR30);
                return VAR10;
            }
        }
        if (VAR6->VAR36)
        {
            VAR3->VAR36 = FUN8(VAR6->VAR36);
            if (!VAR3->VAR36)
                return VAR10;
        }
        VAR6->VAR37 = *VAR8;
        break;
    }
    return *VAR8;
}