void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    VAR6 = FUN2(NULL);
    VAR8 = FUN3(NULL);
    if (VAR6->VAR10 && VAR8)
    {
        FUN4(VAR2, "");
        for (VAR9 = VAR8; VAR9; VAR9 = VAR9->VAR11)
        {
            FUN4(VAR2, "", VAR12[VAR9->VAR13->VAR14], VAR9->VAR13->VAR15 ? "" : "");
        }
        FUN4(VAR2, "");
    }
    if (VAR6->VAR10)
    {
        FUN4(VAR2, "", VAR16[VAR6->VAR17]);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR19);
        if (VAR6->VAR20)
        {
            FUN4(VAR2, "" VAR18 "", VAR6->VAR21);
        }
        if (VAR6->VAR22)
        {
            FUN4(VAR2, "" VAR18 "", VAR6->VAR23);
        }
        if (VAR6->VAR24)
        {
            FUN4(VAR2, "" VAR18 "", VAR6->VAR25);
        }
    }
    if (VAR6->VAR26)
    {
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR28 >> 10);
        FUN4(VAR2, "", VAR6->VAR27->VAR29);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR30 >> 10);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR31 >> 10);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR32);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR33);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR34);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR35 >> 10);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR36);
        if (VAR6->VAR27->VAR37)
        {
            FUN4(VAR2, "" VAR18 "", VAR6->VAR27->VAR37);
        }
    }
    if (VAR6->VAR38)
    {
        FUN4(VAR2, "" VAR18 "", VAR6->VAR39->VAR28 >> 10);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR39->VAR30 >> 10);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR39->VAR31 >> 10);
    }
    if (VAR6->VAR40)
    {
        FUN4(VAR2, "" VAR18 "", VAR6->VAR41->VAR42);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR41->VAR43 >> 10);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR41->VAR44);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR41->VAR45);
        FUN4(VAR2, "", VAR6->VAR41->VAR46);
        FUN4(VAR2, "" VAR18 "", VAR6->VAR41->VAR47);
    }
    if (VAR6->VAR48)
    {
        FUN4(VAR2, "" VAR18 "", VAR6->VAR49);
    }
    FUN5(VAR6);
    FUN6(VAR8);
}