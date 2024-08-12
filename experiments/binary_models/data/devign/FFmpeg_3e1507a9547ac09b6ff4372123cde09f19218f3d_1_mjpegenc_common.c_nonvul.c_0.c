int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7 = VAR2->VAR7 - !VAR2->VAR8;
    int VAR9;
    VAR10 *VAR11;
    VAR11 = VAR2->VAR12;
    if (VAR2->VAR13 == VAR14)
    {
        FUN2(VAR11);
        FUN3(VAR11->VAR15, VAR11->VAR16);
        FUN3(VAR11->VAR17, VAR11->VAR18);
        VAR2->VAR19 = VAR2->VAR20 = VAR11->VAR16;
        VAR2->VAR21 = VAR2->VAR22 = VAR11->VAR18;
        FUN4(VAR2->VAR23, &VAR2->VAR6, &VAR2->VAR24, VAR2->VAR25, VAR2->VAR26, VAR2->VAR27);
        FUN5(VAR2);
    }
    VAR9 = FUN6(VAR2, FUN7(&VAR2->VAR6) / 8 + 100, FUN7(&VAR2->VAR6) / 4 + 1000);
    if (VAR9 < 0)
    {
        FUN8(VAR2->VAR23, VAR28, "");
        goto VAR29;
    }
    FUN9(VAR5, VAR2->VAR30);
    if ((VAR2->VAR23->VAR31 & VAR32) && VAR7 < VAR2->VAR33)
        FUN10(VAR5, VAR34 + (VAR7 & 7));
    VAR2->VAR30 = FUN7(VAR5) >> 3;
VAR29:
    for (VAR3 = 0; VAR3 < 3; VAR3++)
        VAR2->VAR35[VAR3] = 128 << VAR2->VAR36;
    return VAR9;
}