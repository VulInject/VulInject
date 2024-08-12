static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3[2];
    unsigned int VAR4;
    if ((VAR2->VAR5 & VAR6) && (VAR2->VAR7->VAR8.VAR9[2] & VAR10) && !(VAR2->VAR7->VAR8.VAR9[0] & VAR11))
    {
        FUN2(VAR12[VAR13], VAR14);
        FUN3(VAR2, VAR15);
        return;
    }
    VAR4 = VAR2->VAR16 & 3;
    VAR3[0] = FUN4();
    VAR3[1] = FUN4();
    if (VAR2->VAR17)
    {
        FUN5("", VAR2->VAR18, VAR2->VAR19, VAR2->VAR16);
        FUN6(VAR20[VAR2->VAR18], VAR3[1], VAR20[VAR2->VAR19], *(FUN7(VAR2)));
        goto VAR21;
    }
    if (VAR4 >= 1 && VAR4 <= 3 && !((VAR2->VAR7->VAR8.VAR9[2] & VAR22)))
    {
    }
    switch (VAR4)
    {
    case 0:
        FUN5("", VAR2->VAR18, VAR2->VAR19, VAR2->VAR23);
        FUN6(VAR20[VAR2->VAR18], VAR3[1], VAR20[VAR2->VAR19], VAR20[VAR2->VAR23]);
        break;
    case 1:
        FUN5("", VAR2->VAR18, VAR2->VAR19, VAR2->VAR23);
        FUN8(VAR3[0], VAR20[VAR2->VAR18], VAR20[VAR2->VAR19], VAR20[VAR2->VAR23]);
        break;
    case 2:
        FUN5("", VAR2->VAR18, VAR2->VAR19, VAR2->VAR23);
        FUN8(VAR3[0], VAR20[VAR2->VAR18], VAR20[VAR2->VAR19], VAR20[VAR2->VAR23]);
        break;
    case 3:
        FUN5("", VAR2->VAR18, VAR2->VAR19, VAR2->VAR23);
        FUN6(VAR3[0], VAR20[VAR2->VAR18], VAR20[VAR2->VAR19], VAR20[VAR2->VAR23]);
        break;
    default:
        FUN9(VAR2->VAR7, "", VAR4);
        break;
    }
VAR21:
    FUN10(VAR3[0]);
    FUN10(VAR3[1]);
}