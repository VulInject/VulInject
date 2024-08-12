static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12;
    AAC_DECODER_ERROR VAR13;
    UINT VAR14 = VAR6->VAR15;
    VAR13 = FUN2(VAR8->VAR16, &VAR6->VAR3, &VAR6->VAR15, &VAR14);
    if (VAR13 != VAR17)
    {
        FUN3(VAR2, VAR18, "", VAR13);
        return VAR19;
    }
    VAR13 = FUN4(VAR8->VAR16, (VAR20 *)VAR8->VAR21, VAR8->VAR22, 0);
    if (VAR13 == VAR23)
    {
        VAR12 = VAR6->VAR15 - VAR14;
        goto VAR24;
    }
    if (VAR13 != VAR17)
    {
        FUN3(VAR2, VAR18, "", VAR13);
        VAR12 = VAR25;
        goto VAR24;
    }
    if ((VAR12 = FUN5(VAR2)) < 0)
        goto VAR24;
    VAR11->VAR26 = VAR2->VAR27;
    if ((VAR12 = FUN6(VAR2, VAR11, 0)) < 0)
        goto VAR24;
    memcpy(VAR11->VAR28[0], VAR8->VAR21, VAR2->VAR29 * VAR2->VAR27 * FUN7(VAR2->VAR30));
    *VAR4 = 1;
    VAR12 = VAR6->VAR15 - VAR14;
VAR24:
    return VAR12;
}