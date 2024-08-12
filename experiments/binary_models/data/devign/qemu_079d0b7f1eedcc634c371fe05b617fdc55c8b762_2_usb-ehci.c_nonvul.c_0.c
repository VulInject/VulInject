static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    if (!(VAR2->VAR10.VAR11 & VAR12))
    {
        fprintf(VAR13, "");
        return VAR14;
    }
    VAR2->VAR15 = (VAR2->VAR10.VAR11 & VAR16) >> VAR17;
    if (VAR2->VAR15 > VAR18)
    {
        fprintf(VAR13, "");
        return VAR14;
    }
    VAR2->VAR19 = (VAR2->VAR10.VAR11 & VAR20) >> VAR21;
    switch (VAR2->VAR19)
    {
    case 0:
        VAR2->VAR19 = VAR22;
        break;
    case 1:
        VAR2->VAR19 = VAR23;
        break;
    case 2:
        VAR2->VAR19 = VAR24;
        break;
    default:
        fprintf(VAR13, "");
        break;
    }
    if (FUN2(VAR2) != 0)
    {
        return VAR14;
    }
    VAR8 = FUN3(VAR2->VAR10.VAR25, VAR26);
    VAR9 = FUN3(VAR2->VAR10.VAR25, VAR27);
    VAR4 = FUN4(VAR2->VAR28, VAR9);
    VAR6 = FUN5(VAR4, VAR2->VAR19, VAR8);
    FUN6(&VAR2->VAR29, VAR2->VAR19, VAR6);
    FUN7(&VAR2->VAR29, &VAR2->VAR30);
    VAR7 = FUN8(VAR4, &VAR2->VAR29);
    FUN9(""
            "",
            VAR2->VAR31, VAR2->VAR10.VAR32, VAR2->VAR33, VAR2->VAR19, VAR2->VAR29.VAR34.VAR35, VAR2->VAR15, VAR8, VAR7);
    if (VAR7 > VAR18)
    {
        fprintf(VAR13, "");
        return VAR14;
    }
    return VAR7;
}