static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    int VAR9;
    const VAR10 *VAR11;
    VAR12 *VAR13 = FUN2(VAR5);
    VAR6 = FUN3(VAR14, VAR14 + 4, VAR3);
    FUN4(VAR6, VAR15, VAR5->VAR16);
    FUN4(VAR6, VAR17, (VAR18)VAR5->VAR19);
    FUN5(VAR6, VAR20, (VAR7)VAR21);
    FUN6(VAR6, VAR22, VAR23, VAR24);
    FUN7(VAR6, VAR25, FUN8());
    FUN6(VAR6, VAR26, &VAR27, sizeof(VAR27));
    FUN9(VAR6, "", VAR28, sizeof(struct VAR29) * VAR30);
    FUN6(VAR6, VAR31, &VAR32, sizeof(VAR32));
    VAR8 = FUN10(VAR7, 1 + VAR5->VAR19 + VAR33);
    VAR8[0] = FUN11(VAR33);
    VAR11 = VAR13->FUN12(FUN13(VAR5));
    for (VAR9 = 0; VAR9 < VAR11->VAR34; VAR9++)
    {
        unsigned int VAR35 = VAR11->VAR11[VAR9].VAR36;
        assert(VAR35 < VAR5->VAR19);
        VAR8[VAR35 + 1] = FUN11(VAR11->VAR11[VAR9].VAR37.VAR38);
    }
    for (VAR9 = 0; VAR9 < VAR33; VAR9++)
    {
        VAR8[VAR5->VAR19 + 1 + VAR9] = FUN11(VAR39[VAR9].VAR40);
    }
    FUN6(VAR6, VAR41, VAR8, (1 + VAR5->VAR19 + VAR33) * sizeof(*VAR8));
    return VAR6;
}