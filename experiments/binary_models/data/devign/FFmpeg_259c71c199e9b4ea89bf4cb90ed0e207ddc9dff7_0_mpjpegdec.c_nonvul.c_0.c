static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    if (VAR8->VAR10 == NULL)
    {
        VAR11 *VAR10 = NULL;
        if (VAR8->VAR12)
        {
            VAR10 = FUN2(VAR2->VAR13);
        }
        if (VAR10 != NULL)
        {
            VAR8->VAR10 = VAR10;
            VAR8->VAR14 = FUN3("", VAR10);
        }
        else
        {
            VAR8->VAR10 = FUN4("");
            VAR8->VAR14 = FUN4("");
        }
        if (!VAR8->VAR10 || !VAR8->VAR14)
        {
            FUN5(&VAR8->VAR10);
            FUN5(&VAR8->VAR14);
            return FUN6(VAR15);
        }
        VAR8->VAR16 = strlen(VAR8->VAR14);
    }
    VAR6 = FUN7(VAR2->VAR13, &VAR5, VAR8->VAR10, VAR2);
    if (VAR6 < 0)
        return VAR6;
    if (VAR5 > 0)
    {
        VAR6 = FUN8(VAR2->VAR13, VAR4, VAR5);
    }
    else
    {
        int VAR17 = 0, VAR18;
        const int VAR19 = 2048;
        FUN9(VAR4);
        VAR4->VAR20 = NULL;
        VAR4->VAR5 = 0;
        VAR4->VAR21 = FUN10(VAR2->VAR13);
        FUN11(VAR2->VAR13, VAR19);
        while ((VAR6 = FUN12(VAR2->VAR13, VAR4, VAR19 - VAR17)) >= 0)
        {
            VAR18 = VAR6 + VAR17;
            char *VAR22 = VAR4->VAR20 + VAR4->VAR5 - VAR18;
            do
            {
                if (!memcmp(VAR22, VAR8->VAR14, VAR8->VAR16))
                {
                    FUN13(VAR2->VAR13, -(VAR18 - 2), VAR23);
                    VAR4->VAR5 -= (VAR18 - 2);
                    return VAR4->VAR5;
                }
                VAR18--;
                VAR22++;
            } while (VAR18 >= VAR8->VAR16);
            VAR17 = VAR18;
        }
        if (VAR6 == VAR24)
        {
            VAR6 = VAR4->VAR5 > 0 ? VAR4->VAR5 : VAR24;
        }
        else
        {
            FUN14(VAR4);
        }
    }
    return VAR6;
}