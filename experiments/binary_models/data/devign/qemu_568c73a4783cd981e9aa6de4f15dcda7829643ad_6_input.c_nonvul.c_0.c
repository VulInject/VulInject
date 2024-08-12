static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5;
    int VAR6, VAR7 = -1;
    if (VAR2)
    {
        VAR7 = FUN2(VAR2);
    }
    switch (VAR4->VAR8)
    {
    case VAR9:
        switch (VAR4->VAR10.VAR11->VAR11->VAR8)
        {
        case VAR12:
            VAR6 = FUN3(VAR4->VAR10.VAR11->VAR11->VAR10.VAR13);
            VAR5 = VAR14[VAR6];
            FUN4(VAR7, VAR4->VAR10.VAR11->VAR11->VAR10.VAR13, VAR5, VAR4->VAR10.VAR11->VAR15);
            break;
        case VAR16:
            VAR5 = VAR14[VAR4->VAR10.VAR11->VAR11->VAR10.VAR6];
            FUN5(VAR7, VAR5, VAR4->VAR10.VAR11->VAR15);
            break;
        case VAR17:
            break;
        }
        break;
    case VAR18:
        VAR5 = VAR19[VAR4->VAR10.VAR20->VAR21];
        FUN6(VAR7, VAR5, VAR4->VAR10.VAR20->VAR15);
        break;
    case VAR22:
        VAR5 = VAR23[VAR4->VAR10.VAR24->VAR25];
        FUN7(VAR7, VAR5, VAR4->VAR10.VAR24->VAR26);
        break;
    case VAR27:
        VAR5 = VAR23[VAR4->VAR10.VAR28->VAR25];
        FUN8(VAR7, VAR5, VAR4->VAR10.VAR28->VAR26);
        break;
    case VAR29:
        break;
    }
}