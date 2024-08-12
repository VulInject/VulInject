static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *const VAR10 = &VAR7->VAR10;
    VAR11 *VAR12 = VAR5;
    const int VAR13 = VAR7->VAR13;
    const int VAR14 = VAR7->VAR14;
    VAR11 *const VAR15 = &VAR7->VAR16;
    int VAR17 = 0;
    if (VAR2->VAR18 >= 0)
    {
        FUN2(VAR2, VAR19, ""
                                    "");
        return -1;
    }
    FUN3(VAR10, VAR3, VAR4);
    FUN4(VAR10, VAR20, VAR21, VAR22, 64);
    VAR10->VAR23[2] = 1;
    VAR10->VAR23[3] = 0;
    *VAR15 = *VAR12;
    VAR15->VAR24 = VAR25;
    if (VAR2->VAR26 == 0 || VAR7->VAR27 % VAR2->VAR26 == 0)
    {
        FUN5(VAR10, 1);
        VAR15->VAR28 = 1;
        FUN6(VAR7);
        FUN7(VAR7);
    }
    else
    {
        FUN5(VAR10, 0);
        VAR15->VAR28 = 0;
    }
    if (!VAR7->VAR29)
    {
        VAR17 += FUN8(VAR10, 1);
        FUN9(&VAR7->VAR30, VAR3 + VAR17, VAR4 - VAR17);
    }
    if (VAR7->VAR31 == 0)
    {
        const int VAR32 = -((-VAR13) >> VAR7->VAR33);
        const int VAR34 = -((-VAR14) >> VAR7->VAR35);
        FUN10(VAR7, VAR15->VAR5[0], VAR13, VAR14, VAR15->VAR36[0], 0);
        FUN10(VAR7, VAR15->VAR5[1], VAR32, VAR34, VAR15->VAR36[1], 1);
        FUN10(VAR7, VAR15->VAR5[2], VAR32, VAR34, VAR15->VAR36[2], 1);
    }
    else
    {
        FUN11(VAR7, (VAR37 *)(VAR15->VAR5[0]), VAR13, VAR14, VAR15->VAR36[0] / 4);
    }
    FUN12();
    VAR7->VAR27++;
    if (VAR7->VAR29)
    {
        return FUN8(VAR10, 1);
    }
    else
    {
        FUN13(&VAR7->VAR30);
        return VAR17 + (FUN14(&VAR7->VAR30) + 7) / 8;
    }
}