static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR6;
    VAR4 *VAR7 = VAR2->VAR6;
    int VAR8;
    if (VAR2 == VAR3)
        return 0;
    FUN2(VAR2, &VAR7->VAR9);
    if (VAR5->VAR9.VAR10->VAR11[0] && (VAR8 = FUN3(&VAR7->VAR9, &VAR5->VAR9)) < 0)
        return VAR8;
    if (VAR12 && VAR2->VAR13 == VAR14)
    {
        VAR7->VAR15 = VAR5->VAR15;
        VAR7->VAR16 = VAR5->VAR16;
        VAR7->VAR17 = VAR5->VAR17;
        VAR7->VAR18 = VAR5->VAR18;
        VAR7->VAR19 = VAR5->VAR19;
        VAR7->VAR20 = VAR5->VAR20;
        VAR7->VAR21 = VAR5->VAR21;
        VAR7->VAR22 = VAR5->VAR22;
        VAR7->VAR23 = VAR5->VAR23;
        VAR7->VAR24 = VAR5->VAR24;
        VAR7->VAR25 = VAR5->VAR25;
        VAR7->VAR26 = VAR5->VAR26;
        memcpy(VAR7->VAR27, VAR5->VAR27, sizeof(VAR7->VAR27));
        VAR7->VAR28 = VAR5->VAR28;
        memcpy(VAR7->VAR29, VAR5->VAR29, sizeof(VAR7->VAR29));
        VAR7->VAR30 |= VAR5->VAR30 & (VAR31 | VAR32);
        FUN2(VAR2, &VAR7->VAR33);
        if (VAR5->VAR33.VAR10->VAR11[0] && (VAR8 = FUN3(&VAR7->VAR33, &VAR5->VAR33)) < 0)
            return VAR8;
        FUN2(VAR2, &VAR7->VAR34);
        if (VAR5->VAR34.VAR10->VAR11[0] && (VAR8 = FUN3(&VAR7->VAR34, &VAR5->VAR34)) < 0)
            return VAR8;
    }
    return 0;
}