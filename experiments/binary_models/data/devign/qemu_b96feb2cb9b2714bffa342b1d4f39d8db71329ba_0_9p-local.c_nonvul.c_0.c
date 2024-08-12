static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    int VAR8 = -1;
    int VAR9;
    if (VAR2->VAR10 & VAR11 && FUN2(VAR2, VAR5))
    {
        VAR12 = VAR13;
        return -1;
    }
    VAR9 = FUN3(VAR2, VAR4->VAR14);
    if (VAR9 == -1)
    {
        return -1;
    }
    if (VAR2->VAR10 & VAR15 || VAR2->VAR10 & VAR11)
    {
        VAR8 = FUN4(VAR9, VAR5, VAR2->VAR16 | VAR17, 0);
        if (VAR8 == -1)
        {
            goto VAR18;
        }
        if (VAR2->VAR10 & VAR15)
        {
            VAR8 = FUN5(VAR9, VAR5, VAR7);
        }
        else
        {
            VAR8 = FUN6(VAR9, VAR5, VAR7);
        }
        if (VAR8 == -1)
        {
            goto VAR19;
        }
    }
    else if (VAR2->VAR10 & VAR20 || VAR2->VAR10 & VAR21)
    {
        VAR8 = FUN4(VAR9, VAR5, VAR7->VAR22, VAR7->VAR23);
        if (VAR8 == -1)
        {
            goto VAR18;
        }
        VAR8 = FUN7(VAR2, VAR9, VAR5, VAR7);
        if (VAR8 == -1)
        {
            goto VAR19;
        }
    }
    goto VAR18;
VAR19:
    FUN8(VAR9, VAR5, 0);
VAR18:
    FUN9(VAR9);
    return VAR8;
}