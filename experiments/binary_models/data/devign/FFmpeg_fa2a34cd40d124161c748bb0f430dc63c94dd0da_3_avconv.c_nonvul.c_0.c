static void FUN1(void)
{
    int VAR1, VAR2;
    for (VAR1 = 0; VAR1 < VAR3; VAR1++)
    {
        FUN2(&VAR4[VAR1]->VAR5);
        for (VAR2 = 0; VAR2 < VAR4[VAR1]->VAR6; VAR2++)
        {
            FUN3(&VAR4[VAR1]->VAR7[VAR2]->VAR8);
            FUN3(&VAR4[VAR1]->VAR7[VAR2]);
        }
        FUN3(&VAR4[VAR1]->VAR7);
        for (VAR2 = 0; VAR2 < VAR4[VAR1]->VAR9; VAR2++)
        {
            FUN3(&VAR4[VAR1]->VAR10[VAR2]->VAR8);
            FUN3(&VAR4[VAR1]->VAR10[VAR2]);
        }
        FUN3(&VAR4[VAR1]->VAR10);
        FUN3(&VAR4[VAR1]->VAR11);
        FUN3(&VAR4[VAR1]);
    }
    FUN3(&VAR4);
    for (VAR1 = 0; VAR1 < VAR12; VAR1++)
    {
        VAR13 *VAR14 = VAR15[VAR1]->VAR16;
        if (!(VAR14->VAR17->VAR18 & VAR19) && VAR14->VAR20)
            FUN4(VAR14->VAR20);
        FUN5(VAR14);
        FUN6(&VAR15[VAR1]->VAR21);
        FUN3(&VAR15[VAR1]);
    }
    for (VAR1 = 0; VAR1 < VAR22; VAR1++)
    {
        VAR23 *VAR24 = VAR25[VAR1]->VAR26;
        while (VAR24)
        {
            VAR23 *VAR27 = VAR24->VAR27;
            FUN7(VAR24);
            VAR24 = VAR27;
        }
        VAR25[VAR1]->VAR26 = NULL;
        FUN8(&VAR25[VAR1]->VAR28);
        FUN3(&VAR25[VAR1]->VAR29);
        FUN3(&VAR25[VAR1]->VAR30);
        FUN3(&VAR25[VAR1]->VAR31);
        FUN3(&VAR25[VAR1]);
    }
    for (VAR1 = 0; VAR1 < VAR32; VAR1++)
    {
        FUN9(&VAR33[VAR1]->VAR16);
        FUN3(&VAR33[VAR1]);
    }
    for (VAR1 = 0; VAR1 < VAR34; VAR1++)
    {
        FUN10(&VAR35[VAR1]->VAR36);
        FUN10(&VAR35[VAR1]->VAR37);
        FUN6(&VAR35[VAR1]->VAR21);
        FUN3(&VAR35[VAR1]->VAR38);
        FUN3(&VAR35[VAR1]);
    }
    if (VAR39)
        fclose(VAR39);
    FUN11(VAR40);
    FUN3(&VAR35);
    FUN3(&VAR33);
    FUN3(&VAR25);
    FUN3(&VAR15);
    FUN12();
    FUN13();
    if (VAR41)
    {
        FUN14(NULL, VAR42, "", (int)VAR41);
        FUN15(255);
    }
}