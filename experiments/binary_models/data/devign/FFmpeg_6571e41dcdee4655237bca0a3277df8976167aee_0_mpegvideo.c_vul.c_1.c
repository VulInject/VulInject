static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5 = NULL;
    int VAR6;
    const int VAR7 = VAR2->VAR8;
    int VAR9 = 1;
    if (VAR4)
    {
        if (VAR7 && !(VAR2->VAR10 & VAR11))
            VAR9 = 0;
        if (VAR4->VAR12[0] != VAR2->VAR12)
            VAR9 = 0;
        if (VAR4->VAR12[1] != VAR2->VAR13)
            VAR9 = 0;
        if (VAR4->VAR12[2] != VAR2->VAR13)
            VAR9 = 0;
        if (VAR9)
        {
            VAR6 = FUN2(VAR2, 1);
            VAR5 = (VAR3 *)&VAR2->VAR14[VAR6];
            VAR5->VAR15 = 3;
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                VAR5->VAR16[VAR6] = VAR4->VAR16[VAR6];
                VAR5->VAR12[VAR6] = VAR4->VAR12[VAR6];
            }
            FUN3(VAR2, (VAR17 *)VAR5, 1);
        }
        else
        {
            VAR6 = FUN2(VAR2, 0);
            VAR5 = (VAR3 *)&VAR2->VAR14[VAR6];
            VAR5->VAR15 = 3;
            FUN3(VAR2, (VAR17 *)VAR5, 0);
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                VAR5->VAR16[VAR6] += 16;
            }
            if (VAR5->VAR16[0] == VAR4->VAR16[0] && VAR5->VAR16[1] == VAR4->VAR16[1] && VAR5->VAR16[2] == VAR4->VAR16[2])
            {
            }
            else
            {
                int VAR18, VAR19;
                FUN4(VAR2->VAR20->VAR21, &VAR18, &VAR19);
                for (VAR6 = 0; VAR6 < 3; VAR6++)
                {
                    int VAR22 = VAR4->VAR12[VAR6];
                    int VAR23 = VAR6 ? VAR2->VAR13 : VAR2->VAR12;
                    int VAR24 = VAR6 ? VAR18 : 0;
                    int VAR25 = VAR6 ? VAR19 : 0;
                    int VAR26 = VAR2->VAR27 >> VAR24;
                    int VAR28 = VAR2->VAR29 >> VAR25;
                    VAR30 *VAR31 = VAR4->VAR16[VAR6];
                    VAR30 *VAR32 = VAR5->VAR16[VAR6];
                    if (VAR22 == VAR23)
                        memcpy(VAR32, VAR31, VAR22 * VAR28);
                    else
                    {
                        while (VAR28--)
                        {
                            memcpy(VAR32, VAR31, VAR26);
                            VAR32 += VAR23;
                            VAR31 += VAR22;
                        }
                    }
                }
            }
        }
        VAR5->VAR33 = VAR4->VAR33;
        VAR5->VAR34 = VAR4->VAR34;
        VAR5->VAR35 = VAR4->VAR35;
        if (VAR2->VAR36[VAR7])
            VAR5->VAR37 = VAR2->VAR36[VAR7]->VAR37 + 1;
    }
    for (VAR6 = 1; VAR6 < VAR38; VAR6++)
        VAR2->VAR36[VAR6 - 1] = VAR2->VAR36[VAR6];
    VAR2->VAR36[VAR7] = (VAR17 *)VAR5;
    return 0;
}