void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2();
    FUN3(VAR8, &VAR9, VAR10)
    {
        VAR3 *VAR11;
        VAR11 = FUN4(""
                                    "",
                                    VAR8->VAR12, FUN5(VAR8), FUN6(VAR8));
        if (VAR8->VAR13)
        {
            VAR3 *VAR14;
            VAR15 *VAR16 = FUN7(VAR11);
            VAR14 = FUN4(""
                                     "",
                                     VAR8->VAR17, VAR8->VAR18, VAR8->VAR13->VAR19, FUN8(VAR8));
            if (VAR8->VAR20[0] != '')
            {
                VAR15 *VAR21 = FUN7(VAR14);
                FUN9(VAR21, "", FUN10(VAR8->VAR20));
            }
            FUN11(VAR16, "", VAR14);
        }
        FUN12(VAR6, VAR11);
    }
    *VAR4 = FUN13(VAR6);
}