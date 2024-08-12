static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    DmgHeaderState VAR11;
    uint64_t VAR12, VAR13;
    uint64_t VAR14, VAR15;
    int64_t VAR16;
    int VAR17;
    VAR2->VAR18 = FUN2(NULL, VAR4, "", VAR2, &VAR19, false, VAR7);
    if (!VAR2->VAR18)
    {
        return -VAR20;
    }
    FUN3("");
    FUN4(VAR2, true);
    VAR9->VAR21 = 0;
    VAR9->VAR22 = VAR9->VAR23 = VAR9->VAR24 = VAR9->VAR25 = NULL;
    VAR11.VAR26 = 0;
    VAR11.VAR27 = 1;
    VAR11.VAR28 = 1;
    VAR16 = FUN5(VAR2->VAR18, VAR7);
    if (VAR16 < 0)
    {
        VAR17 = VAR16;
        goto VAR29;
    }
    VAR17 = FUN6(VAR2, VAR16 + 0x18, &VAR11.VAR26);
    if (VAR17 < 0)
    {
        goto VAR29;
    }
    else if (VAR11.VAR26 > VAR16)
    {
        VAR17 = -VAR20;
        goto VAR29;
    }
    VAR17 = FUN6(VAR2, VAR16 + 0x28, &VAR12);
    if (VAR17 < 0)
    {
        goto VAR29;
    }
    VAR17 = FUN6(VAR2, VAR16 + 0x30, &VAR13);
    if (VAR17 < 0)
    {
        goto VAR29;
    }
    if (VAR12 >= VAR16 || VAR13 > VAR16 - VAR12)
    {
        VAR17 = -VAR20;
        goto VAR29;
    }
    VAR17 = FUN6(VAR2, VAR16 + 0xd8, &VAR14);
    if (VAR17 < 0)
    {
        goto VAR29;
    }
    VAR17 = FUN6(VAR2, VAR16 + 0xe0, &VAR15);
    if (VAR17 < 0)
    {
        goto VAR29;
    }
    if (VAR14 >= VAR16 || VAR15 > VAR16 - VAR14)
    {
        VAR17 = -VAR20;
        goto VAR29;
    }
    VAR17 = FUN6(VAR2, VAR16 + 0x1ec, (VAR30 *)&VAR2->VAR31);
    if (VAR17 < 0)
    {
        goto VAR29;
    }
    if (VAR2->VAR31 < 0)
    {
        VAR17 = -VAR20;
        goto VAR29;
    }
    if (VAR13 != 0)
    {
        VAR17 = FUN7(VAR2, &VAR11, VAR12, VAR13);
        if (VAR17 < 0)
        {
            goto VAR29;
        }
    }
    else if (VAR15 != 0)
    {
        VAR17 = FUN8(VAR2, &VAR11, VAR14, VAR15);
        if (VAR17 < 0)
        {
            goto VAR29;
        }
    }
    else
    {
        VAR17 = -VAR20;
        goto VAR29;
    }
    VAR9->VAR32 = FUN9(VAR2->VAR18->VAR2, VAR11.VAR27 + 1);
    VAR9->VAR33 = FUN9(VAR2->VAR18->VAR2, 512 * VAR11.VAR28);
    if (VAR9->VAR32 == NULL || VAR9->VAR33 == NULL)
    {
        VAR17 = -VAR34;
        goto VAR29;
    }
    if (FUN10(&VAR9->VAR35) != VAR36)
    {
        VAR17 = -VAR20;
        goto VAR29;
    }
    VAR9->VAR37 = VAR9->VAR21;
    FUN11(&VAR9->VAR38);
    return 0;
VAR29:
    FUN12(VAR9->VAR39);
    FUN12(VAR9->VAR22);
    FUN12(VAR9->VAR23);
    FUN12(VAR9->VAR24);
    FUN12(VAR9->VAR25);
    FUN13(VAR9->VAR32);
    FUN13(VAR9->VAR33);
    return VAR17;
}