static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    RTSPMessageHeader VAR6, *VAR7 = &VAR6;
    int VAR8;
    char VAR9[1024];
    FUN2(VAR2, VAR10, "", VAR4->VAR11);
    if (!(VAR4->VAR12 == VAR13 && VAR4->VAR14))
    {
        if (VAR4->VAR11 == VAR15)
        {
            VAR9[0] = 0;
        }
        else
        {
            snprintf(VAR9, sizeof(VAR9), "", (double)VAR4->VAR16 / VAR17);
        }
        FUN3(VAR2, "", VAR4->VAR18, VAR9, VAR7, NULL);
        if (VAR7->VAR19 != VAR20)
        {
            return -1;
        }
        if (VAR7->VAR21 != VAR22 && VAR4->VAR23 == VAR24)
        {
            for (VAR8 = 0; VAR8 < VAR4->VAR25; VAR8++)
            {
                VAR26 *VAR27 = VAR4->VAR28[VAR8];
                VAR29 *VAR30 = VAR27->VAR31;
                VAR32 *VAR33 = NULL;
                if (VAR27->VAR34 >= 0)
                    VAR33 = VAR2->VAR35[VAR27->VAR34];
                VAR30->VAR36 = VAR22;
                VAR30->VAR37 = VAR22;
                if (VAR33)
                    VAR30->VAR38 = FUN4(VAR7->VAR21, VAR39, VAR33->VAR40);
            }
        }
    }
    VAR4->VAR11 = VAR41;
    return 0;