static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    VAR11 *const VAR12 = &VAR2->VAR12;
    int VAR13, VAR14;
    uint64_t VAR15;
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19 = 1;
    if (!VAR10 && VAR20)
    {
        if (VAR12->VAR21 & 1)
        {
            if (!VAR22)
                return;
        }
        else
        {
            VAR19 = VAR22 ? 0 : 1;
        }
    }
    if (VAR2->VAR23 == 2)
    {
        VAR18 = VAR2->VAR18;
        VAR16 = VAR2->VAR24[VAR18] == VAR2->VAR24[VAR18 - 1];
        VAR17 = VAR2->VAR24[VAR18] == VAR2->VAR24[VAR2->VAR25];
    }
    else
    {
        VAR16 = (VAR12->VAR26 > 0);
        VAR17 = (VAR12->VAR21 > !!VAR27);
    }
    VAR4 -= VAR7 + 1;
    VAR5 -= VAR8 + 1;
    VAR6 -= VAR8 + 1;
    VAR28 = VAR29;
    if (VAR9)
        VAR29 = VAR30;
    VAR30 = VAR28;
    if (VAR17)
    {
        if (VAR16)
        {
            FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26 - 1] + 8), *(VAR31 *)(VAR4 - 7), VAR15, 1);
        }
        FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26] + 0), *(VAR31 *)(VAR4 + 1), VAR15, VAR9);
        FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26] + 8), *(VAR31 *)(VAR4 + 9), VAR15, 1);
        if (VAR12->VAR26 + 1 < VAR12->VAR33)
        {
            FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26 + 1]), *(VAR31 *)(VAR4 + 17), VAR15, 1);
        }
    }
    if (VAR10 || !VAR34 || !(VAR12->VAR35 & VAR36))
    {
        if (VAR17)
        {
            if (VAR16)
            {
                FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26 - 1] + 16), *(VAR31 *)(VAR5 - 7), VAR15, 1);
                FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26 - 1] + 24), *(VAR31 *)(VAR6 - 7), VAR15, 1);
            }
            FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26] + 16), *(VAR31 *)(VAR5 + 1), VAR15, 1);
            FUN2(*(VAR31 *)(VAR2->VAR32[VAR19][VAR12->VAR26] + 24), *(VAR31 *)(VAR6 + 1), VAR15, 1);
        }
    }
}