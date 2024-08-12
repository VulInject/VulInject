static int FUN1(int VAR1, uint64_t VAR2, int VAR3, VAR4 *VAR5, int VAR6, void (*VAR7)(VAR8 *VAR9, void *VAR10, uint64_t VAR2, int VAR3))
{
    VAR8 *VAR9;
    void *VAR11;
    void *VAR10;
    uintptr_t VAR12;
    size_t VAR13;
    bool VAR14;
    uint8_t VAR15;
    int VAR16;
    VAR9 = FUN2(&VAR11, &VAR10);
    VAR16 = VAR1 & ~0xff;
    VAR1 &= 0xff;
    switch (VAR1)
    {
    case VAR17:
    case VAR18:
        VAR14 = true;
        break;
    case VAR19:
        VAR14 = false;
        break;
    default:
        FUN3();
    }
    if (VAR16 & VAR20)
    {
        FUN4(VAR9, VAR21, VAR22 | VAR23);
    }
    FUN5(VAR9, VAR10 + VAR24, 0 | VAR25);
    FUN5(VAR9, VAR11 + VAR26, 0);
    FUN5(VAR9, VAR11 + VAR27, VAR28);
    VAR13 = sizeof(*VAR5) * VAR6;
    VAR12 = FUN6(VAR29, VAR13);
    FUN7(VAR12, VAR5, VAR13);
    FUN8(VAR9, VAR11 + VAR30, VAR12);
    if (VAR1 == VAR18)
    {
        FUN5(VAR9, VAR10 + VAR31, 0x01);
    }
    else
    {
        FUN5(VAR9, VAR10 + VAR32, VAR3);
        FUN5(VAR9, VAR10 + VAR33, VAR2 & 0xff);
        FUN5(VAR9, VAR10 + VAR34, (VAR2 >> 8) & 0xff);
        FUN5(VAR9, VAR10 + VAR35, (VAR2 >> 16) & 0xff);
    }
    FUN5(VAR9, VAR10 + VAR36, VAR1);
    if (VAR7)
    {
        FUN9(VAR9, VAR10, VAR2, VAR3);
    }
    FUN5(VAR9, VAR11 + VAR26, VAR37 | (VAR14 ? VAR38 : 0));
    if (VAR16 & VAR39)
    {
        FUN5(VAR9, VAR11 + VAR26, 0);
    }
    do
    {
        VAR15 = FUN10(VAR9, VAR11 + VAR27);
    } while ((VAR15 & (VAR40 | VAR28)) == VAR40);
    FUN11(FUN12(VAR41), ==, !!(VAR15 & VAR28));
    FUN13(FUN10(VAR9, VAR10 + VAR42), VAR43);
    FUN14(FUN10(VAR9, VAR10 + VAR42), VAR44 | VAR45);
    FUN15(!FUN12(VAR41));
    if (VAR15 & VAR40)
    {
        FUN5(VAR9, VAR11 + VAR26, 0);
    }
    FUN16(VAR9);
    return VAR15;
}