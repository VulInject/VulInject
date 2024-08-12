int FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *const VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8;
    FUN2(VAR3 && VAR2->VAR9[VAR3 - 1].VAR10 < VAR2->VAR11);
    if (VAR2->VAR5->VAR12 || VAR2->VAR5->VAR13->VAR14 & VAR15)
        return 0;
    if (VAR3 == 1)
    {
        int VAR16 = FUN3(VAR5, &VAR2->VAR9[0]);
        VAR2->VAR10 = VAR2->VAR9[0].VAR10;
        return VAR16;
    }
    else
    {
        FUN2(VAR3 > 0);
        for (VAR8 = 1; VAR8 < VAR3; VAR8++)
        {
            VAR7 = &VAR2->VAR9[VAR8];
            if (VAR17)
            {
                VAR7->VAR18.VAR19 = 0;
            }
        }
        VAR5->FUN4(VAR5, VAR20, VAR2->VAR9, NULL, VAR3, sizeof(VAR2->VAR9[0]));
        VAR7 = &VAR2->VAR9[VAR3 - 1];
        VAR2->VAR10 = VAR7->VAR10;
        if (VAR17)
        {
            for (VAR8 = 1; VAR8 < VAR3; VAR8++)
                VAR2->VAR9[0].VAR18.VAR19 += VAR2->VAR9[VAR8].VAR18.VAR19;
        }
    }
    return 0;
}