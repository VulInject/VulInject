static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(FUN4(VAR2));
    VAR7 *VAR8 = FUN5(VAR6->VAR9);
    uint64_t VAR10;
    int VAR11;
    uint64_t VAR12;
    uint64_t VAR13;
    uint32_t VAR14;
    VAR10 = FUN6(VAR4->VAR15 + VAR16);
    VAR11 = VAR10 & VAR17;
    VAR13 = VAR18;
    switch (VAR10 & VAR19)
    {
    case VAR20:
        VAR14 = 256 * 1024 * 1024;
        break;
    case VAR21:
        VAR14 = 128 * 1024 * 1024;
        VAR13 |= VAR22 | VAR23;
        break;
    case VAR24:
        VAR14 = 64 * 1024 * 1024;
        VAR13 |= VAR23;
        break;
    case VAR25:
    default:
        FUN7();
    }
    VAR12 = VAR10 & VAR13;
    FUN8(VAR8, VAR11, VAR12, VAR14);
    if (VAR11)
    {
        FUN9(&VAR2->VAR26, VAR12 + VAR14, VAR27 - 1);
    }
    else
    {
        FUN9(&VAR2->VAR26, VAR28, VAR27 - 1);
    }
}