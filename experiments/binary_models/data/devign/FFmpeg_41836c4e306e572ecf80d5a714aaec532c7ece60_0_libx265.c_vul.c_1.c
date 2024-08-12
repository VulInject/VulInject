static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    x265_picture VAR11;
    x265_picture VAR12 = {{0}};
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17 = 0;
    int VAR18;
    int VAR19;
    int VAR20;
    if (VAR6)
    {
        for (VAR20 = 0; VAR20 < 3; VAR20++)
        {
            VAR11.VAR21[VAR20] = VAR6->VAR22[VAR20];
            VAR11.VAR23[VAR20] = VAR6->VAR24[VAR20];
        }
        VAR11.VAR25 = VAR6->VAR25;
    }
    VAR19 = FUN2(VAR9->VAR26, &VAR14, &VAR18, VAR6 ? &VAR11 : NULL, &VAR12);
    if (VAR19 < 0)
        return VAR27;
    if (!VAR18)
        return 0;
    for (VAR20 = 0; VAR20 < VAR18; VAR20++)
        VAR17 += VAR14[VAR20].VAR28;
    VAR17 += VAR9->VAR29;
    VAR19 = FUN3(VAR4, VAR17);
    if (VAR19 < 0)
    {
        FUN4(VAR2, VAR30, "");
        return VAR19;
    }
    VAR16 = VAR4->VAR22;
    if (VAR9->VAR31)
    {
        memcpy(VAR16, VAR9->VAR31, VAR9->VAR29);
        VAR16 += VAR9->VAR29;
        FUN5(&VAR9->VAR31);
        VAR9->VAR29 = 0;
    }
    for (VAR20 = 0; VAR20 < VAR18; VAR20++)
    {
        memcpy(VAR16, VAR14[VAR20].VAR17, VAR14[VAR20].VAR28);
        VAR16 += VAR14[VAR20].VAR28;
        if (FUN6(VAR14[VAR20].VAR32))
            VAR4->VAR33 |= VAR34;
    }
    VAR4->VAR25 = VAR12.VAR25;
    VAR4->VAR35 = VAR12.VAR35;
    *VAR7 = 1;
    return 0;