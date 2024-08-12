static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    Jpeg2000T1Context VAR5;
    int VAR6, VAR7, VAR8;
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
    {
        VAR10 *VAR11 = VAR4->VAR11 + VAR6;
        VAR12 *VAR13 = VAR4->VAR13 + VAR6;
        for (VAR7 = 0; VAR7 < VAR13->VAR14; VAR7++)
        {
            VAR15 *VAR16 = VAR11->VAR17 + VAR7;
            for (VAR8 = 0; VAR8 < VAR16->VAR18; VAR8++)
            {
                uint16_t VAR19, VAR20;
                VAR21 *VAR22 = VAR16->VAR22 + VAR8;
                int VAR23 = 0, VAR24;
                VAR24 = VAR8 + (VAR7 > 0);
                if (VAR22->VAR25[0][0] == VAR22->VAR25[0][1] || VAR22->VAR25[1][0] == VAR22->VAR25[1][1])
                    continue;
                VAR19 = VAR16->VAR26 * VAR16->VAR27;
                for (VAR20 = 0; VAR20 < VAR19; VAR20++)
                {
                    VAR28 *VAR29 = VAR22->VAR29 + VAR20;
                    for (VAR23 = 0; VAR23 < VAR29->VAR30 * VAR29->VAR31; VAR23++)
                    {
                        int VAR32, VAR33;
                        VAR34 *VAR35 = VAR29->VAR35 + VAR23;
                        FUN2(VAR2, VAR13, &VAR5, VAR35, VAR35->VAR25[0][1] - VAR35->VAR25[0][0], VAR35->VAR25[1][1] - VAR35->VAR25[1][0], VAR24);
                        VAR32 = VAR35->VAR25[0][0];
                        VAR33 = VAR35->VAR25[1][0];
                        if (VAR13->VAR36 == VAR37)
                            FUN3(VAR32, VAR33, VAR35, VAR11, &VAR5, VAR22);
                        else
                            FUN4(VAR32, VAR33, VAR35, VAR11, &VAR5, VAR22);
                    }
                }
            }
        }
        FUN5(&VAR11->VAR38, VAR13->VAR36 == VAR37 ? (void *)VAR11->VAR39 : (void *)VAR11->VAR40);
    }
}