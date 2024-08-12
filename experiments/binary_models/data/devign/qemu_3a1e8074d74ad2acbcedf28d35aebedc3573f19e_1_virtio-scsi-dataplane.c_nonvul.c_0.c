void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(FUN4(VAR2)));
    VAR5 *VAR6 = FUN5(VAR4);
    VAR7 *VAR8 = FUN6(VAR2);
    int VAR9;
    if (VAR2->VAR10)
    {
        VAR2->VAR10 = false;
        return;
    }
    if (!VAR2->VAR11 || VAR2->VAR12)
    {
        return;
    }
    VAR2->VAR12 = true;
    assert(VAR2->VAR13 == FUN7(VAR8->VAR14.VAR15));
    FUN8(VAR2->VAR13);
    FUN9(VAR2->VAR13, &VAR2->VAR16->VAR17, true, NULL);
    FUN9(VAR2->VAR13, &VAR2->VAR18->VAR17, true, NULL);
    for (VAR9 = 0; VAR9 < VAR8->VAR14.VAR19; VAR9++)
    {
        FUN9(VAR2->VAR13, &VAR2->VAR20[VAR9]->VAR17, true, NULL);
    }
    FUN10();
    FUN11(VAR2->VAR13);
    FUN12(VAR2);
    for (VAR9 = 0; VAR9 < VAR8->VAR14.VAR19 + 2; VAR9++)
    {
        VAR6->FUN13(VAR4->VAR21, VAR9, false);
    }
    VAR6->FUN14(VAR4->VAR21, VAR8->VAR14.VAR19 + 2, false);
    VAR2->VAR12 = false;
    VAR2->VAR11 = false;
}