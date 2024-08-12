FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = FUN2(VAR4);
    int VAR5 = 0;
    struct VAR6 *VAR7, *VAR8;
    FUN3("");
    if (VAR2->VAR9 == 0)
        return;
VAR10:
    if (!FUN4(VAR2->VAR11))
        return;
    if (VAR2->VAR12.VAR13 != &VAR2->VAR12)
    {
        VAR7 = VAR2->VAR12.VAR13;
    }
    else
    {
        if (VAR2->VAR14 != &VAR2->VAR15)
            VAR7 = VAR2->VAR14;
        else
            VAR7 = VAR2->VAR15.VAR13;
        VAR2->VAR14 = VAR7->VAR13;
    }
    VAR8 = VAR7->VAR16;
    FUN5(VAR7);
    VAR2->VAR9--;
    if (VAR7->VAR17 != VAR7)
    {
        FUN6(VAR7->VAR17, VAR8);
        FUN7(VAR7);
    }
    if (VAR7->VAR18)
    {
        if (--VAR7->VAR18->VAR19 == 0)
            VAR7->VAR18->VAR20 = 0;
    }
    if (VAR7->VAR21 < VAR3)
    {
        FUN8(VAR7);
    }
    else
    {
        if (FUN9(VAR2, VAR7))
        {
            FUN8(VAR7);
        }
        else
        {
            FUN6(VAR7, VAR8);
            VAR5++;
        }
    }
    if (VAR2->VAR9)
        goto VAR10;
    VAR2->VAR9 = VAR5;
}