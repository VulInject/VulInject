static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8[VAR2->VAR9];
    const struct VAR10 *VAR10 = VAR2->VAR10[VAR2->VAR9];
    const struct VAR10 *VAR11 = VAR2->VAR9 ? VAR2->VAR10[VAR2->VAR9 - 1] : NULL;
    FUN2(VAR7);
    if (!VAR11)
        return;
    FUN3(VAR7, "", VAR4->VAR8[VAR2->VAR9 - 1].VAR12);
    if (VAR4->VAR13 || !(VAR10->VAR14 & (VAR15 | VAR16)))
    {
        FUN3(VAR7, "", VAR2->VAR10[VAR2->VAR9]->VAR17, VAR4->VAR18);
        if (VAR11->VAR14 & VAR15)
        {
            int VAR19 = VAR11->VAR20 == VAR21 ? VAR2->VAR22 : VAR2->VAR23[VAR2->VAR9 - 1];
            FUN3(VAR7, "", VAR19, VAR4->VAR18);
        }
    }
}