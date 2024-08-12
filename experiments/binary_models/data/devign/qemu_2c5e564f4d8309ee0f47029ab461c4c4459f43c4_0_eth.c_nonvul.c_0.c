void FUN1(const struct VAR1 *VAR2, int VAR3, bool *VAR4, bool *VAR5, bool *VAR6, bool *VAR7, VAR8 *VAR9, VAR8 *VAR10, VAR8 *VAR11, VAR12 *VAR13, VAR14 *VAR15, VAR16 *VAR17)
{
    int VAR18;
    bool VAR19 = false;
    size_t VAR20 = FUN2(VAR2, VAR3);
    size_t VAR21 = FUN3(VAR2, VAR3);
    size_t VAR22;
    *VAR4 = *VAR5 = *VAR6 = *VAR7 = false;
    VAR18 = FUN4(VAR2, VAR3, VAR20);
    *VAR9 = VAR20;
    if (VAR18 == VAR23)
    {
        struct VAR24 *VAR25 = &VAR15->VAR26;
        if (VAR21 < VAR20)
        {
            return;
        }
        VAR22 = FUN5(VAR2, VAR3, VAR20, VAR25, sizeof(*VAR25));
        *VAR4 = true;
        if (VAR22 < sizeof(*VAR25))
        {
            return;
        }
        if (FUN6(VAR25) == VAR27)
        {
            if (VAR25->VAR28 == VAR29)
            {
                *VAR7 = true;
            }
            else if (VAR25->VAR28 == VAR30)
            {
                *VAR6 = true;
            }
        }
        VAR15->VAR19 = FUN7(VAR25);
        *VAR10 = VAR20 + FUN8(VAR25);
        VAR19 = VAR15->VAR19;
    }
    else if (VAR18 == VAR31)
    {
        *VAR5 = true;
        if (FUN9(VAR2, VAR3, VAR20, VAR13))
        {
            if (VAR13->VAR32 == VAR29)
            {
                *VAR7 = true;
            }
            else if (VAR13->VAR32 == VAR30)
            {
                *VAR6 = true;
            }
        }
        else
        {
            return;
        }
        *VAR10 = VAR20 + VAR13->VAR33;
        VAR19 = VAR13->VAR19;
    }
    if (!VAR19)
    {
        if (*VAR7)
        {
            *VAR7 = FUN10(VAR21, VAR2, VAR3, *VAR10, sizeof(VAR17->VAR34.VAR35), &VAR17->VAR34.VAR35);
            if (*VAR7)
            {
                *VAR11 = *VAR10 + FUN11(&VAR17->VAR34.VAR35);
                VAR17->VAR36 = FUN12(VAR18 == VAR23, &VAR15->VAR26, &VAR13->VAR37, *VAR10 - *VAR9, &VAR17->VAR34.VAR35);
            }
        }
        else if (*VAR6)
        {
            *VAR6 = FUN10(VAR21, VAR2, VAR3, *VAR10, sizeof(VAR17->VAR34.VAR38), &VAR17->VAR34.VAR38);
            *VAR11 = *VAR10 + sizeof(VAR17->VAR34.VAR38);
        }
    }
}