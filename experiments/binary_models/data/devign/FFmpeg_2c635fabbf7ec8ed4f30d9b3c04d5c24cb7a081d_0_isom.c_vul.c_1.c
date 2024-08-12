int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    int VAR9 = FUN2(VAR6);
    FUN2(VAR6);
    FUN3(VAR6);
    FUN4(VAR6);
    FUN4(VAR6);
    if (FUN5(VAR4->VAR10))
    {
        FUN6(VAR2, VAR11, "");
        return -1;
    }
    VAR4->VAR10->VAR12 = FUN7(VAR13, VAR9);
    FUN8(VAR2, "", VAR9);
    VAR7 = FUN9(VAR2, VAR6, &VAR8);
    if (VAR8 == VAR14)
    {
        FUN8(VAR2, "", VAR7);
        if (!VAR7 || (VAR15)VAR7 > (1 << 30))
            return -1;
        FUN10(VAR4->VAR10->VAR16);
        if (FUN11(VAR4->VAR10, VAR7))
            return FUN12(VAR17);
        FUN13(VAR6, VAR4->VAR10->VAR16, VAR7);
        if (VAR4->VAR10->VAR12 == VAR18)
        {
            MPEG4AudioConfig VAR19 = {0};
            FUN14(&VAR19, VAR4->VAR10->VAR16, VAR4->VAR10->VAR20 * 8, 1);
            VAR4->VAR10->VAR21 = VAR19.VAR21;
            if (VAR19.VAR22 == 29 && VAR19.VAR23 < 3)
                VAR4->VAR10->VAR24 = VAR25[VAR19.VAR23];
            else if (VAR19.VAR26)
                VAR4->VAR10->VAR24 = VAR19.VAR26;
            else
                VAR4->VAR10->VAR24 = VAR19.VAR24;
            FUN8(VAR2, ""
                        "",
                    VAR4->VAR10->VAR21, VAR19.VAR22, VAR19.VAR27, VAR19.VAR24, VAR19.VAR26);
            if (!(VAR4->VAR10->VAR12 = FUN7(VAR28, VAR19.VAR22)))
                VAR4->VAR10->VAR12 = VAR18;
        }
    }
    return 0;
}