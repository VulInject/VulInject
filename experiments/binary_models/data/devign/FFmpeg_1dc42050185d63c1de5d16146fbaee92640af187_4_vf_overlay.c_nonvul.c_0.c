static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5 = FUN2(VAR4, ~0);
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR11;
    if (!VAR5)
        return FUN3(VAR12);
    VAR5->VAR13 = FUN4(VAR5->VAR13, VAR7->VAR14[VAR15]->VAR16, VAR7->VAR17[0]->VAR16);
    if (!VAR10->VAR18 || VAR10->VAR18->VAR13 < VAR5->VAR13)
    {
        VAR3 *VAR19 = VAR10->VAR18;
        VAR10->VAR18 = NULL;
        FUN5(VAR7->VAR14[VAR20]);
        if (VAR10->VAR18)
        {
            if (VAR19)
                FUN6(VAR19);
        }
        else
            VAR10->VAR18 = VAR19;
    }
    return FUN7(VAR2->VAR8->VAR17[0], VAR5);
}