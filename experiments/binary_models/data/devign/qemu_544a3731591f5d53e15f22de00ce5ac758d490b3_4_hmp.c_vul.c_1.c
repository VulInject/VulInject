void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR6 = FUN2(NULL);
    for (VAR7 = VAR6; VAR7; VAR7 = VAR7->VAR8)
    {
        int VAR9 = '';
        if (VAR7->VAR10->VAR11 == FUN3())
        {
            VAR9 = '';
        }
        FUN4(VAR2, "" VAR12 "", VAR9, VAR7->VAR10->VAR11);
        switch (VAR7->VAR10->VAR13)
        {
        case VAR14:
            FUN4(VAR2, "" VAR15, VAR7->VAR10->VAR16.VAR17->VAR18);
            break;
        case VAR19:
            FUN4(VAR2, "" VAR15, VAR7->VAR10->VAR16.VAR20->VAR21);
            break;
        case VAR22:
            FUN4(VAR2, "" VAR15, VAR7->VAR10->VAR16.VAR23->VAR18);
            FUN4(VAR2, "" VAR15, VAR7->VAR10->VAR16.VAR23->VAR24);
            break;
        case VAR25:
            FUN4(VAR2, "" VAR15, VAR7->VAR10->VAR16.VAR26->VAR27);
            break;
        case VAR28:
            FUN4(VAR2, "" VAR15, VAR7->VAR10->VAR16.VAR29->VAR27);
            break;
        default:
            break;
        }
        if (VAR7->VAR10->VAR30)
        {
            FUN4(VAR2, "");
        }
        FUN4(VAR2, "" VAR12 "", VAR7->VAR10->VAR31);
    }
    FUN5(VAR6);
}