VAR1 FUN1(VAR2 *VAR3, const struct VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR3->VAR8;
    VAR2 *VAR9;
    VAR10 *VAR11;
    ssize_t VAR12 = 0;
    int VAR13;
    if (VAR3->VAR14)
        return FUN2(VAR5, VAR6);
    if (VAR8->VAR15)
    {
        VAR12 = FUN2(VAR5, VAR6);
        VAR11 = FUN3(sizeof(VAR10) + VAR12);
        VAR11->VAR16 = VAR8->VAR17;
        VAR11->VAR3 = VAR3;
        VAR11->VAR18 = 0;
        for (VAR13 = 0; VAR13 < VAR6; VAR13++)
        {
            size_t VAR19 = VAR5[VAR13].VAR20;
            memcpy(VAR11->VAR21 + VAR11->VAR18, VAR5[VAR13].VAR22, VAR19);
            VAR11->VAR18 += VAR19;
        }
        VAR8->VAR17 = VAR11;
    }
    else
    {
        VAR8->VAR15 = 1;
        for (VAR9 = VAR8->VAR23; VAR9 != NULL; VAR9 = VAR9->VAR16)
        {
            ssize_t VAR19 = 0;
            if (VAR9 == VAR3)
            {
                continue;
            }
            if (VAR9->VAR14)
            {
                VAR19 = FUN2(VAR5, VAR6);
            }
            else if (VAR9->VAR24)
            {
                VAR19 = VAR9->FUN4(VAR9, VAR5, VAR6);
            }
            else if (VAR9->VAR25)
            {
                VAR19 = FUN5(VAR9, VAR5, VAR6);
            }
            VAR12 = FUN6(VAR12, VAR19);
        }
        while ((VAR11 = VAR8->VAR17) != NULL)
        {
            VAR8->VAR17 = VAR11->VAR16;
            FUN7(VAR11->VAR3, VAR11->VAR21, VAR11->VAR18);
            FUN8(VAR11);
        }
        VAR8->VAR15 = 0;
    }
    return VAR12;
}