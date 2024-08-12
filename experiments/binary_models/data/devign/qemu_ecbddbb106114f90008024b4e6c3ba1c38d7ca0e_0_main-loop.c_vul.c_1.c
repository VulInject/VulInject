static int FUN1(int64_t VAR1)
{
    VAR2 *VAR3 = FUN2();
    GPollFD VAR4[1024 * 2];
    int VAR5 = 0;
    int VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = &VAR14;
    gint VAR15;
    int64_t VAR16;
    static struct timeval VAR17;
    fd_set VAR18, VAR19, VAR20;
    int VAR21;
    VAR7 = 0;
    for (VAR11 = VAR22; VAR11 != NULL; VAR11 = VAR11->VAR23)
    {
        VAR7 |= VAR11->FUN3(VAR11->VAR24);
    }
    if (VAR7 != 0)
    {
        return VAR7;
    }
    FUN4(&VAR18);
    FUN4(&VAR19);
    FUN4(&VAR20);
    VAR21 = FUN5(VAR25, &VAR18, &VAR19, &VAR20);
    if (VAR21 >= 0)
    {
        VAR5 = FUN6(VAR21 + 1, &VAR18, &VAR19, &VAR20, &VAR17);
        if (VAR5 != 0)
        {
            VAR1 = 0;
        }
        if (VAR5 > 0)
        {
            FUN7(VAR25, VAR21, &VAR18, &VAR19, &VAR20);
        }
    }
    FUN8(VAR3, &VAR26);
    VAR9 = FUN9(VAR3, VAR26, &VAR15, VAR4, FUN10(VAR4));
    FUN11(VAR9 <= FUN10(VAR4));
    for (VAR8 = 0; VAR8 < VAR13->VAR27; VAR8++)
    {
        VAR4[VAR9 + VAR8].VAR28 = (VAR29)VAR13->VAR30[VAR8];
        VAR4[VAR9 + VAR8].VAR30 = VAR31;
    }
    if (VAR15 < 0)
    {
        VAR16 = -1;
    }
    else
    {
        VAR16 = (VAR32)VAR15 * (VAR32)VAR33;
    }
    VAR16 = FUN12(VAR16, VAR1);
    FUN13();
    VAR6 = FUN14(VAR4, VAR9 + VAR13->VAR27, VAR16);
    FUN15();
    if (VAR6 > 0)
    {
        for (VAR8 = 0; VAR8 < VAR13->VAR27; VAR8++)
        {
            VAR13->VAR34[VAR8] = VAR4[VAR9 + VAR8].VAR34;
        }
        for (VAR8 = 0; VAR8 < VAR13->VAR27; VAR8++)
        {
            if (VAR13->VAR34[VAR8] && VAR13->VAR35[VAR8])
            {
                VAR13->VAR35[VAR8](VAR13->VAR24[VAR8]);
            }
        }
    }
    if (FUN16(VAR3, VAR26, VAR4, VAR9))
    {
        FUN17(VAR3);
    }
    return VAR5 || VAR6;