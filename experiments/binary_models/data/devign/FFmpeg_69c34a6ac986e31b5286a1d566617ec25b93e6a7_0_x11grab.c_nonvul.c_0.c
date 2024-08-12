static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    int VAR8 = VAR6->VAR8;
    int VAR9 = VAR6->VAR9;
    int VAR10 = VAR6->VAR10;
    int VAR11 = VAR6->VAR11;
    VAR12 *VAR13 = VAR6->VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20, VAR21;
    int VAR22 = VAR2->VAR23 >> 3;
    VAR24 *VAR25 = VAR2->VAR26;
    Window VAR27;
    XSetWindowAttributes VAR28;
    Bool VAR29;
    Window VAR30;
    int VAR31;
    VAR27 = FUN2(VAR13);
    VAR29 = FUN3(VAR13, VAR27, &VAR30, &VAR30, &VAR31, &VAR31, &VAR31, &VAR31, &VAR31);
    if (!VAR29)
        return;
    if (VAR2->VAR23 != 24 && VAR2->VAR23 != 32)
        return;
    if (!VAR6->VAR32)
        VAR6->VAR32 = FUN4(VAR13, VAR33);
    VAR28.VAR34 = VAR6->VAR32;
    FUN5(VAR13, VAR27, VAR35, &VAR28);
    VAR15 = FUN6(VAR13);
    if (!VAR15)
    {
        FUN7(VAR4, VAR36, "");
        VAR6->VAR37 = 0;
        return;
    }
    VAR16 = VAR15->VAR16 - VAR15->VAR38;
    VAR17 = VAR15->VAR17 - VAR15->VAR39;
    VAR20 = FUN8((VAR17 + VAR15->VAR11), (VAR11 + VAR9));
    VAR21 = FUN8((VAR16 + VAR15->VAR10), (VAR10 + VAR8));
    for (VAR18 = FUN9(VAR17, VAR9); VAR18 < VAR20; VAR18++)
    {
        for (VAR19 = FUN9(VAR16, VAR8); VAR19 < VAR21; VAR19++)
        {
            int VAR40 = (VAR18 - VAR17) * VAR15->VAR10 + VAR19 - VAR16;
            int VAR41 = ((VAR18 - VAR9) * VAR10 + VAR19 - VAR8) * VAR22;
            int VAR42 = (VAR24)(VAR15->VAR43[VAR40] >> 0);
            int VAR44 = (VAR24)(VAR15->VAR43[VAR40] >> 8);
            int VAR45 = (VAR24)(VAR15->VAR43[VAR40] >> 16);
            int VAR46 = (VAR24)(VAR15->VAR43[VAR40] >> 24);
            if (VAR46 == 255)
            {
                VAR25[VAR41 + 0] = VAR42;
                VAR25[VAR41 + 1] = VAR44;
                VAR25[VAR41 + 2] = VAR45;
            }
            else if (VAR46)
            {
                VAR25[VAR41 + 0] = VAR42 + (VAR25[VAR41 + 0] * (255 - VAR46) + 255 / 2) / 255;
                VAR25[VAR41 + 1] = VAR44 + (VAR25[VAR41 + 1] * (255 - VAR46) + 255 / 2) / 255;
                VAR25[VAR41 + 2] = VAR45 + (VAR25[VAR41 + 2] * (255 - VAR46) + 255 / 2) / 255;
            }
        }
    }
    FUN10(VAR15);
    VAR15 = NULL;
}