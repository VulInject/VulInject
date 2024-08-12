static char *FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        if (VAR2->VAR4)
            FUN2(VAR2->VAR4->VAR5->VAR5, VAR6);
        if (VAR2->VAR7->VAR8->VAR9 == VAR10)
            return NULL;
        return FUN3(FUN4(VAR2->VAR7->VAR8->VAR9));
    }
    if (VAR2->VAR7->VAR8->VAR9 != VAR10)
    {
        return FUN3(FUN4(FUN5(VAR2->VAR7, VAR2->VAR11, VAR2->VAR7->VAR8->VAR9)));
    }
    else if (VAR2->VAR11->VAR12)
    {
        const enum VAR13 *VAR14;
        VAR15 *VAR16 = NULL;
        VAR17 *VAR18;
        int VAR19;
        if (FUN6(&VAR16) < 0)
            FUN7(1);
        VAR14 = VAR2->VAR11->VAR12;
        if (VAR2->VAR7->VAR8->VAR20 <= VAR21)
        {
            if (VAR2->VAR7->VAR8->VAR22 == VAR23)
            {
                VAR14 = (const enum VAR13[]){VAR24, VAR25, VAR26, VAR27, VAR10};
            }
            else if (VAR2->VAR7->VAR8->VAR22 == VAR28)
            {
                VAR14 = (const enum VAR13[]){VAR24, VAR25, VAR29, VAR26, VAR27, VAR30, VAR31, VAR10};
            }
        }
        for (; *VAR14 != VAR10; VAR14++)
        {
            const char *VAR32 = FUN4(*VAR14);
            FUN8(VAR16, "", VAR32);
        }
        VAR19 = FUN9(VAR16, &VAR18);
        VAR18[VAR19 - 1] = 0;
        return VAR18;
    }
    else
        return NULL;
}