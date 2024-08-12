static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8[VAR2->VAR9];
    const struct VAR10 *VAR10 = VAR2->VAR10[VAR2->VAR9];
    const struct VAR10 *VAR11 = VAR2->VAR9 ? VAR2->VAR10[VAR2->VAR9 - 1] : NULL;
    FUN2(VAR7);
    if (!VAR11)
    {
        FUN3("");
        return;
    }
    if (VAR2->VAR12[VAR2->VAR9 - 1])
        FUN3("");
    FUN4(VAR7, "", VAR4->VAR8[VAR2->VAR9 - 1].VAR13);
    if (VAR4->VAR14 || !(VAR10->VAR15 & (VAR16 | VAR17)))
    {
        FUN4(VAR7, "", VAR7->VAR13[0] ? "" : "", VAR2->VAR10[VAR2->VAR9]->VAR18);
        if (VAR11->VAR15 & VAR16)
        {
            int VAR19 = VAR11->VAR20 == VAR21 ? VAR2->VAR22 : VAR2->VAR12[VAR2->VAR9 - 1];
            FUN4(VAR7, "", VAR19);
        }
    }
    if (!(VAR10->VAR15 & (VAR16 | VAR17)))
        FUN3("", VAR7->VAR13);
}