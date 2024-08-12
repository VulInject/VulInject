static VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4, *VAR5;
    size_t VAR6, VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    unsigned int VAR12 = FUN2(VAR13);
    VAR2 = FUN3(VAR14);
    FUN4(VAR2, VAR15, (VAR16)VAR12);
    FUN5(VAR2, VAR17, (VAR8)VAR18);
    FUN6(VAR2, VAR19, VAR20, VAR21);
    FUN7(VAR2, VAR22, FUN8());
    VAR4 = FUN9(&VAR6);
    if (VAR4)
    {
        FUN6(VAR2, VAR23, VAR4, VAR6);
    }
    FUN10(&VAR4, &VAR6, &VAR5, &VAR7);
    if (VAR5)
    {
        FUN11(VAR2, "", VAR4, VAR6);
        FUN11(VAR2, "", VAR5, VAR7);
    }
    FUN6(VAR2, VAR24, &VAR25, sizeof(VAR25));
    FUN11(VAR2, "", VAR26, sizeof(struct VAR27) * VAR28);
    FUN6(VAR2, VAR29, &VAR30, sizeof(VAR30));
    VAR9 = FUN12(VAR8, 1 + VAR12 + VAR31);
    VAR9[0] = FUN13(VAR31);
    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
    {
        unsigned int VAR32 = FUN14(VAR10);
        assert(VAR32 < VAR12);
        for (VAR11 = 0; VAR11 < VAR31; VAR11++)
        {
            if (FUN15(VAR10, VAR33[VAR11].VAR34))
            {
                VAR9[VAR32 + 1] = FUN13(VAR11);
                break;
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR31; VAR10++)
    {
        VAR9[VAR12 + 1 + VAR10] = FUN13(VAR33[VAR10].VAR35);
    }
    FUN6(VAR2, VAR36, VAR9, (1 + VAR12 + VAR31) * sizeof(*VAR9));
    return VAR2;
}