static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3;
    unsigned int VAR4, VAR5;
    if ((VAR2->VAR6 & VAR7) && (VAR2->VAR8->VAR9.VAR10[2] & VAR11) && !(VAR2->VAR8->VAR9.VAR10[0] & VAR12))
    {
        FUN2(VAR13[VAR14], VAR15);
        FUN3(VAR2, VAR16);
        return;
    }
    VAR4 = VAR2->VAR17 & (1 << 10);
    VAR5 = VAR2->VAR17 & (1 << 9);
    FUN4("", VAR4 ? "" : "", VAR5 ? "" : "", VAR2->VAR18, VAR2->VAR19, VAR2->VAR20);
    VAR3 = FUN5();
    FUN6(VAR3, *(FUN7(VAR2)));
    FUN8(VAR3, VAR3, 31);
    if (VAR4)
        FUN9(VAR21[VAR2->VAR18], VAR21[VAR2->VAR19], VAR3);
    else
    {
        if (VAR5)
            FUN10(VAR21[VAR2->VAR18], VAR21[VAR2->VAR19], VAR3);
        else
            FUN11(VAR21[VAR2->VAR18], VAR21[VAR2->VAR19], VAR3);
    }
}