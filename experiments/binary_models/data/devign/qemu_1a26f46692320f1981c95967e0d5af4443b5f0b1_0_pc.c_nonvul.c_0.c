void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR5->VAR8;
    FUN3(VAR5->VAR9, VAR5->VAR10);
    if (VAR8)
    {
        int VAR11 = 0;
        FUN4(VAR8, &VAR8->VAR12, VAR13)
        {
            if (FUN5(VAR8))
            {
                VAR11++;
            }
        }
        if (VAR11 && VAR5->VAR14)
        {
            VAR15 *VAR16 = FUN6(sizeof(*VAR16));
            *VAR16 = FUN7(VAR11);
            FUN8(VAR5->VAR14, "", VAR16, sizeof(*VAR16));
        }
    }
    FUN9();
    if (VAR5->VAR14)
    {
        FUN10(VAR5);
        FUN11(VAR5);
        FUN12(VAR5->VAR14, VAR17, VAR5->VAR10);
    }
    if (VAR5->VAR18 > 255 && !FUN13())
    {
        VAR19 *VAR20 = FUN14(FUN15());
        if (!VAR20 || !VAR20->VAR21.VAR22 || VAR20->VAR23 != VAR24)
        {
            FUN16(""
                         ""
                         ""
                         "");
            FUN17(VAR25);
        }
    }
}