static VAR1 FUN1(FUN2 (*VAR2)[3], int VAR3)
{
    int VAR4, VAR5, VAR6;
    struct elem_to_channel VAR7[4 * VAR8] = {{0}};
    int VAR9, VAR10, VAR11;
    uint64_t VAR12;
    if (FUN3(VAR7) < VAR3)
        return 0;
    VAR4 = 0;
    VAR9 = FUN4(VAR2, VAR3, VAR13, &VAR4);
    if (VAR9 < 0)
        return 0;
    VAR10 = FUN4(VAR2, VAR3, VAR14, &VAR4);
    if (VAR10 < 0)
        return 0;
    VAR11 = FUN4(VAR2, VAR3, VAR15, &VAR4);
    if (VAR11 < 0)
        return 0;
    VAR4 = 0;
    if (VAR9 & 1)
    {
        VAR7[VAR4] = (struct VAR16){.VAR17 = VAR18, .VAR19 = VAR20, .VAR21 = VAR2[VAR4][1], .VAR22 = VAR13};
        VAR4++;
        VAR9--;
    }
    if (VAR9 >= 4)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR23, VAR24, VAR13);
        VAR9 -= 2;
    }
    if (VAR9 >= 2)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR25, VAR26, VAR13);
        VAR9 -= 2;
    }
    while (VAR9 >= 2)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR27, VAR27, VAR13);
        VAR9 -= 2;
    }
    if (VAR10 >= 2)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR28, VAR29, VAR13);
        VAR10 -= 2;
    }
    while (VAR10 >= 2)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR27, VAR27, VAR14);
        VAR10 -= 2;
    }
    while (VAR11 >= 4)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR27, VAR27, VAR15);
        VAR11 -= 2;
    }
    if (VAR11 >= 2)
    {
        VAR4 += FUN5(VAR7, VAR2, VAR4, VAR3, VAR30, VAR31, VAR15);
        VAR11 -= 2;
    }
    if (VAR11)
    {
        VAR7[VAR4] = (struct VAR16){.VAR17 = VAR32, .VAR19 = VAR20, .VAR21 = VAR2[VAR4][1], .VAR22 = VAR15};
        VAR4++;
        VAR11--;
    }
    if (VAR4 < VAR3 && VAR2[VAR4][2] == VAR33)
    {
        VAR7[VAR4] = (struct VAR16){.VAR17 = VAR34, .VAR19 = VAR35, .VAR21 = VAR2[VAR4][1], .VAR22 = VAR33};
        VAR4++;
    }
    while (VAR4 < VAR3 && VAR2[VAR4][2] == VAR33)
    {
        VAR7[VAR4] = (struct VAR16){.VAR17 = VAR27, .VAR19 = VAR35, .VAR21 = VAR2[VAR4][1], .VAR22 = VAR33};
        VAR4++;
    }
    VAR6 = VAR5 = VAR4;
    do
    {
        int VAR36 = 0;
        for (VAR4 = 1; VAR4 < VAR5; VAR4++)
        {
            if (VAR7[VAR4 - 1].VAR17 > VAR7[VAR4].VAR17)
            {
                FUN6(struct VAR16, VAR7[VAR4 - 1], VAR7[VAR4]);
                VAR36 = VAR4;
            }
        }
        VAR5 = VAR36;
    } while (VAR5 > 0);
    VAR12 = 0;
    for (VAR4 = 0; VAR4 < VAR6; VAR4++)
    {
        VAR2[VAR4][0] = VAR7[VAR4].VAR19;
        VAR2[VAR4][1] = VAR7[VAR4].VAR21;
        VAR2[VAR4][2] = VAR7[VAR4].VAR22;
        if (VAR7[VAR4].VAR17 != VAR27)
        {
            VAR12 |= VAR7[VAR4].VAR17;
        }
    }
    return VAR12;
}