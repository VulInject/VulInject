int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const int VAR6 = VAR2->VAR7 * (VAR2->VAR8 + 1) + 1;
    const int VAR9 = VAR2->VAR7 * VAR2->VAR8;
    const int VAR10 = VAR2->VAR11 * VAR2->VAR8 * 2;
    const int VAR12 = VAR2->VAR13 * VAR2->VAR8 * 4;
    int VAR14;
    int VAR15 = -1;
    if (VAR5)
    {
        assert(VAR4->VAR16[0]);
        assert(VAR4->VAR17 == 0 || VAR4->VAR17 == VAR18);
        VAR4->VAR17 = VAR18;
    }
    else
    {
        assert(!VAR4->VAR16[0]);
        if (FUN2(VAR2, VAR4) < 0)
            return -1;
        VAR2->VAR19 = VAR4->VAR19[0];
        VAR2->VAR20 = VAR4->VAR19[1];
    }
    if (VAR4->VAR21 == NULL)
    {
        if (VAR2->VAR22)
        {
            FUN3(VAR2->VAR23, VAR4->VAR24, VAR9 * sizeof(VAR25), VAR26)
            FUN3(VAR2->VAR23, VAR4->VAR27, VAR9 * sizeof(VAR25), VAR26) FUN3(VAR2->VAR23, VAR4->VAR28, VAR9 * sizeof(VAR29), VAR26)
        }
        FUN3(VAR2->VAR23, VAR4->VAR30, VAR9 * sizeof(VAR31) + 2, VAR26)
        FUN3(VAR2->VAR23, VAR4->VAR21, VAR9 * sizeof(VAR31), VAR26) FUN3(VAR2->VAR23, VAR4->VAR32, (VAR6 + VAR2->VAR7) * sizeof(VAR33), VAR26) VAR4->VAR34 = VAR4->VAR32 + 2 * VAR2->VAR7 + 1;
        if (VAR2->VAR35 == VAR36)
        {
            for (VAR14 = 0; VAR14 < 2; VAR14++)
            {
                FUN3(VAR2->VAR23, VAR4->VAR37[VAR14], 2 * (VAR12 + 4) * sizeof(VAR25), VAR26)
                VAR4->VAR38[VAR14] = VAR4->VAR37[VAR14] + 4;
                FUN3(VAR2->VAR23, VAR4->VAR39[VAR14], 4 * VAR9 * sizeof(VAR31), VAR26)
            }
            VAR4->VAR40 = 2;
        }
        else if (VAR2->VAR35 == VAR41 || VAR2->VAR22 || (VAR2->VAR23->VAR42 & VAR43) || (VAR2->VAR23->VAR44))
        {
            for (VAR14 = 0; VAR14 < 2; VAR14++)
            {
                FUN3(VAR2->VAR23, VAR4->VAR37[VAR14], 2 * (VAR10 + 4) * sizeof(VAR25), VAR26)
                VAR4->VAR38[VAR14] = VAR4->VAR37[VAR14] + 4;
                FUN3(VAR2->VAR23, VAR4->VAR39[VAR14], 4 * VAR9 * sizeof(VAR31), VAR26)
            }
            VAR4->VAR40 = 3;
        }
        if (VAR2->VAR23->VAR42 & VAR45)
        {
            FUN3(VAR2->VAR23, VAR4->VAR46, 64 * VAR9 * sizeof(VAR47) * 6, VAR26)
        }
        VAR4->VAR48 = VAR2->VAR7;
        FUN3(VAR2->VAR23, VAR4->VAR49, 1 * sizeof(VAR50), VAR26)
    }
    memmove(VAR2->VAR51 + 1, VAR2->VAR51, VAR52 - 1);
    VAR2->VAR51[0] = VAR2->VAR53 ? VAR54 : VAR2->VAR55;
    if (VAR4->VAR56 < VAR52 && VAR2->VAR51[VAR4->VAR56] == VAR54)
        VAR4->VAR56 = VAR57;
    VAR4->VAR58 = NULL;
    return 0;
VAR26:
    if (VAR15 >= 0)
        FUN4(VAR2, VAR4);
    return -1;
}