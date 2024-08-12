static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, 1);
    unsigned int VAR5;
    unsigned int VAR6;
    unsigned int VAR7;
    FUN3(&VAR4->VAR8, sizeof(VAR4->VAR8), VAR9);
    FUN4(FUN5(VAR2), "", FUN5(&VAR4->VAR8), &VAR10);
    FUN6(FUN5(&VAR4->VAR8), true, "", &VAR11);
    if (VAR2->VAR5 > (VAR12 + VAR13))
    {
        FUN7("" VAR14 ""
                    "",
                    VAR2->VAR5, VAR12 + VAR13);
        VAR2->VAR5 = VAR12 + VAR13;
    }
    FUN8(&VAR4->VAR15, NULL, "", VAR2->VAR5);
    FUN9(FUN10(), VAR16, &VAR4->VAR15);
    for (VAR7 = 0, VAR5 = VAR2->VAR5, VAR6 = 0; (VAR7 < 2) && VAR5; VAR7++)
    {
        unsigned int VAR17;
        static const struct
        {
            hwaddr VAR18;
            unsigned int VAR17;
        } VAR15[2] = {
            {VAR16, VAR12},
            {VAR19, VAR13},
        };
        VAR17 = FUN11(VAR5, VAR15[VAR7].VAR17);
        VAR5 -= VAR17;
        if (VAR17 < VAR15[VAR7].VAR17)
        {
            FUN12(&VAR4->VAR20, NULL, "", &VAR4->VAR15, VAR6, VAR15[VAR7].VAR17 - VAR17);
            FUN9(FUN10(), VAR15[VAR7].VAR18 + VAR17, &VAR4->VAR20);
        }
        VAR6 += VAR15[VAR7].VAR17;
    }
    if (VAR21[0].VAR22)
    {
        FUN13(&VAR21[0], VAR23, FUN14(FUN15(&VAR4->VAR8.VAR24), 52));
    }
    if (VAR25[2])
    {
        FUN16(FUN10(), VAR26 + 0x10, 0, FUN14(FUN15(&VAR4->VAR8.VAR24), 52), 14745600, VAR25[2], VAR27);
    }
    VAR28.VAR5 = VAR2->VAR5;
    VAR28.VAR29 = VAR2->VAR29;
    VAR28.VAR30 = VAR2->VAR30;
    VAR28.VAR31 = VAR2->VAR31;
    VAR28.VAR32 = 1;
    if (!FUN17())
    {
        FUN18(&VAR4->VAR8.VAR33, &VAR28);
    }
}