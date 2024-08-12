static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5, hwaddr VAR6)
{
    int VAR7;
    if (!VAR2->VAR8 || !VAR2->VAR9)
    {
        return 0;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR10->VAR11; ++VAR7)
    {
        struct VAR12 *VAR13 = VAR2->VAR10->VAR14 + VAR7;
        FUN2(VAR2, VAR4, VAR5, VAR6, VAR13->VAR15, FUN3(VAR13->VAR15, VAR13->VAR16));
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR17; ++VAR7)
    {
        struct VAR18 *VAR19 = VAR2->VAR20 + VAR7;
        FUN2(VAR2, VAR4, VAR5, VAR6, VAR19->VAR21, FUN3(VAR19->VAR21, VAR19->VAR22));
    }
    return 0;
}