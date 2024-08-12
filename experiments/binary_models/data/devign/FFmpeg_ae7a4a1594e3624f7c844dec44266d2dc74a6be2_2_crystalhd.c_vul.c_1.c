static inline VAR1 FUN1(VAR2 *VAR3, void *VAR4, int *VAR5, uint8_t VAR6)
{
    BC_STATUS VAR7;
    BC_DTS_PROC_OUT VAR8 = {
        .VAR9.VAR10 = VAR3->VAR10,
        .VAR9.VAR11 = VAR3->VAR11,
    };
    VAR12 *VAR13 = VAR3->VAR14;
    HANDLE VAR15 = VAR13->VAR15;
    *VAR5 = 0;
    VAR7 = FUN2(VAR15, VAR16, &VAR8);
    if (VAR7 == VAR17)
    {
        FUN3(VAR3, VAR18, "");
        VAR3->VAR10 = VAR8.VAR9.VAR10;
        VAR3->VAR11 = VAR8.VAR9.VAR11;
        return VAR19;
    }
    else if (VAR7 == VAR20)
    {
        int VAR21 = -1;
        if (VAR8.VAR22 & VAR23)
        {
            if (VAR13->VAR24 == -1)
            {
                VAR13->VAR24 = VAR8.VAR9.VAR25 - 1;
            }
            if (VAR3->VAR26->VAR27 == VAR28 && VAR8.VAR9.VAR29 == 0)
            {
                FUN3(VAR3, VAR18, "");
                VAR13->VAR24++;
                FUN4(VAR15, NULL, VAR30);
                return VAR19;
            }
            FUN5(VAR13, &VAR8);
            if (VAR13->VAR24 + 1 < VAR8.VAR9.VAR25)
            {
                FUN3(VAR3, VAR31, "");
                VAR13->VAR24 = VAR8.VAR9.VAR25 - 1;
            }
            VAR21 = FUN6(VAR3, &VAR8, VAR4, VAR5, VAR6);
            if (*VAR5 > 0)
            {
                VAR3->VAR32--;
                VAR13->VAR24++;
                FUN3(VAR3, VAR18, "", VAR3->VAR32);
            }
        }
        else
        {
            FUN3(VAR3, VAR33, ""
                                        "");
            VAR3->VAR32--;
            VAR21 = VAR34;
        }
        FUN4(VAR15, NULL, VAR30);
        return VAR21;
    }
    else if (VAR7 == VAR35)
    {
        return VAR19;
    }
    else
    {
        FUN3(VAR3, VAR33, "", VAR7);
        return VAR36;
    }
}