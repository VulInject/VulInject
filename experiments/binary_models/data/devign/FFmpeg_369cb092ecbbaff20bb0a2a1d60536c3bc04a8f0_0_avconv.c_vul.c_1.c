void FUN1(int VAR1)
{
    int VAR2, VAR3;
    for (VAR2 = 0; VAR2 < VAR4; VAR2++)
    {
        FUN2(&VAR5[VAR2]->VAR6);
        for (VAR3 = 0; VAR3 < VAR5[VAR2]->VAR7; VAR3++)
            FUN3(&VAR5[VAR2]->VAR8[VAR3]);
        FUN3(&VAR5[VAR2]->VAR8);
        for (VAR3 = 0; VAR3 < VAR5[VAR2]->VAR9; VAR3++)
            FUN3(&VAR5[VAR2]->VAR10[VAR3]);
        FUN3(&VAR5[VAR2]->VAR10);
        FUN3(&VAR5[VAR2]);
    }
    FUN3(&VAR5);
    for (VAR2 = 0; VAR2 < VAR11; VAR2++)
    {
        VAR12 *VAR13 = VAR14[VAR2]->VAR15;
        if (!(VAR13->VAR16->VAR17 & VAR18) && VAR13->VAR19)
            FUN4(VAR13->VAR19);
        FUN5(VAR13);
        FUN6(&VAR14[VAR2]->VAR20);
        FUN3(&VAR14[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR21; VAR2++)
    {
        VAR22 *VAR23 = VAR24[VAR2]->VAR25;
        while (VAR23)
        {
            VAR22 *VAR26 = VAR23->VAR26;
            FUN7(VAR23);
            VAR23 = VAR26;
        }
        VAR24[VAR2]->VAR25 = NULL;
        if (VAR24[VAR2]->VAR27)
        {
            VAR28 *VAR29 = VAR24[VAR2]->VAR27;
            if (VAR29->VAR30 != VAR29->VAR31)
                FUN3(&VAR29->VAR30);
            FUN3(&VAR29);
        }
        FUN3(&VAR24[VAR2]->VAR32);
        FUN3(&VAR24[VAR2]->VAR33);
        FUN3(&VAR24[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR34; VAR2++)
    {
        FUN8(&VAR35[VAR2]->VAR15);
        FUN3(&VAR35[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR36; VAR2++)
    {
        FUN3(&VAR37[VAR2]->VAR38);
        FUN6(&VAR37[VAR2]->VAR20);
        FUN9(VAR37[VAR2]);
        FUN3(&VAR37[VAR2]->VAR39);
        FUN3(&VAR37[VAR2]);
    }
    if (VAR40)
        fclose(VAR40);
    FUN10(VAR41);
    FUN3(&VAR37);
    FUN3(&VAR35);
    FUN3(&VAR24);
    FUN3(&VAR14);
    FUN11();
    FUN10(VAR42);
    VAR43 = 0;
    FUN10(VAR44);
    VAR45 = 0;
    FUN12();
    FUN13();
    if (VAR46)
    {
        FUN14(NULL, VAR47, "", (int)VAR46);
        FUN15(255);
    }
    FUN15(VAR1);
}