FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR5;
    int VAR6 = VAR4->VAR6;
    int VAR7 = VAR4->VAR7;
    int VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR4->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17, VAR18;
    int VAR19 = VAR2->VAR20 >> 3;
    VAR21 *VAR22 = VAR2->VAR23;
    Cursor VAR24;
    Window VAR25;
    XSetWindowAttributes VAR26;
    if (VAR2->VAR20 != 24 && VAR2->VAR20 != 32)
        return;
    VAR24 = FUN2(VAR10, VAR27);
    VAR25 = FUN3(VAR10);
    VAR26.VAR28 = VAR24;
    FUN4(VAR10, VAR25, VAR29, &VAR26);
    VAR12 = FUN5(VAR10);
    VAR13 = VAR12->VAR13 - VAR12->VAR30;
    VAR14 = VAR12->VAR14 - VAR12->VAR31;
    VAR17 = FUN6((VAR14 + VAR12->VAR8), (VAR8 + VAR6));
    VAR18 = FUN6((VAR13 + VAR12->VAR7), (VAR7 + VAR5));
    for (VAR15 = FUN7(VAR14, VAR6); VAR15 < VAR17; VAR15++)
    {
        for (VAR16 = FUN7(VAR13, VAR5); VAR16 < VAR18; VAR16++)
        {
            int VAR32 = (VAR15 - VAR14) * VAR12->VAR7 + VAR16 - VAR13;
            int VAR33 = ((VAR15 - VAR6) * VAR7 + VAR16 - VAR5) * VAR19;
            int VAR34 = (VAR21)(VAR12->VAR35[VAR32] >> 0);
            int VAR36 = (VAR21)(VAR12->VAR35[VAR32] >> 8);
            int VAR37 = (VAR21)(VAR12->VAR35[VAR32] >> 16);
            int VAR38 = (VAR21)(VAR12->VAR35[VAR32] >> 24);
            if (VAR38 == 255)
            {
                VAR22[VAR33 + 0] = VAR34;
                VAR22[VAR33 + 1] = VAR36;
                VAR22[VAR33 + 2] = VAR37;
            }
            else if (VAR38)
            {
                VAR22[VAR33 + 0] = VAR34 + (VAR22[VAR33 + 0] * (255 - VAR38) + 255 / 2) / 255;
                VAR22[VAR33 + 1] = VAR36 + (VAR22[VAR33 + 1] * (255 - VAR38) + 255 / 2) / 255;
                VAR22[VAR33 + 2] = VAR37 + (VAR22[VAR33 + 2] * (255 - VAR38) + 255 / 2) / 255;
            }
        }
    }
    FUN8(VAR12);
    VAR12 = NULL;
}