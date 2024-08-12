static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    FUN2("", FUN3(VAR4->VAR7), VAR4->VAR8, VAR4->VAR9, VAR4->VAR10);
    if (VAR4->VAR7 == VAR11)
        FUN4(VAR4->VAR12, VAR4->VAR10);
    VAR6 = VAR13;
    for (VAR5 = 0; VAR5 < VAR14 && VAR6 == VAR13; VAR5++)
    {
        VAR15 *VAR16 = &VAR2->VAR17[VAR5];
        VAR18 *VAR19 = VAR16->VAR16.VAR19;
        if (VAR19 && (VAR16->VAR20 & VAR21))
            VAR6 = VAR19->FUN5(VAR19, VAR4);
    }
    FUN2("", VAR6, VAR4->VAR10);
    if (VAR4->VAR7 == VAR22 && VAR6 > 0)
        FUN4(VAR4->VAR12, VAR6);
    return VAR6;
}