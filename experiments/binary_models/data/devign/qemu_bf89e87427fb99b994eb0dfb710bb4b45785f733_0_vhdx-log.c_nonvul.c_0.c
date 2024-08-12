int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool *VAR5, VAR6 **VAR7)
{
    int VAR8 = 0;
    VAR9 *VAR10;
    VHDXLogSequence VAR11 = {0};
    VAR10 = VAR4->VAR12[VAR4->VAR13];
    *VAR5 = false;
    if (VAR4->VAR14.VAR10 == NULL)
    {
        VAR4->VAR14.VAR10 = FUN2(VAR2, sizeof(VAR15));
    }
    VAR4->VAR14.VAR16 = VAR10->VAR17;
    VAR4->VAR14.VAR18 = VAR10->VAR19;
    if (VAR4->VAR14.VAR16 < VAR20 || VAR4->VAR14.VAR16 % VAR20)
    {
        VAR8 = -VAR21;
        goto VAR22;
    }
    if (VAR10->VAR23 != 0)
    {
        VAR8 = -VAR21;
        goto VAR22;
    }
    if (FUN3(VAR10->VAR24, VAR25))
    {
        goto VAR22;
    }
    if (VAR10->VAR19 == 0)
    {
        goto VAR22;
    }
    if (VAR10->VAR19 % VAR20)
    {
        VAR8 = -VAR21;
        goto VAR22;
    }
    VAR8 = FUN4(VAR2, VAR4, &VAR11);
    if (VAR8 < 0)
    {
        goto VAR22;
    }
    if (VAR11.VAR26)
    {
        if (VAR2->VAR27)
        {
            VAR8 = -VAR28;
            FUN5(VAR7, ""
                             "",
                       VAR2->VAR29);
            FUN6(VAR7, ""
                                    "",
                              VAR2->VAR29);
            goto VAR22;
        }
        VAR8 = FUN7(VAR2, VAR4, &VAR11);
        if (VAR8 < 0)
        {
            goto VAR22;
        }
        *VAR5 = true;
    }
VAR22:
    return VAR8;
}