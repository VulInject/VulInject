static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    int VAR6, VAR7;
    int VAR8;
    VAR9 = VAR10 || VAR11;
    VAR12 = VAR13 || VAR14;
    VAR6 = FUN2(&VAR5, VAR3);
    if (VAR6 < 0)
        return VAR6;
    VAR15 = FUN3(VAR5->VAR16, sizeof(*VAR15));
    VAR17 = FUN3(VAR5->VAR16, sizeof(*VAR17));
    VAR18 = FUN3(VAR5->VAR16, sizeof(*VAR18));
    for (VAR7 = 0; VAR7 < VAR5->VAR16; VAR7++)
    {
        if (VAR19)
        {
            VAR6 = FUN4(VAR5, VAR5->VAR20[VAR7], VAR19);
            VAR21;
            else VAR18[VAR7] = VAR6;
            VAR6 = 0;
        }
        else
        {
            VAR18[VAR7] = 1;
        }
    }
    if (VAR9 || VAR12)
    {
        if (VAR10 && VAR13 && VAR2->VAR22->VAR23 & VAR24)
            VAR8 = VAR25;
        else if (VAR13 && !VAR10)
            VAR8 = VAR26;
        else
            VAR8 = VAR27;
        if (VAR10 || VAR13)
            FUN5(VAR2, VAR8);
        VAR6 = FUN6(VAR2, VAR5);
        if (VAR10 || VAR13)
            FUN7(VAR2);
        VAR21;
    }
    if (VAR28)
    {
        VAR6 = FUN8(VAR2, VAR5);
        VAR21;
    }
    if (VAR29)
    {
        VAR6 = FUN9(VAR2, VAR5);
        VAR21;
    }
    if (VAR30)
    {
        VAR6 = FUN10(VAR2, VAR5);
        VAR21;
    }
    if (VAR31)
    {
        VAR6 = FUN11(VAR2, VAR5);
        VAR21;
    }
VAR32:
    FUN12(&VAR5);
    FUN13(&VAR15);
    FUN13(&VAR17);
    FUN13(&VAR18);
    return VAR6;
}