static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    VAR10 = FUN2(&VAR3);
    if (VAR10 != 0)
    {
        return VAR10;
    }
    VAR7->VAR5 = VAR5 | VAR11;
    VAR7->VAR5 &= ~VAR12;
    if (VAR4 & VAR13)
    {
        VAR7->VAR5 |= VAR14;
    }
    else
    {
        VAR7->VAR5 |= VAR15;
    }
    if ((VAR4 & VAR16))
        VAR7->VAR5 |= VAR17;
    if (!(VAR4 & VAR18))
        VAR7->VAR5 |= VAR19;
    VAR7->VAR9 = -1;
    VAR9 = FUN3(VAR3, VAR7->VAR5, 0644);
    if (VAR9 < 0)
    {
        VAR10 = -VAR20;
        if (VAR10 == -VAR21)
            VAR10 = -VAR22;
        return VAR10;
    }
    VAR7->VAR9 = VAR9;
    VAR7->VAR23 = NULL;
    if ((VAR4 & VAR16))
    {
        VAR7->VAR24 = 32 * VAR25;
        VAR7->VAR23 = FUN4(VAR25, VAR7->VAR24);
        if (VAR7->VAR23 == NULL)
        {
            goto VAR26;
        }
    }
    if (FUN5() < 0)
    {
        goto VAR27;
    }
    if (FUN6(&VAR7->VAR28, &VAR7->VAR29, VAR4))
    {
        goto VAR26;
    }
    if (FUN7(VAR7->VAR9))
    {
        VAR7->VAR30 = 1;
    }
    return 0;
VAR27:
    FUN8(VAR7->VAR23);
VAR26:
    FUN9(VAR9);
    return -VAR20;
}