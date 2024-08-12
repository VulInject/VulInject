static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    th_ycbcr_buffer VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR6;
    ogg_packet VAR13;
    int VAR14, VAR15;
    if (!VAR12)
    {
        FUN2(VAR9->VAR16, 1, &VAR13);
        if (VAR2->VAR17 & VAR18)
            if (FUN3(VAR2, 1))
                return -1;
        return 0;
    }
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        VAR7[VAR15].VAR19 = FUN4(VAR2->VAR19, 16) >> (VAR15 && VAR9->VAR20);
        VAR7[VAR15].VAR21 = FUN4(VAR2->VAR21, 16) >> (VAR15 && VAR9->VAR22);
        VAR7[VAR15].VAR23 = VAR12->VAR24[VAR15];
        VAR7[VAR15].VAR6 = VAR12->VAR6[VAR15];
    }
    if (VAR2->VAR17 & VAR25)
        if (FUN5(VAR2))
            return -1;
    VAR14 = FUN6(VAR9->VAR16, VAR7);
    if (VAR14)
    {
        const char *VAR26;
        switch (VAR14)
        {
        case -1:
            VAR26 = "";
            break;
        case VAR27:
            VAR26 = "";
            break;
        default:
            VAR26 = "";
            break;
        }
        FUN7(VAR2, VAR28, "", VAR26, VAR14);
        return -1;
    }
    if (VAR2->VAR17 & VAR18)
        if (FUN3(VAR2, 0))
            return -1;
    VAR14 = FUN2(VAR9->VAR16, 0, &VAR13);
    switch (VAR14)
    {
    case 0:
        return 0;
    case 1:
        break;
    default:
        FUN7(VAR2, VAR28, "", VAR14);
        return -1;
    }
    if (VAR5 < VAR13.VAR29)
    {
        FUN7(VAR2, VAR28, "");
        return -1;
    }
    memcpy(VAR4, VAR13.VAR30, VAR13.VAR29);
    VAR2->VAR31->VAR32 = VAR12->VAR32;
    VAR2->VAR31->VAR33 = !(VAR13.VAR34 & VAR9->VAR35);
    return VAR13.VAR29;
}