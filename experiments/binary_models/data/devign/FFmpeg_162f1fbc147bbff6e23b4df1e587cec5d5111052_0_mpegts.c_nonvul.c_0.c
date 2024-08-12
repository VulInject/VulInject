static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    uint8_t VAR7[VAR8];
    int VAR9, VAR10 = 0;
    if (FUN2(VAR5->VAR11) != VAR2->VAR12)
    {
        int VAR13;
        FUN3("");
        for (VAR13 = 0; VAR13 < VAR14; VAR13++)
        {
            if (VAR2->VAR15[VAR13])
            {
                if (VAR2->VAR15[VAR13]->VAR16 == VAR17)
                {
                    VAR18 *VAR19 = VAR2->VAR15[VAR13]->VAR20.VAR21.VAR22;
                    FUN4(&VAR19->VAR23);
                    VAR19->VAR24 = 0;
                    VAR19->VAR25 = VAR26;
                }
                VAR2->VAR15[VAR13]->VAR27 = -1;
            }
        }
    }
    VAR2->VAR28 = 0;
    VAR9 = 0;
    for (;;)
    {
        if (VAR2->VAR28 > 0)
            break;
        VAR9++;
        if (VAR3 != 0 && VAR9 >= VAR3)
            break;
        VAR10 = FUN5(VAR5, VAR7, VAR2->VAR29);
        if (VAR10 != 0)
            break;
        VAR10 = FUN6(VAR2, VAR7);
        if (VAR10 != 0)
            break;
    }
    VAR2->VAR12 = FUN2(VAR5->VAR11);
    return VAR10;
}