static int FUN1(int VAR1, uint64_t VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    uint16_t VAR9;
    uintptr_t VAR10;
    size_t VAR11;
    bool VAR12;
    uint8_t VAR13;
    int VAR14;
    VAR8 = FUN2(&VAR9);
    VAR14 = VAR1 & ~0xff;
    VAR1 &= 0xff;
    switch (VAR1)
    {
    case VAR15:
        VAR12 = true;
        break;
    case VAR16:
        VAR12 = false;
        break;
    default:
        FUN3();
        FUN4(VAR17 + VAR18, 0 | VAR19);
        FUN4(VAR9 + VAR20, 0);
        FUN4(VAR9 + VAR21, VAR22);
        VAR11 = sizeof(*VAR5) * VAR6;
        VAR10 = FUN5(VAR23, VAR11);
        FUN6(VAR10, VAR5, VAR11);
        FUN7(VAR9 + VAR24, VAR10);
        FUN4(VAR17 + VAR25, VAR3);
        FUN4(VAR17 + VAR26, VAR2 & 0xff);
        FUN4(VAR17 + VAR27, (VAR2 >> 8) & 0xff);
        FUN4(VAR17 + VAR28, (VAR2 >> 16) & 0xff);
        FUN4(VAR17 + VAR29, VAR1);
        FUN4(VAR9 + VAR20, VAR30 | (VAR12 ? VAR31 : 0));
        if (VAR14 & VAR32)
        {
            FUN4(VAR9 + VAR20, 0);
            do
            {
                VAR13 = FUN8(VAR9 + VAR21);
            } while ((VAR13 & (VAR33 | VAR22)) == VAR33);
            FUN9(FUN10(VAR34), ==, !!(VAR13 & VAR22));
            FUN11(FUN8(VAR17 + VAR35), VAR36);
            FUN12(FUN8(VAR17 + VAR35), VAR37 | VAR38);
            FUN13(!FUN10(VAR34));
            if (VAR13 & VAR33)
            {
                FUN4(VAR9 + VAR20, 0);
                FUN14(VAR8);
                return VAR13