static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    int64_t VAR8;
    char *VAR9 = NULL;
    hwaddr VAR10 = 0x100000000ULL;
    int VAR11, VAR12;
    VAR13 *VAR14;
    VAR1 *VAR15;
    char VAR16[64];
    VAR11 = 12;
    VAR12 = 1 << VAR11;
    for (VAR3 = 0; (VAR3 < VAR17 && (VAR5 = FUN2(VAR18, 0, VAR3)) != NULL); ++VAR3)
    {
        VAR7 = FUN3(VAR5);
        VAR8 = FUN4(VAR7);
        if (VAR8 < 0)
        {
            VAR9 = FUN5("");
        }
        else if (VAR8 == 0)
        {
            VAR9 = FUN5(""
                                           "");
        }
        else if ((VAR8 % VAR12) != 0)
        {
            VAR9 = FUN5(""
                                           "",
                                           VAR12);
        }
        else if (VAR10 < VAR8 || VAR10 - VAR8 < VAR19)
        {
            VAR9 = FUN5(""
                                           "" VAR20,
                                           VAR19);
        }
        if (VAR9 != NULL)
        {
            Location VAR21;
            FUN6(&VAR21);
            if (VAR5->VAR22 != NULL)
            {
                FUN7(VAR5->VAR22);
            }
            FUN8("", VAR9);
            FUN9(&VAR21);
            FUN10(VAR9);
            FUN11(1);
        }
        VAR10 -= VAR8;
        snprintf(VAR16, sizeof VAR16, "", VAR3);
        VAR14 = FUN12(VAR10, NULL, VAR16, VAR8, VAR7, VAR12, VAR8 >> VAR11, 1, 0x0000, 0x0000, 0x0000, 0x0000, 0);
        if (VAR3 == 0)
        {
            VAR15 = FUN13(VAR14);
            FUN14(VAR2, VAR15, VAR8);
        }
    }
}