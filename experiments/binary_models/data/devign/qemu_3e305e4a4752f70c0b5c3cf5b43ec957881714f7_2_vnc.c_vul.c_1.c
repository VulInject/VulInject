void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2, VAR4);
    FUN5(&VAR2->VAR5);
    FUN5(&VAR2->VAR6);
    FUN5(&VAR2->VAR7);
    FUN5(&VAR2->VAR8);
    FUN6(VAR2->VAR9);
    FUN7(VAR2);
    FUN8(VAR2);
    FUN9(VAR2);
    FUN10(VAR2);
    FUN11(VAR2);
    FUN12(VAR2);
    FUN13(VAR2);
    if (VAR2->VAR10)
    {
        FUN14(&VAR2->VAR11->VAR12, VAR2, VAR13);
        FUN15(&VAR2->VAR14);
    }
    if (VAR2->VAR11->VAR15)
        FUN16(VAR2->VAR16);
    FUN17(VAR2);
    FUN18(&VAR2->VAR17);
    if (VAR2->VAR18 != NULL)
    {
        FUN19(VAR2->VAR18);
    }
    FUN5(&VAR2->VAR19);
    for (VAR3 = 0; VAR3 < VAR20; ++VAR3)
    {
        FUN20(VAR2->VAR21[VAR3]);
    }
    FUN20(VAR2->VAR21);
    FUN20(VAR2);
}