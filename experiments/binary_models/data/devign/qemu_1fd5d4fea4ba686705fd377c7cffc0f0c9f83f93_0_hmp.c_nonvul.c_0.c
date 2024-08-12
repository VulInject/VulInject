void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = FUN2(&VAR6);
    VAR7 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    for (VAR9 = VAR8; VAR9; VAR9 = VAR9->VAR14)
    {
        VAR11 = VAR9->VAR11;
        if (VAR11)
        {
            switch (VAR11->VAR15)
            {
            case VAR16:
                VAR13 = VAR11->VAR17.VAR18;
                FUN3(VAR2, ""%VAR19\"", VAR20[VAR11->VAR15], VAR13->VAR21 ? VAR13->VAR21 : "");
                FUN3(VAR2, "" VAR22 "", VAR13->VAR23);
                FUN3(VAR2, "" VAR24 "", VAR13->VAR25);
                FUN3(VAR2, "" VAR24 "", VAR13->VAR26);
                FUN3(VAR2, "" VAR27 "", VAR13->VAR28);
                FUN3(VAR2, "", VAR13->VAR29);
                FUN3(VAR2, "", VAR13->VAR30 ? "" : "");
                FUN3(VAR2, "", VAR13->VAR31 ? "" : "");
                break;
            default:
                break;
            }
        }
    }
    FUN4(VAR8);
}