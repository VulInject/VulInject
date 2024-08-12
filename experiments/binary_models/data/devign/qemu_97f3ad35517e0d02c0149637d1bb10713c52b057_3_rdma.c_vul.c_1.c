static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uintptr_t VAR5, VAR6 *VAR7, VAR6 *VAR8, int VAR9, VAR10 *VAR11, VAR10 *VAR12)
{
    if (VAR4->VAR13)
    {
        if (VAR7)
        {
            *VAR7 = VAR4->VAR13->VAR7;
        }
        if (VAR8)
        {
            *VAR8 = VAR4->VAR13->VAR8;
        }
        return 0;
    }
    if (!VAR4->VAR14)
    {
        VAR4->VAR14 = FUN2(VAR4->VAR15 * sizeof(struct VAR16 *));
    }
    if (!VAR4->VAR14[VAR9])
    {
        uint64_t VAR17 = VAR12 - VAR11;
        FUN3(VAR17, VAR11);
        VAR4->VAR14[VAR9] = FUN4(VAR2->VAR18, VAR11, VAR17, (VAR8 ? (VAR19 | VAR20) : 0));
        if (!VAR4->VAR14[VAR9])
        {
            FUN5("");
            fprintf(VAR21, ""
                            "" VAR22 "" VAR22 "" VAR22 "" VAR22 "",
                    VAR4->VAR23, VAR9, (VAR24)VAR11, (VAR24)VAR12, VAR5, (VAR24)VAR4->VAR25, VAR2->VAR26);
            return -1;
        }
        VAR2->VAR26++;
    }
    if (VAR7)
    {
        *VAR7 = VAR4->VAR14[VAR9]->VAR7;
    }
    if (VAR8)
    {
        *VAR8 = VAR4->VAR14[VAR9]->VAR8;
    }
    return 0;
}