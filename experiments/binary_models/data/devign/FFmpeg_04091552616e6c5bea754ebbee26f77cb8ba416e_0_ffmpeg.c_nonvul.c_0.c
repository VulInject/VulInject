static void FUN1(int VAR1)
{
    int VAR2, VAR3;
    if (VAR4)
    {
        int VAR5 = FUN2() / 1024;
        FUN3("", VAR5);
    }
    for (VAR2 = 0; VAR2 < VAR6; VAR2++)
    {
        VAR7 *VAR8 = VAR9[VAR2];
        FUN4(&VAR8->VAR10);
        for (VAR3 = 0; VAR3 < VAR8->VAR11; VAR3++)
        {
            FUN5(&VAR8->VAR12[VAR3]->VAR13);
            FUN5(&VAR8->VAR12[VAR3]);
        }
        FUN5(&VAR8->VAR12);
        for (VAR3 = 0; VAR3 < VAR8->VAR14; VAR3++)
        {
            FUN5(&VAR8->VAR15[VAR3]->VAR13);
            FUN5(&VAR8->VAR15[VAR3]);
        }
        FUN5(&VAR8->VAR15);
        FUN5(&VAR8->VAR16);
        FUN5(&VAR9[VAR2]);
    }
    FUN5(&VAR9);
    FUN5(&VAR17);
    for (VAR2 = 0; VAR2 < VAR18; VAR2++)
    {
        VAR19 *VAR20 = VAR21[VAR2];
        VAR22 *VAR23 = VAR20->VAR24;
        if (VAR23 && VAR23->VAR25 && !(VAR23->VAR25->VAR26 & VAR27))
            FUN6(&VAR23->VAR28);
        FUN7(VAR23);
        FUN8(&VAR20->VAR29);
        FUN5(&VAR21[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR30; VAR2++)
    {
        VAR31 *VAR32 = VAR33[VAR2];
        VAR34 *VAR35 = VAR32->VAR36;
        while (VAR35)
        {
            VAR34 *VAR37 = VAR35->VAR37;
            FUN9(VAR35);
            VAR35 = VAR37;
        }
        VAR32->VAR36 = NULL;
        FUN10(&VAR32->VAR38);
        FUN10(&VAR32->VAR39);
        FUN11(VAR32->VAR40);
        FUN5(&VAR32->VAR41);
        FUN12(VAR32->VAR42);
        FUN5(&VAR32->VAR43);
        FUN5(&VAR32->VAR44);
        FUN5(&VAR32->VAR45);
        VAR32->VAR46 = 0;
        FUN13(&VAR32->VAR47);
        FUN5(&VAR33[VAR2]);
    }
    FUN14();
    for (VAR2 = 0; VAR2 < VAR48; VAR2++)
    {
        FUN15(&VAR49[VAR2]->VAR24);
        FUN5(&VAR49[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR50; VAR2++)
    {
        VAR51 *VAR52 = VAR53[VAR2];
        FUN10(&VAR52->VAR54);
        FUN10(&VAR52->VAR55);
        FUN8(&VAR52->VAR56);
        FUN16(&VAR52->VAR57.VAR58);
        FUN10(&VAR52->VAR59.VAR60);
        FUN5(&VAR52->VAR61);
        FUN5(&VAR52->VAR62);
        FUN13(&VAR52->VAR63);
        FUN5(&VAR53[VAR2]);
    }
    if (VAR64)
        fclose(VAR64);
    FUN5(&VAR65);
    FUN5(&VAR53);
    FUN5(&VAR49);
    FUN5(&VAR33);
    FUN5(&VAR21);
    FUN17();
    FUN18();
    if (VAR66)
    {
        FUN19(NULL, VAR67, "", (int)VAR66);
    }
    else if (VAR1 && VAR68)
    {
        FUN19(NULL, VAR67, "");
    }
    FUN20();
}