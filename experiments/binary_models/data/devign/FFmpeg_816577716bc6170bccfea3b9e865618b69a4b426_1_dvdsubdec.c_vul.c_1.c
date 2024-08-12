static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16;
    if (VAR8->VAR11)
    {
        int VAR17 = FUN2(VAR2, VAR11, VAR12);
        if (VAR17 < 0)
        {
            *VAR4 = 0;
            return VAR17;
        }
        VAR11 = VAR8->VAR11;
        VAR12 = VAR8->VAR12;
    }
    VAR16 = FUN3(VAR8, VAR15, VAR11, VAR12);
    if (VAR16 == FUN4(VAR18))
    {
        *VAR4 = 0;
        return FUN2(VAR2, VAR11, VAR12);
    }
    if (VAR16 < 0)
    {
    VAR19:
        FUN5(VAR15);
        *VAR4 = 0;
        return VAR12;
    }
    if (!VAR16 && FUN6(VAR15) == 0)
        goto VAR19;
    if (VAR8->VAR20 && !(VAR15->VAR21[0]->VAR22 & VAR23))
        goto VAR19;
    {
        char VAR24[32];
        snprintf(VAR24, sizeof(VAR24), "", VAR8->VAR25++);
        FUN7(NULL, "", VAR15->VAR26, VAR15->VAR27);
        FUN8(VAR24, VAR15->VAR21[0]->VAR28.VAR3[0], VAR15->VAR21[0]->VAR29, VAR15->VAR21[0]->VAR30, (VAR31 *)VAR15->VAR21[0]->VAR28.VAR3[1]);
    }
    FUN9(&VAR8->VAR11);
    VAR8->VAR12 = 0;
    *VAR4 = 1;
    return VAR12;
}