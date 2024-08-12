static void FUN1(struct VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7;
    int VAR8;
    uint8_t VAR9;
    FUN3(VAR5, VAR3);
    FUN4(VAR5, VAR3);
    for (VAR8 = 0; VAR8 < VAR5->VAR10; VAR8++)
    {
        VAR11 *VAR12 = FUN5(VAR5->VAR13, VAR8);
        bool VAR14;
        VAR7 = &VAR5->VAR15[VAR8];
        if ((!VAR5->VAR16 && VAR8 != 0) || VAR8 >= VAR5->VAR17)
        {
            VAR9 = 0;
        }
        else
        {
            VAR9 = VAR3;
        }
        VAR14 = FUN6(VAR5, VAR9) && !VAR5->VAR18;
        if (VAR14)
        {
            FUN7(VAR12);
        }
        if (!VAR7->VAR19)
        {
            continue;
        }
        if (VAR14)
        {
            if (VAR7->VAR20)
            {
                FUN8(VAR7->VAR20, FUN9(VAR21) + VAR5->VAR22);
            }
            else
            {
                FUN10(VAR7->VAR23);
            }
        }
        else
        {
            if (VAR7->VAR20)
            {
                FUN11(VAR7->VAR20);
            }
            else
            {
                FUN12(VAR7->VAR23);
            }
            if ((VAR5->VAR3 & VAR24) == 0 && (VAR9 & VAR25))
            {
                VAR7->VAR19 = 0;
                FUN13(VAR7->VAR26, 1);
                FUN14(VAR2, VAR7->VAR26);
            }
        }
    }
}