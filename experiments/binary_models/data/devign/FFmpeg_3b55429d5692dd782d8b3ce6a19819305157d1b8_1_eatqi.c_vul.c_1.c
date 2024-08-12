static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    const VAR7 *VAR11 = VAR8 + VAR9;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = &VAR13->VAR16;
    VAR16->VAR17 = FUN2(&VAR8[0]);
    VAR16->VAR18 = FUN2(&VAR8[2]);
    FUN3(VAR16, VAR8[4]);
    VAR8 += 8;
    if (VAR13->VAR19.VAR3[0])
        VAR2->FUN4(VAR2, &VAR13->VAR19);
    if (VAR16->VAR2->VAR17 != VAR16->VAR17 || VAR16->VAR2->VAR18 != VAR16->VAR18)
        FUN5(VAR16->VAR2, VAR16->VAR17, VAR16->VAR18);
    if (VAR2->FUN6(VAR2, &VAR13->VAR19) < 0)
    {
        FUN7(VAR2, VAR20, "");
        return -1;
    }
    FUN8(&VAR13->VAR21, &VAR13->VAR22, (VAR11 - VAR8) + VAR23);
    if (!VAR13->VAR21)
        return FUN9(VAR24);
    VAR16->VAR25.FUN10(VAR13->VAR21, (const VAR26 *)VAR8, (VAR11 - VAR8) / 4);
    FUN11(&VAR16->VAR27, VAR13->VAR21, 8 * (VAR11 - VAR8));
    VAR16->VAR28[0] = VAR16->VAR28[1] = VAR16->VAR28[2] = 0;
    for (VAR16->VAR29 = 0; VAR16->VAR29 < (VAR2->VAR18 + 15) / 16; VAR16->VAR29++)
        for (VAR16->VAR30 = 0; VAR16->VAR30 < (VAR2->VAR17 + 15) / 16; VAR16->VAR30++)
        {
            if (FUN12(VAR16, VAR13->VAR31) < 0)
                break;
            FUN13(VAR13, VAR13->VAR31);
        }
    *VAR4 = sizeof(VAR32);
    *(VAR32 *)VAR3 = VAR13->VAR19;
    return VAR9;
}