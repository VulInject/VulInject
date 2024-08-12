static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    int VAR7;
    if (!(VAR2->VAR8.VAR9 & VAR10))
    {
        fprintf(VAR11, "");
        return VAR12;
    }
    VAR2->VAR13 = (VAR2->VAR8.VAR9 & VAR14) >> VAR15;
    if (VAR2->VAR13 > VAR16)
    {
        FUN2(VAR2->VAR17->VAR18, "");
        return VAR12;
    }
    VAR2->VAR19 = (VAR2->VAR8.VAR9 & VAR20) >> VAR21;
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
        fprintf(VAR11, "");
        break;
    }
    if (FUN3(VAR2) != 0)
    {
        return VAR12;
    }
    VAR7 = FUN4(VAR2->VAR17->VAR25.VAR26, VAR27);
    VAR5 = FUN5(VAR2->VAR17->VAR28, VAR2->VAR19, VAR7);
    FUN6(&VAR2->VAR29, VAR2->VAR19, VAR5, VAR2->VAR30);
    FUN7(&VAR2->VAR29, &VAR2->VAR31);
    FUN8(VAR2->VAR17, VAR2, VAR3);
    VAR6 = FUN9(VAR2->VAR17->VAR28, &VAR2->VAR29);
    FUN10(""
            "",
            VAR32->VAR33, VAR32->VAR25.VAR34, VAR32->VAR30, VAR32->VAR19, VAR32->VAR29.VAR35.VAR36, VAR32->VAR13, VAR7, VAR6);
    if (VAR6 > VAR16)
    {
        fprintf(VAR11, "");
        return VAR12;
    }
    return VAR6;
}