static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9[0];
    double VAR10 = 0;
    if ((VAR5->VAR11 & VAR12))
    {
        if (VAR5->VAR13 >= 0.0)
            VAR10 = VAR5->VAR13;
        else
            VAR10 = VAR5->VAR13 = FUN2(VAR2, VAR5->VAR14, VAR5->VAR15);
        FUN3(VAR2, "", VAR10);
    }
    if (VAR10 < VAR5->VAR16)
    {
        ThreadData VAR17;
        VAR17.VAR18 = VAR5->VAR14;
        VAR17.VAR19 = VAR5->VAR15;
        VAR17.VAR20 = VAR3;
        VAR17.VAR21 = VAR5->VAR22 - VAR17.VAR20;
        VAR5->VAR23 = FUN4(VAR8, VAR8->VAR24, VAR8->VAR25);
        if (!VAR5->VAR23)
            return FUN5(VAR26);
        FUN6(VAR5->VAR23, VAR5->VAR14);
        FUN3(VAR2, "");
        VAR2->VAR27->FUN7(VAR2, VAR28, &VAR17, NULL, FUN8(VAR8->VAR25, FUN9(VAR2)));
        return 1;
    }
    return 0;
}