static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR2->VAR6 && VAR4->VAR7 != 64 && VAR4->VAR8 == VAR9 && VAR4->VAR10 != VAR9)
    {
        int VAR11;
        int64_t VAR8 = VAR4->VAR10 - FUN2(60, VAR4->VAR12.VAR13, VAR4->VAR12.VAR14);
        int VAR15 = (VAR4->VAR10 < (1LL << VAR4->VAR7) - (1LL << VAR4->VAR7 - 3)) || (VAR4->VAR10 < (1LL << VAR4->VAR7) - FUN2(60, VAR4->VAR12.VAR13, VAR4->VAR12.VAR14)) ? VAR16 : VAR17;
        VAR18 *VAR19 = FUN3(VAR2, NULL, VAR5);
        if (!VAR19)
        {
            int VAR20 = FUN4(VAR2);
            if (VAR2->VAR21[VAR20]->VAR8 == VAR9)
            {
                for (VAR11 = 0; VAR11 < VAR2->VAR22; VAR11++)
                {
                    VAR2->VAR21[VAR11]->VAR8 = VAR8;
                    VAR2->VAR21[VAR11]->VAR15 = VAR15;
                }
            }
            else
            {
                VAR4->VAR8 = VAR2->VAR21[VAR20]->VAR8;
                VAR4->VAR15 = VAR2->VAR21[VAR20]->VAR15;
            }
        }
        else
        {
            VAR18 *VAR23 = VAR19;
            while (VAR23)
            {
                if (VAR23->VAR8 != VAR9)
                {
                    VAR8 = VAR23->VAR8;
                    VAR15 = VAR23->VAR15;
                    break;
                }
                VAR23 = FUN3(VAR2, VAR23, VAR5);
            }
            VAR23 = VAR19;
            while (VAR23)
            {
                if (VAR23->VAR8 != VAR8)
                {
                    for (VAR11 = 0; VAR11 < VAR23->VAR24; VAR11++)
                    {
                        VAR2->VAR21[VAR23->VAR5[VAR11]]->VAR8 = VAR8;
                        VAR2->VAR21[VAR23->VAR5[VAR11]]->VAR15 = VAR15;
                    }
                    VAR23->VAR8 = VAR8;
                    VAR23->VAR15 = VAR15;
                }
                VAR23 = FUN3(VAR2, VAR23, VAR5);
            }
        }
        return 1;
    }
    return 0;
}