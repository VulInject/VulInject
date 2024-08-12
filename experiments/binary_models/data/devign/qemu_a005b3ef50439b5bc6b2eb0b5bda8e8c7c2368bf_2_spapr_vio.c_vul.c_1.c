static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3());
    VAR7 *VAR8 = (VAR7 *)VAR2;
    VAR9 *VAR10 = FUN4(VAR8);
    char *VAR11;
    if (VAR8->VAR12 != -1)
    {
        VAR7 *VAR13 = FUN5(VAR8);
        if (VAR13)
        {
            FUN6(VAR4, "", FUN7(FUN8(VAR2)), FUN7(FUN8(&VAR13->VAR2)), VAR8->VAR12);
            return;
        }
    }
    else
    {
        VAR14 *VAR15 = FUN9(VAR8->VAR2.VAR16);
        do
        {
            VAR8->VAR12 = VAR15->VAR17++;
        } while (FUN5(VAR8));
    }
    if (!VAR8->VAR2.VAR11)
    {
        VAR11 = FUN10(FUN11(VAR8));
        VAR8->VAR2.VAR11 = VAR11;
    }
    VAR8->VAR18 = FUN12(VAR6->VAR19, 0, VAR8->VAR18, false);
    if (!VAR8->VAR18)
    {
        FUN6(VAR4, "");
        return;
    }
    if (VAR10->VAR20)
    {
        uint32_t VAR21 = FUN13(VAR8->VAR12);
        FUN14(&VAR8->VAR22, FUN8(VAR8), "", VAR23);
        FUN15(&VAR8->VAR24, FUN8(VAR8), "", FUN16(), 0, VAR23);
        FUN17(&VAR8->VAR22, 0, &VAR8->VAR24, 1);
        FUN18(&VAR8->VAR25, &VAR8->VAR22, VAR2->VAR11);
        VAR8->VAR26 = FUN19(VAR2, VAR21, 0, VAR27, VAR10->VAR20 >> VAR27, false);
        VAR8->VAR26->VAR28 = VAR8;
        FUN17(&VAR8->VAR22, 0, FUN20(VAR8->VAR26), 2);
    }
    VAR10->FUN21(VAR8, VAR4);
}