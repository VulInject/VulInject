static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    VAR3 *VAR13 = FUN2(VAR8, VAR8->VAR14, VAR8->VAR15);
    int VAR16;
    ptrdiff_t VAR17 = FUN3(VAR4->VAR18 * sizeof(VAR19), 32);
    unsigned VAR20 = VAR17 * VAR4->VAR21;
    struct ThreadData VAR22;
    if (!VAR13)
    {
        FUN4(&VAR4);
        return FUN5(VAR23);
    }
    FUN6(VAR13, VAR4);
    VAR13->VAR24 = VAR11->VAR25 == VAR26 ? VAR27[FUN7(VAR11->VAR28, VAR29)] : VAR11->VAR25;
    if (VAR11->VAR30 == VAR31)
    {
        const VAR32 *VAR33 = FUN8(VAR13->VAR34);
        VAR13->VAR35 = VAR36[FUN7(VAR11->VAR28, VAR29)];
        if (VAR13->VAR35 == VAR37 && VAR33 && VAR33->VAR38[0].VAR39 >= 12)
            VAR13->VAR35 = VAR40;
    }
    else
    {
        VAR13->VAR35 = VAR11->VAR30;
    }
    VAR13->VAR41 = VAR11->VAR42 == VAR43 ? VAR44[FUN7(VAR11->VAR28, VAR29)] : VAR11->VAR42;
    VAR13->VAR45 = VAR11->VAR46 == VAR47 ? VAR4->VAR45 : VAR11->VAR46;
    if (VAR20 != VAR11->VAR20)
    {
        const VAR32 *VAR33 = FUN8(VAR13->VAR34);
        int VAR48 = VAR4->VAR18 >> VAR33->VAR49;
        FUN9(&VAR11->VAR50[0]);
        FUN9(&VAR11->VAR50[1]);
        FUN9(&VAR11->VAR50[2]);
        VAR11->VAR20 = 0;
        FUN9(&VAR11->VAR51[0][0]);
        FUN9(&VAR11->VAR51[0][1]);
        FUN9(&VAR11->VAR51[1][0]);
        FUN9(&VAR11->VAR51[1][1]);
        FUN9(&VAR11->VAR51[2][0]);
        FUN9(&VAR11->VAR51[2][1]);
        VAR11->VAR50[0] = FUN10(VAR20);
        VAR11->VAR50[1] = FUN10(VAR20);
        VAR11->VAR50[2] = FUN10(VAR20);
        VAR11->VAR51[0][0] = FUN10(sizeof(*VAR11->VAR51[0][0]) * (VAR4->VAR18 + 4));
        VAR11->VAR51[0][1] = FUN10(sizeof(*VAR11->VAR51[0][1]) * (VAR4->VAR18 + 4));
        VAR11->VAR51[1][0] = FUN10(sizeof(*VAR11->VAR51[1][0]) * (VAR48 + 4));
        VAR11->VAR51[1][1] = FUN10(sizeof(*VAR11->VAR51[1][1]) * (VAR48 + 4));
        VAR11->VAR51[2][0] = FUN10(sizeof(*VAR11->VAR51[2][0]) * (VAR48 + 4));
        VAR11->VAR51[2][1] = FUN10(sizeof(*VAR11->VAR51[2][1]) * (VAR48 + 4));
        VAR11->VAR52[0][0] = &VAR11->VAR51[0][0][1];
        VAR11->VAR52[0][1] = &VAR11->VAR51[0][1][1];
        VAR11->VAR52[1][0] = &VAR11->VAR51[1][0][1];
        VAR11->VAR52[1][1] = &VAR11->VAR51[1][1][1];
        VAR11->VAR52[2][0] = &VAR11->VAR51[2][0][1];
        VAR11->VAR52[2][1] = &VAR11->VAR51[2][1][1];
        if (!VAR11->VAR50[0] || !VAR11->VAR50[1] || !VAR11->VAR50[2] || !VAR11->VAR51[0][0] || !VAR11->VAR51[0][1] || !VAR11->VAR51[1][0] || !VAR11->VAR51[1][1] || !VAR11->VAR51[2][0] || !VAR11->VAR51[2][1])
        {
            FUN11(VAR6);
            return FUN5(VAR23);
        }
        VAR11->VAR20 = VAR20;
    }
    VAR16 = FUN12(VAR6, VAR4, VAR13);
    if (VAR16 < 0)
        return VAR16;
    VAR11->VAR17 = VAR17 / sizeof(VAR19);
    VAR22.VAR4 = VAR4;
    VAR22.VAR13 = VAR13;
    VAR22.VAR53[0] = VAR4->VAR54[0];
    VAR22.VAR53[1] = VAR4->VAR54[1];
    VAR22.VAR53[2] = VAR4->VAR54[2];
    VAR22.VAR55[0] = VAR13->VAR54[0];
    VAR22.VAR55[1] = VAR13->VAR54[1];
    VAR22.VAR55[2] = VAR13->VAR54[2];
    VAR22.VAR56 = FUN8(VAR4->VAR34)->VAR57;
    VAR22.VAR58 = FUN8(VAR13->VAR34)->VAR57;
    if (VAR11->VAR59)
    {
        FUN13(VAR13, VAR4);
    }
    else
    {
        VAR6->VAR60->FUN14(VAR6, VAR61, &VAR22, NULL, FUN7((VAR4->VAR21 + 1) >> 1, VAR6->VAR62->VAR63));
    }
    FUN4(&VAR4);
    return FUN15(VAR8, VAR13);
}