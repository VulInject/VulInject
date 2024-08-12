static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    struct VAR6 *VAR7 = FUN2(VAR2, struct VAR6, VAR8);
    hwaddr VAR9 = VAR4->VAR10;
    ram_addr_t VAR11 = FUN3(VAR4->VAR11);
    bool VAR12 = FUN4(VAR4->VAR13) & ~(1 << VAR14);
    int VAR15 = FUN5(struct VAR16, VAR17) + (VAR7->VAR18->VAR19 + 1) * sizeof VAR7->VAR18->VAR17[0];
    void *VAR20;
    VAR7->VAR18 = FUN6(VAR7->VAR18, VAR15);
    if (VAR12)
    {
        VAR5 = false;
    }
    assert(VAR11);
    VAR20 = FUN7(VAR4->VAR13) + VAR4->VAR21;
    if (VAR5)
    {
        if (!FUN8(VAR7, VAR9, VAR11, (VAR22)VAR20))
        {
            return;
        }
    }
    else
    {
        if (!FUN9(VAR7, VAR9, VAR11))
        {
            return;
        }
    }
    FUN10(VAR7, VAR9, VAR11);
    if (VAR5)
    {
        FUN11(VAR7, VAR9, VAR11, (VAR22)VAR20);
    }
    else
    {
        FUN10(VAR7, VAR9, VAR11);
    }
    VAR7->VAR23 = FUN12(VAR7->VAR23, VAR9);
    VAR7->VAR24 = FUN13(VAR7->VAR24, VAR9 + VAR11 - 1);
    VAR7->VAR25 = true;