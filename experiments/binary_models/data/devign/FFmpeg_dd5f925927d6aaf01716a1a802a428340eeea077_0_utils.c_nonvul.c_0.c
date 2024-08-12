static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR2->VAR6 && VAR4->VAR7 < 63 && VAR4->VAR8 == VAR9 && VAR4->VAR10 != VAR9)
    {
        int VAR11;
        int64_t VAR12 = VAR4->VAR10 & ((1LL << VAR4->VAR7) - 1);
        int64_t VAR8 = VAR12 - FUN2(60, VAR4->VAR13.VAR14, VAR4->VAR13.VAR15);
        int VAR16 = (VAR12 < (1LL << VAR4->VAR7) - (1LL << VAR4->VAR7 - 3)) || (VAR12 < (1LL << VAR4->VAR7) - FUN2(60, VAR4->VAR13.VAR14, VAR4->VAR13.VAR15)) ? VAR17 : VAR18;
        VAR19 *VAR20 = FUN3(VAR2, NULL, VAR5);
        if (!VAR20)
        {
            int VAR21 = FUN4(VAR2);
            if (VAR2->VAR22[VAR21]->VAR8 == VAR9)
            {
                for (VAR11 = 0; VAR11 < VAR2->VAR23; VAR11++)
                {
                    VAR2->VAR22[VAR11]->VAR8 = VAR8;
                    VAR2->VAR22[VAR11]->VAR16 = VAR16;
                }
            }
            else
            {
                VAR4->VAR8 = VAR2->VAR22[VAR21]->VAR8;
                VAR4->VAR16 = VAR2->VAR22[VAR21]->VAR16;
            }
        }
        else
        {
            VAR19 *VAR24 = VAR20;
            while (VAR24)
            {
                if (VAR24->VAR8 != VAR9)
                {
                    VAR8 = VAR24->VAR8;
                    VAR16 = VAR24->VAR16;
                    break;
                }
                VAR24 = FUN3(VAR2, VAR24, VAR5);
            }
            VAR24 = VAR20;
            while (VAR24)
            {
                if (VAR24->VAR8 != VAR8)
                {
                    for (VAR11 = 0; VAR11 < VAR24->VAR25; VAR11++)
                    {
                        VAR2->VAR22[VAR24->VAR5[VAR11]]->VAR8 = VAR8;
                        VAR2->VAR22[VAR24->VAR5[VAR11]]->VAR16 = VAR16;
                    }
                    VAR24->VAR8 = VAR8;
                    VAR24->VAR16 = VAR16;
                }
                VAR24 = FUN3(VAR2, VAR24, VAR5);
            }
        }
        return 1;
    }
    return 0;
}