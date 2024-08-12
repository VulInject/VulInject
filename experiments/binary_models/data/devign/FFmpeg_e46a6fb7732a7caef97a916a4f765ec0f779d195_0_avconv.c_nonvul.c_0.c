static void FUN1(int VAR1)
{
    int VAR2, VAR3;
    for (VAR2 = 0; VAR2 < VAR4; VAR2++)
    {
        VAR5 *VAR6 = VAR7[VAR2];
        FUN2(&VAR6->VAR8);
        for (VAR3 = 0; VAR3 < VAR6->VAR9; VAR3++)
        {
            while (FUN3(VAR6->VAR10[VAR3]->VAR11))
            {
                VAR12 *VAR13;
                FUN4(VAR6->VAR10[VAR3]->VAR11, &VAR13, sizeof(VAR13), NULL);
                FUN5(&VAR13);
            }
            FUN6(VAR6->VAR10[VAR3]->VAR11);
            FUN7(&VAR6->VAR10[VAR3]->VAR14);
            FUN8(&VAR6->VAR10[VAR3]->VAR15);
            FUN8(&VAR6->VAR10[VAR3]);
        }
        FUN8(&VAR6->VAR10);
        for (VAR3 = 0; VAR3 < VAR6->VAR16; VAR3++)
        {
            FUN8(&VAR6->VAR17[VAR3]->VAR15);
            FUN8(&VAR6->VAR17[VAR3]->VAR18);
            FUN8(&VAR6->VAR17[VAR3]->VAR19);
            FUN8(&VAR6->VAR17[VAR3]->VAR20);
            FUN8(&VAR6->VAR17[VAR3]);
        }
        FUN8(&VAR6->VAR17);
        FUN8(&VAR6->VAR21);
        FUN8(&VAR7[VAR2]);
    }
    FUN8(&VAR7);
    for (VAR2 = 0; VAR2 < VAR22; VAR2++)
    {
        VAR23 *VAR24 = VAR25[VAR2];
        VAR26 *VAR27 = VAR24->VAR28;
        if (VAR27 && VAR27->VAR29 && !(VAR27->VAR29->VAR30 & VAR31) && VAR27->VAR32)
            FUN9(VAR27->VAR32);
        FUN10(VAR27);
        FUN11(&VAR24->VAR33);
        FUN8(&VAR25[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR34; VAR2++)
    {
        VAR35 *VAR36 = VAR37[VAR2];
        for (VAR3 = 0; VAR3 < VAR36->VAR38; VAR3++)
            FUN12(&VAR36->VAR39[VAR3]);
        FUN8(&VAR36->VAR39);
        FUN8(&VAR36->VAR40);
        FUN5(&VAR36->VAR41);
        FUN13(VAR36->VAR42);
        FUN14(&VAR36->VAR43);
        FUN8(&VAR36->VAR44);
        FUN8(&VAR36->VAR45);
        FUN8(&VAR36->VAR46);
        FUN14(&VAR36->VAR47);
        if (VAR36->VAR48)
        {
            while (FUN3(VAR36->VAR48))
            {
                AVPacket VAR49;
                FUN15(NULL, VAR50, "");
                FUN4(VAR36->VAR48, &VAR49, sizeof(VAR49), NULL);
                FUN16(&VAR49);
            }
            FUN6(VAR36->VAR48);
        }
        FUN8(&VAR37[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR51; VAR2++)
    {
        FUN17(&VAR52[VAR2]->VAR28);
        FUN8(&VAR52[VAR2]);
    }
    for (VAR2 = 0; VAR2 < VAR53; VAR2++)
    {
        VAR54 *VAR55 = VAR56[VAR2];
        FUN5(&VAR55->VAR57);
        FUN5(&VAR55->VAR58);
        FUN11(&VAR55->VAR59);
        FUN8(&VAR55->VAR60);
        FUN8(&VAR55->VAR61);
        FUN14(&VAR55->VAR62);
        FUN8(&VAR56[VAR2]);
    }
    if (VAR63)
        fclose(VAR63);
    FUN18(VAR64);
    FUN8(&VAR56);
    FUN8(&VAR52);
    FUN8(&VAR37);
    FUN8(&VAR25);
    FUN19();
    FUN20();
    if (VAR65)
    {
        FUN15(NULL, VAR50, "", (int)VAR65);
        FUN21(255);
    }
}