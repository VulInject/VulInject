static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    ThreadFrame VAR14 = {.VAR15 = VAR3};
    VAR16 *VAR17 = VAR3;
    int VAR18 = 1;
    int VAR19;
    FUN2(VAR2, "", VAR9);
VAR20:
    if ((VAR19 = FUN3(VAR12, VAR17, VAR8, VAR9, VAR18)) < 0)
        return VAR19;
    if ((VAR2->VAR21 || VAR2->VAR22) && (VAR12->VAR21 != VAR2->VAR21 || VAR12->VAR22 != VAR2->VAR22))
    {
        FUN4(VAR2, VAR23, "", VAR2->VAR21, VAR2->VAR22, VAR12->VAR21, VAR12->VAR22);
        VAR18 = 1;
    }
    if (VAR2->VAR24 != VAR25 && VAR2->VAR24 != VAR12->VAR24)
    {
        FUN4(VAR2, VAR23, "", FUN5(VAR2->VAR24), FUN5(VAR12->VAR24));
        VAR18 = 1;
    }
    VAR2->VAR24 = VAR12->VAR24;
    VAR19 = FUN6(VAR2, VAR12->VAR21, VAR12->VAR22);
    if (VAR19 < 0)
        return VAR19;
    if (VAR18)
    {
        if ((VAR19 = FUN7(VAR2, &VAR14, 0)) < 0)
            return VAR19;
        VAR17->VAR26 = VAR27;
        VAR17->VAR28 = 1;
    }
    VAR12->VAR9 = VAR9 - 0x280;
    VAR12->VAR8 = VAR8 + 0x280;
    VAR2->FUN8(VAR2, VAR29, VAR17, NULL, VAR12->VAR30);
    if (VAR18 && VAR17->VAR31)
    {
        VAR8 += VAR12->VAR32->VAR33;
        VAR9 -= VAR12->VAR32->VAR33;
        VAR18 = 0;
        goto VAR20;
    }
    *VAR4 = 1;
    return VAR6->VAR10;
}