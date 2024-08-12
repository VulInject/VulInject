static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    int64_t VAR7 = FUN2(VAR8);
    VAR9 *VAR10 = NULL;
    int VAR11;
    FUN3();
    VAR2->VAR12.VAR13 = FUN4(VAR2->VAR14);
    if (!VAR2->VAR12.VAR13)
    {
        FUN5("");
        goto VAR15;
    }
    FUN6(VAR2->VAR12.VAR13, VAR16, &VAR10);
    if (VAR10)
    {
        goto VAR15;
    }
    VAR4 = FUN7(VAR17);
    VAR6 = FUN8(FUN9(VAR4));
    FUN10(FUN11(VAR4));
    FUN12();
    FUN13();
    FUN14();
    FUN15("", "");
    FUN16(VAR2->VAR18, VAR7 + VAR2->VAR19.VAR20);
    while (VAR2->VAR21 == VAR22)
    {
        if (FUN17() != VAR23)
        {
            FUN5("");
            goto VAR15;
        }
        FUN18(&VAR2->VAR24);
        VAR11 = FUN19(VAR2, VAR4, VAR6);
        if (VAR11 < 0)
        {
            goto VAR15;
        }
    }
VAR15:
    if (VAR10)
    {
        FUN20(VAR10);
    }
    if (VAR6)
    {
        FUN21(VAR6);
    }
    FUN22(VAR2->VAR18);
    if (VAR2->VAR12.VAR13)
    {
        FUN21(VAR2->VAR12.VAR13);
    }
}