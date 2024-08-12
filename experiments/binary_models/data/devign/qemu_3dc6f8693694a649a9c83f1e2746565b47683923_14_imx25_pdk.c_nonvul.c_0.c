static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, 1);
    unsigned int VAR5;
    unsigned int VAR6;
    int VAR7;
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
    VAR21.VAR5 = VAR2->VAR5;
    VAR21.VAR22 = VAR2->VAR22;
    VAR21.VAR23 = VAR2->VAR23;
    VAR21.VAR24 = VAR2->VAR24;
    VAR21.VAR25 = VAR16;
    VAR21.VAR26 = 1771, VAR21.VAR27 = 1;
    if (!FUN13())
    {
        FUN14(&VAR4->VAR8.VAR28, &VAR21);
    }
    else
    {
        FUN15((VAR29 *)FUN16(FUN17(&VAR4->VAR8.VAR30[0]), ""), "", 0x68);
    }
}