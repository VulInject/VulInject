void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(FUN3(VAR2));
    VAR11 *VAR12 = FUN5(FUN3(VAR4));
    VAR13 *VAR14 = FUN6(VAR4);
    VAR15 *VAR16 = FUN7(VAR12->VAR17);
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR5 *VAR22 = NULL;
    void *VAR23 = NULL;
    int VAR24 = 0;
    int VAR25 = VAR14->VAR26 / VAR27;
    int VAR28 = FUN8();
    FUN9(VAR8->VAR29);
    VAR19 = FUN10(VAR30, VAR25 * VAR28);
    VAR10->VAR31[VAR25] = FUN3(VAR4);
    FUN9(VAR19);
    if (VAR4->VAR32)
    {
        VAR23 = FUN11(VAR16, &VAR24, VAR10);
    }
    VAR21 = FUN12(VAR19);
    VAR21->FUN13(VAR19, VAR4, VAR23, VAR24, !VAR4->VAR32, &VAR22);
    if (VAR22)
    {
        FUN14(VAR23);
        VAR10->VAR31[VAR25] = NULL;
        FUN15(VAR6, VAR22);
        return;
    }
    if (VAR4->VAR32)
    {
        FUN16(VAR19);
    }
    else
    {
        VAR21->FUN17(VAR19, VAR33);
        VAR21->FUN18(VAR19, VAR34);
    }
}