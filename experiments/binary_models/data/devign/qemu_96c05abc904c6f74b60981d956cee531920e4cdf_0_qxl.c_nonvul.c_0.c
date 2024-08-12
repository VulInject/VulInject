static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    uint32_t VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    VAR2->VAR9 = VAR10;
    VAR2->VAR11 = 1;
    VAR2->VAR12 = VAR13;
    VAR2->VAR14 = VAR15;
    switch (VAR2->VAR16)
    {
    case 1:
        VAR6 = VAR17;
        VAR7 = VAR18;
        break;
    case 2:
        VAR6 = VAR17;
        VAR7 = VAR19;
        break;
    default:
        VAR6 = VAR20;
        VAR7 = 1;
        break;
    }
    FUN2(VAR4, VAR6);
    FUN3(&VAR4[VAR21], VAR7);
    FUN3(&VAR4[VAR22], 1);
    VAR2->VAR23 = FUN4();
    VAR2->VAR24 = FUN5(&VAR2->VAR5.VAR25, "", VAR2->VAR23);
    FUN6(VAR2);
    FUN7(VAR2);
    if (VAR2->VAR26 < 16 * 1024 * 1024)
    {
        VAR2->VAR26 = 16 * 1024 * 1024;
    }
    if (VAR2->VAR16 == 1)
    {
        VAR2->VAR26 = 4096;
    }
    VAR2->VAR26 = FUN8(VAR2->VAR26 * 2 - 1);
    VAR2->VAR27 = FUN5(&VAR2->VAR5.VAR25, "", VAR2->VAR26);
    VAR8 = FUN8(VAR28 * 2 - 1);
    if (VAR2->VAR16 == 1)
    {
        VAR8 = 8;
    }
    FUN9(&VAR2->VAR5, VAR29, VAR8, VAR30, VAR31);
    FUN9(&VAR2->VAR5, VAR32, VAR2->VAR23, VAR33, VAR31);
    FUN9(&VAR2->VAR5, VAR34, VAR2->VAR35.VAR26, VAR33, VAR31);
    FUN9(&VAR2->VAR5, VAR36, VAR2->VAR26, VAR33, VAR31);
    VAR2->VAR37.VAR2.VAR38.VAR39 = &VAR40.VAR38;
    VAR2->VAR37.VAR2.VAR41 = VAR2->VAR41;
    FUN10(&VAR2->VAR37.VAR2.VAR38);
    FUN11(VAR42, VAR2);
    FUN12(VAR2);
    FUN13(VAR2);
    return 0;
}