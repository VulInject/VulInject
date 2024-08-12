static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR5->VAR2->VAR9[VAR3];
    VAR10 *VAR11 = &VAR5->VAR12->VAR9[VAR3];
    VAR13 *VAR14;
    int VAR15;
    if (VAR5->VAR16 && VAR8->VAR17->VAR18 == VAR19)
    {
        if (!VAR8->VAR17->VAR20 || (VAR8->VAR17->VAR20 >= 3 && FUN2(VAR8->VAR17->VAR21) == 1) || (VAR8->VAR17->VAR20 >= 4 && FUN3(VAR8->VAR17->VAR21) == 1))
            return 0;
        FUN4(VAR5->VAR2, VAR22, "");
        if (!(VAR14 = FUN5("")))
        {
            FUN4(VAR2, VAR23, ""
                                      "");
            return VAR24;
        }
        VAR11->VAR14 = VAR14;
        VAR11->VAR25 = FUN6(NULL);
        if (!VAR11->VAR25)
            return FUN7(VAR26);
        FUN8(&VAR8->VAR17->VAR21);
        VAR8->VAR17->VAR20 = 0;
        VAR15 = FUN9(VAR11->VAR25, VAR8->VAR17);
        if (VAR15 < 0)
        {
            FUN10(&VAR11->VAR25);
            return VAR15;
        }
    }
    return 0;
}