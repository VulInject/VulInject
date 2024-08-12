static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    size_t VAR8;
    int VAR9 = VAR2->VAR10.VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    uint32_t VAR15 = 0;
    uint64_t VAR16;
    VAR8 = sizeof(VAR4);
    VAR5 = FUN2(VAR8);
    strncpy(VAR5->VAR17, VAR18, strlen(VAR18));
    VAR5->VAR19 = FUN3(6, VAR9);
    VAR12 = VAR20;
    VAR5->VAR12 = FUN3(VAR12, VAR9);
    VAR13 = sizeof(struct VAR6) + VAR2->VAR21;
    VAR13 = FUN4(VAR13, VAR12);
    VAR5->VAR13 = FUN3(VAR13, VAR9);
    VAR5->VAR22 = FUN3(FUN5(VAR2->VAR22, VAR23), VAR9);
    VAR5->VAR24 = FUN3(VAR2->VAR24, VAR9);
    VAR14 = FUN4(VAR2->VAR25, VAR12) * 2;
    VAR5->VAR14 = FUN3(VAR14, VAR9);
    strncpy(VAR5->VAR26.VAR27, VAR28, sizeof(VAR5->VAR26.VAR27));
    if (VAR2->VAR29 & VAR30)
    {
        VAR15 |= VAR30;
    }
    if (VAR2->VAR29 & VAR31)
    {
        VAR15 |= VAR31;
    }
    if (VAR2->VAR29 & VAR32)
    {
        VAR15 |= VAR32;
    }
    VAR5->VAR15 = FUN3(VAR15, VAR9);
    if (FUN6(VAR2->VAR33, 0, VAR5, VAR8) < 0)
    {
        FUN7(VAR2, "");
        VAR3 = -1;
        goto VAR34;
    }
    VAR8 = sizeof(VAR6);
    VAR7 = FUN2(VAR8);
    VAR7->VAR35 = FUN8(VAR2->VAR22, VAR9);
    VAR7->VAR36 = FUN3(VAR37, VAR9);
    VAR7->VAR38 = FUN3(VAR39, VAR9);
    VAR16 = VAR40 * VAR12 + VAR8;
    VAR7->VAR16 = FUN8(VAR16, VAR9);
    VAR7->VAR21 = FUN3(VAR2->VAR21, VAR9);
    if (FUN6(VAR2->VAR33, VAR40 * VAR12, VAR7, VAR8) < 0)
    {
        FUN7(VAR2, "");
        VAR3 = -1;
        goto VAR34;
    }
    VAR2->VAR41 = FUN2(VAR2->VAR21);
    VAR2->VAR42 = 0;
    if (FUN9(VAR43, VAR2) < 0)
    {
        VAR3 = -1;
        goto VAR34;
    }
    if (FUN6(VAR2->VAR33, VAR16, VAR2->VAR41, VAR2->VAR21) < 0)
    {
        FUN7(VAR2, "");
        VAR3 = -1;
        goto VAR34;
    }
    VAR2->VAR44 = (VAR40 + VAR13) * VAR12;
    VAR2->VAR45 = (VAR40 + VAR13 + VAR14) * VAR12;
VAR34:
    FUN10(VAR5);
    FUN10(VAR7);
    FUN10(VAR2->VAR41);
    return VAR3;
}