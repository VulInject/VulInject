static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13;
    VAR11 = -1;
    VAR13 = -1;
    for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
    {
        VAR10 = FUN2(VAR2, VAR5, VAR12, VAR7 == VAR15 ? 1 : 0);
        VAR9 = &VAR2->VAR9[VAR10].VAR16;
        if ((VAR5 & VAR17) != VAR9->VAR18)
        {
            if (VAR19 != 0)
            {
                fprintf(VAR20, "" VAR21 "" VAR21 "" VAR21 "", VAR10, VAR2->VAR22, FUN3(VAR9->VAR23) ? "" : "", VAR9->VAR18, VAR9->VAR18 + VAR24, VAR5);
            }
            continue;
        }
        if (VAR19 != 0)
        {
            fprintf(VAR20, "" VAR21 "" VAR21 "" VAR21 "", VAR10, VAR2->VAR22, FUN3(VAR9->VAR23) ? "" : "", VAR9->VAR18, VAR5, VAR9->VAR25, VAR6 ? '' : '', VAR7 == VAR15 ? '' : '');
        }
        switch (FUN4(VAR4, VAR9->VAR23, VAR9->VAR25, 0, VAR6, VAR7))
        {
        case -3:
            return -1;
        case -2:
            VAR13 = -2;
            VAR11 = VAR10;
            break;
        case -1:
        default:
            break;
        case 0:
            VAR13 = 0;
            VAR11 = VAR10;
            goto VAR26;
        }
    }
    if (VAR11 != -1)
    {
    VAR26:
        if (VAR19 != 0)
        {
            fprintf(VAR20, "", VAR4->VAR27 & VAR17, VAR4->VAR28, VAR13);
        }
        FUN5(VAR4, &VAR2->VAR9[VAR11].VAR16.VAR25, VAR13, VAR6);
    }
    return VAR13;
}