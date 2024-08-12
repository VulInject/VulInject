static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    FUN2("", FUN3(VAR4->VAR7), VAR4->VAR8, VAR4->VAR9, VAR4->VAR10);
    if (VAR4->VAR7 == VAR11 || VAR4->VAR7 == VAR12)
        FUN4(VAR4->VAR13, VAR4->VAR10);
    VAR6 = VAR14;
    for (VAR5 = 0; VAR5 < VAR15 && VAR6 == VAR14; VAR5++)
    {
        VAR16 *VAR17 = &VAR2->VAR18[VAR5];
        VAR19 *VAR20 = VAR17->VAR17.VAR20;
        if (VAR20 && (VAR17->VAR21 & VAR22))
            VAR6 = FUN5(VAR20, VAR4);
    }
    FUN2("", VAR6, VAR4->VAR10);
    if (VAR4->VAR7 == VAR23 && VAR6 > 0)
        FUN4(VAR4->VAR13, VAR6);
    return VAR6;
}