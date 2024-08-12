static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    if (!(VAR2->VAR11.VAR12 & VAR13))
    {
        fprintf(VAR14, "");
        return VAR15;
    }
    VAR2->VAR16 = (VAR2->VAR11.VAR12 & VAR17) >> VAR18;
    if (VAR2->VAR16 > VAR19)
    {
        fprintf(VAR14, "");
        return VAR15;
    }
    VAR2->VAR20 = (VAR2->VAR11.VAR12 & VAR21) >> VAR22;
    switch (VAR2->VAR20)
    {
    case 0:
        VAR2->VAR20 = VAR23;
        break;
    case 1:
        VAR2->VAR20 = VAR24;
        break;
    case 2:
        VAR2->VAR20 = VAR25;
        break;
    default:
        fprintf(VAR14, "");
        break;
    }
    if ((VAR2->VAR16 && VAR2->VAR20 != VAR24) && (FUN2(VAR2, VAR2->VAR16, 0) != 0))
    {
        return VAR15;
    }
    VAR9 = FUN3(VAR2->VAR11.VAR26, VAR27);
    VAR10 = FUN3(VAR2->VAR11.VAR26, VAR28);
    VAR7 = VAR29;
    for (VAR8 = 0; VAR8 < VAR30; VAR8++)
    {
        VAR4 = &VAR2->VAR31->VAR32[VAR8];
        VAR6 = VAR4->VAR6;
        if (!(VAR2->VAR31->VAR33[VAR8] & (VAR34)))
        {
            FUN4("", VAR8, VAR2->VAR31->VAR33[VAR8]);
            continue;
        }
        VAR2->VAR35.VAR20 = VAR2->VAR20;
        VAR2->VAR35.VAR36 = VAR10;
        VAR2->VAR35.VAR37 = VAR9;
        VAR2->VAR35.VAR38 = VAR2->VAR39;
        VAR2->VAR35.VAR40 = VAR2->VAR16;
        VAR7 = FUN5(VAR6, &VAR2->VAR35);
        FUN4("", VAR2->VAR41, VAR2->VAR11.VAR42, VAR2->VAR43, VAR2->VAR20, VAR2->VAR35.VAR40, VAR2->VAR16, VAR9, VAR7);
        if (VAR7 != VAR29)
        {
            break;
        }
    }
    if (VAR7 > VAR19)
    {
        fprintf(VAR14, "");
        return VAR15;
    }
    return VAR7;
}