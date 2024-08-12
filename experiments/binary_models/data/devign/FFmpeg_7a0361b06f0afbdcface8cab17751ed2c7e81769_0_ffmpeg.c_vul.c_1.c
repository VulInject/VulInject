static void FUN1(int VAR1)
{
    int VAR2, VAR3;
    if (VAR4)
    {
        int VAR5 = FUN2() / 1024;
        FUN3(NULL, VAR6, "", VAR5);
    }
    for (VAR2 = 0; VAR2 < VAR7; VAR2++)
    {
        VAR8 *VAR9 = VAR10[VAR2];
        FUN4(&VAR9->VAR11);
        for (VAR3 = 0; VAR3 < VAR9->VAR12; VAR3++)
        {
            FUN5(&VAR9->VAR13[VAR3]->VAR14);
            FUN5(&VAR9->VAR13[VAR3]);
        }
        FUN5(&VAR9->VAR13);
        for (VAR3 = 0; VAR3 < VAR9->VAR15; VAR3++)
        {
            FUN5(&VAR9->VAR16[VAR3]->VAR14);
            FUN5(&VAR9->VAR16[VAR3]);
        }
        FUN5(&VAR9->VAR16);
        FUN5(&VAR9->VAR17);
        FUN5(&VAR10[VAR2]);
    }
    FUN5(&VAR10);
    FUN5(&VAR18);
    for (VAR2 = 0; VAR2 < VAR19; VAR2++)
    {
        VAR20 *VAR21 = VAR22[VAR2];
        VAR23 *VAR24;
        if (!VAR21)
            continue;
        VAR24 = VAR21->VAR25;
        if (VAR24 && VAR24->VAR26 && !(VAR24->VAR26->VAR27 & VAR28))
            FUN6(&VAR24->VAR29);
        FUN7(VAR24);
        FUN8(&VAR21->VAR30);
        FUN5(&VAR22[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR31; VAR2++)
    {
        VAR32 *VAR33 = VAR34[VAR2];
        VAR35 *VAR36;
        if (!VAR33)
            continue;
        VAR36 = VAR33->VAR37;
        while (VAR36)
        {
            VAR35 *VAR38 = VAR36->VAR38;
            FUN9(VAR36);
            VAR36 = VAR38;
        }
        VAR33->VAR37 = NULL;
        FUN10(&VAR33->VAR39);
        FUN10(&VAR33->VAR40);
        FUN11(VAR33->VAR41);
        FUN5(&VAR33->VAR42);
        FUN12(VAR33->VAR43);
        FUN5(&VAR33->VAR44);
        FUN5(&VAR33->VAR45);
        FUN5(&VAR33->VAR46);
        VAR33->VAR47 = 0;
        FUN13(&VAR33->VAR48);
        FUN5(&VAR34[VAR2]);
    }
    FUN14();
    for (VAR2 = 0; VAR2 < VAR49; VAR2++)
    {
        FUN15(&VAR50[VAR2]->VAR25);
        FUN5(&VAR50[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR51; VAR2++)
    {
        VAR52 *VAR53 = VAR54[VAR2];
        FUN10(&VAR53->VAR55);
        FUN10(&VAR53->VAR56);
        FUN8(&VAR53->VAR57);
        FUN16(&VAR53->VAR58.VAR59);
        FUN10(&VAR53->VAR60.VAR61);
        FUN5(&VAR53->VAR62);
        FUN5(&VAR53->VAR63);
        FUN13(&VAR53->VAR64);
        FUN5(&VAR54[VAR2]);
    }
    if (VAR65)
    {
        if (fclose(VAR65))
            FUN3(NULL, VAR66, "", FUN17(FUN18(VAR67)));
    }
    FUN5(&VAR68);
    FUN5(&VAR54);
    FUN5(&VAR50);
    FUN5(&VAR34);
    FUN5(&VAR22);
    FUN19();
    FUN20();
    if (VAR69)
    {
        FUN3(NULL, VAR6, "", (int)VAR69);
    }
    else if (VAR1 && VAR70)
    {
        FUN3(NULL, VAR6, "");
    }
    FUN21();
    VAR71 = 1;