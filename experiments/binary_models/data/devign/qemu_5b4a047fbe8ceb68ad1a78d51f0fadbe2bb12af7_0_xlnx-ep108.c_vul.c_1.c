static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, 1);
    VAR5 *VAR6 = NULL;
    FUN3(&VAR4->VAR7, sizeof(VAR4->VAR7), VAR8);
    FUN4(FUN5(VAR2), "", FUN5(&VAR4->VAR7), &VAR9);
    FUN6(FUN5(&VAR4->VAR7), true, "", &VAR6);
    if (VAR6)
    {
        FUN7("", FUN8(VAR6));
        FUN9(1);
    }
    if (VAR2->VAR10 > VAR11)
    {
        FUN7("" VAR12 ""
                     "",
                     VAR2->VAR10, VAR11);
        VAR2->VAR10 = VAR11;
    }
    if (VAR2->VAR10 <= 0x08000000)
    {
        FUN10("" VAR12 "", VAR2->VAR10);
    }
    FUN11(&VAR4->VAR13, NULL, "", VAR2->VAR10);
    FUN12(FUN13(), 0, &VAR4->VAR13);
    VAR14.VAR10 = VAR2->VAR10;
    VAR14.VAR15 = VAR2->VAR15;
    VAR14.VAR16 = VAR2->VAR16;
    VAR14.VAR17 = VAR2->VAR17;
    VAR14.VAR18 = 0;
    FUN14(VAR4->VAR7.VAR19, &VAR14);
}