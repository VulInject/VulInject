static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2();
    PostcopyState VAR6;
    int VAR7;
    VAR5->VAR8 = VAR3;
    VAR5->VAR9 = FUN3();
    FUN4(VAR10);
    FUN5(&VAR5->VAR11, VAR12, VAR13);
    VAR7 = FUN6(VAR3);
    VAR6 = FUN7();
    FUN8(VAR7, VAR6);
    if (VAR6 != VAR10)
    {
        if (VAR6 == VAR14)
        {
            FUN9(VAR5);
        }
        else if (VAR7 >= 0)
        {
            FUN10();
            return;
        }
    }
    if (!VAR7 && FUN11())
    {
        VAR5->VAR15 = FUN12();
        FUN13(&VAR5->VAR16, "", VAR17, VAR5, VAR18);
        VAR5->VAR19 = true;
        FUN14();
        FUN15(&VAR5->VAR16);
    }
    FUN16(VAR3);
    FUN17();
    if (VAR7 < 0)
    {
        FUN5(&VAR5->VAR11, VAR13, VAR20);
        FUN18("", strerror(-VAR7));
        FUN19();
        FUN20(VAR21);
    }
    VAR5->VAR22 = FUN21(VAR23, VAR5);
    FUN22(VAR5->VAR22);
}