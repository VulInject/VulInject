static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    int VAR4;
    if ((VAR2->VAR5 & VAR6) && (VAR2->VAR7->VAR8.VAR9[2] & VAR10) && !((VAR2->VAR7->VAR8.VAR9[2] & VAR11)))
    {
        FUN2(VAR12[VAR13], VAR14);
        FUN3(VAR2, VAR15);
    }
    VAR3 = VAR2->VAR16 & 3;
    switch (VAR3)
    {
    case 0:
        FUN4("", VAR2->VAR17, VAR2->VAR18, VAR2->VAR19);
        if (VAR2->VAR17)
            FUN5(VAR20[VAR2->VAR17], VAR20[VAR2->VAR18], VAR20[VAR2->VAR19]);
        break;
    case 2:
        FUN4("", VAR2->VAR17, VAR2->VAR18, VAR2->VAR19);
        if (VAR2->VAR17)
        {
            TCGv VAR21 = FUN6();
            VAR4 = FUN7();
            FUN2(VAR21, 1);
            FUN8(VAR22, VAR20[VAR2->VAR18], VAR20[VAR2->VAR19], VAR4);
            FUN2(VAR21, 0);
            FUN9(VAR4);
            FUN10(VAR20[VAR2->VAR17], VAR21);
            FUN11(VAR21);
        }
        break;
    case 3:
        FUN4("", VAR2->VAR17, VAR2->VAR18, VAR2->VAR19);
        VAR4 = FUN7();
        if (VAR2->VAR17)
        {
            TCGv VAR21 = FUN6();
            FUN2(VAR21, 1);
            FUN8(VAR23, VAR20[VAR2->VAR18], VAR20[VAR2->VAR19], VAR4);
            FUN2(VAR21, 0);
            FUN9(VAR4);
            FUN10(VAR20[VAR2->VAR17], VAR21);
            FUN11(VAR21);
        }
        break;
    default:
        FUN12(VAR2->VAR7, "", VAR2->VAR16);
        break;
    }
}