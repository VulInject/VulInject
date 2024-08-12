static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18 = VAR3;
    ThreadFrame VAR19 = {.VAR20 = VAR3};
    uint32_t VAR21;
    FUN2(&VAR8->VAR22, VAR6->VAR3, VAR6->VAR23);
    VAR21 = FUN3(&VAR8->VAR22);
    if (VAR21 <= 44 || VAR21 - 4 > FUN4(&VAR8->VAR22))
    {
        FUN5(VAR2, VAR24, "" VAR25 "", VAR21);
    }
    VAR16 = FUN6(&VAR8->VAR22);
    if (VAR16 != 1)
        FUN7(VAR2, "", VAR16);
    FUN8(&VAR8->VAR22, 4);
    if (FUN3(&VAR8->VAR22) != 1)
        FUN8(&VAR8->VAR22, 4);
    VAR13 = FUN3(&VAR8->VAR22);
    VAR14 = FUN3(&VAR8->VAR22);
    VAR11 = FUN9(VAR13, 1 << (VAR26 + 1));
    VAR12 = FUN9(VAR14, 1 << (VAR26 + 1));
    VAR8->VAR27 = FUN3(&VAR8->VAR22);
    if (VAR8->VAR27 != VAR26)
        VAR8->VAR28 = FUN3(&VAR8->VAR22);
    if (VAR8->VAR28 < 8 || VAR8->VAR28 > 15)
    {
        FUN7(VAR2, "", VAR8->VAR28);
    }
    VAR15 = FUN10(VAR2, VAR11, VAR12);
    if (VAR15 < 0)
        return VAR15;
    VAR2->VAR13 = VAR13;
    VAR2->VAR14 = VAR14;
    if (VAR8->VAR11 != VAR11 || VAR8->VAR12 != VAR12)
    {
        FUN11(VAR2);
        VAR8->VAR11 = VAR11;
        VAR8->VAR12 = VAR12;
        VAR15 = FUN12(VAR2);
        if (VAR15 < 0)
        {
            FUN11(VAR2);
            VAR8->VAR11 = 0;
            VAR8->VAR12 = 0;
            return VAR15;
        }
    }
    FUN8(&VAR8->VAR22, 8);
    VAR18->VAR29 = VAR30;
    VAR18->VAR31 = 1;
    VAR18->VAR32 = VAR33;
    VAR15 = FUN13(VAR2, &VAR19, 0);
    if (VAR15 < 0)
        return VAR15;
    for (VAR10 = 0; VAR10 < 3; VAR10++)
    {
        VAR15 = FUN14(VAR2, VAR10, VAR6, VAR19.VAR20);
        if (VAR15 < 0)
            return VAR15;
        if (VAR2->VAR34 & VAR35)
            break;
    }
    FUN15(VAR19.VAR20, VAR8->VAR11, VAR8->VAR12, VAR8->VAR28);
    FUN16(VAR19.VAR20, VAR8->VAR11 >> 1, VAR8->VAR12 >> 1, VAR8->VAR28);
    *VAR4 = 1;
    return VAR21;