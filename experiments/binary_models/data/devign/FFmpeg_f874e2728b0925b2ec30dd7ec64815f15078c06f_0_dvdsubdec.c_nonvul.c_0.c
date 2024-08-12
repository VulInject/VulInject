static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16 = 0;
    int VAR17;
    if (VAR8->VAR12)
    {
        int VAR18 = FUN2(VAR2, VAR11, VAR12);
        if (VAR18 < 0)
        {
            *VAR4 = 0;
            return VAR18;
        }
        VAR11 = VAR8->VAR11;
        VAR12 = VAR8->VAR12;
        VAR16 = 1;
    }
    VAR17 = FUN3(VAR8, VAR15, VAR11, VAR12);
    if (VAR17 == FUN4(VAR19))
    {
        *VAR4 = 0;
        return VAR16 ? 0 : FUN2(VAR2, VAR11, VAR12);
    }
    if (VAR17 < 0)
    {
    VAR20:
        FUN5(VAR15);
        *VAR4 = 0;
        return VAR12;
    }
    if (!VAR17 && FUN6(VAR15) == 0)
        goto VAR20;
    if (VAR8->VAR21 && !(VAR15->VAR22[0]->VAR23 & VAR24))
        goto VAR20;
    {
        char VAR25[32];
        snprintf(VAR25, sizeof(VAR25), "", VAR8->VAR26++);
        FUN7(NULL, "", VAR15->VAR27, VAR15->VAR28);
        FUN8(VAR25, VAR15->VAR22[0]->VAR29.VAR3[0], VAR15->VAR22[0]->VAR30, VAR15->VAR22[0]->VAR31, (VAR32 *)VAR15->VAR22[0]->VAR29.VAR3[1]);
    }
    VAR8->VAR12 = 0;
    *VAR4 = 1;
    return VAR12;
}