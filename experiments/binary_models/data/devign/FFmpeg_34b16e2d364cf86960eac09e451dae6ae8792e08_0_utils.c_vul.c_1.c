static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    int64_t VAR8 = VAR7->VAR9;
    if (VAR8 == VAR10)
        VAR8 = VAR7->VAR11;
    if (VAR8 == VAR10)
        return 0;
    VAR8 &= (1LL << VAR4->VAR12) - 1;
    if (VAR2->VAR13 && VAR4->VAR12 < 63 && VAR4->VAR14 == VAR10)
    {
        int VAR15;
        int64_t VAR14 = VAR8 - FUN2(60, VAR4->VAR16.VAR17, VAR4->VAR16.VAR18);
        int VAR19 = (VAR8 < (1LL << VAR4->VAR12) - (1LL << VAR4->VAR12 - 3)) || (VAR8 < (1LL << VAR4->VAR12) - FUN2(60, VAR4->VAR16.VAR17, VAR4->VAR16.VAR18)) ? VAR20 : VAR21;
        VAR22 *VAR23 = FUN3(VAR2, NULL, VAR5);
        if (!VAR23)
        {
            int VAR24 = FUN4(VAR2);
            if (VAR2->VAR25[VAR24]->VAR14 == VAR10)
            {
                for (VAR15 = 0; VAR15 < VAR2->VAR26; VAR15++)
                {
                    VAR2->VAR25[VAR15]->VAR14 = VAR14;
                    VAR2->VAR25[VAR15]->VAR19 = VAR19;
                }
            }
            else
            {
                VAR4->VAR14 = VAR2->VAR25[VAR24]->VAR14;
                VAR4->VAR19 = VAR2->VAR25[VAR24]->VAR19;
            }
        }
        else
        {
            VAR22 *VAR27 = VAR23;
            while (VAR27)
            {
                if (VAR27->VAR14 != VAR10)
                {
                    VAR14 = VAR27->VAR14;
                    VAR19 = VAR27->VAR19;
                    break;
                }
                VAR27 = FUN3(VAR2, VAR27, VAR5);
            }
            VAR27 = VAR23;
            while (VAR27)
            {
                if (VAR27->VAR14 != VAR14)
                {
                    for (VAR15 = 0; VAR15 < VAR27->VAR28; VAR15++)
                    {
                        VAR2->VAR25[VAR27->VAR5[VAR15]]->VAR14 = VAR14;
                        VAR2->VAR25[VAR27->VAR5[VAR15]]->VAR19 = VAR19;
                    }
                    VAR27->VAR14 = VAR14;
                    VAR27->VAR19 = VAR19;
                }
                VAR27 = FUN3(VAR2, VAR27, VAR5);
            }
        }
        return 1;
    }
    return 0;
}