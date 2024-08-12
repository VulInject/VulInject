static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5);
    int VAR6, VAR7 = 0, VAR8 = 0;
    VAR9 *VAR10 = NULL, *VAR11 = VAR2->VAR12;
    int VAR13 = FUN3(VAR2, 1);
    int VAR14 = FUN4(VAR2, 1);
    int VAR15 = FUN5(VAR2, 1);
    int VAR16 = FUN6(VAR4);
    VAR17 *VAR18 = (VAR17 *)&VAR2->VAR19[VAR20 - VAR21];
    uint8_t VAR22[3 * 3];
    int VAR23 = FUN7(VAR4);
    VAR24 *VAR25 = NULL;
    VAR26 *VAR27 = NULL;
    int VAR28 = 0;
    int VAR29 = -1;
    ram_addr_t VAR30 = ~0l;
    ram_addr_t VAR31 = 0l;
    ram_addr_t VAR32 = 0;
    switch (VAR15)
    {
    case 1:
        VAR25 = VAR33[VAR23];
        break;
    case 2:
        VAR25 = VAR34[VAR23];
        break;
    case 4:
        VAR25 = VAR35[VAR23];
        break;
    default:
        FUN8("", VAR2->VAR36);
        FUN9();
        break;
    }
    if (FUN10(VAR2, 1))
    {
        VAR27 = VAR37[VAR23];
        VAR10 = FUN11(VAR2, 1);
        VAR7 = FUN12(VAR2, 1);
        VAR8 = FUN13(VAR2, 1);
        FUN14(VAR2, 1, VAR22);
    }
    if (VAR2->VAR38 != VAR13 || VAR2->VAR39 != VAR14)
    {
        FUN15(VAR2->VAR5, VAR13, VAR14);
        VAR4 = FUN2(VAR2->VAR5);
        VAR2->VAR38 = VAR13;
        VAR2->VAR39 = VAR14;
        VAR28 = 1;
    }
    FUN16(&VAR2->VAR40);
    for (VAR6 = 0; VAR6 < VAR14; VAR6++)
    {
        int update, VAR41;
        ram_addr_t VAR42 = VAR32;
        ram_addr_t VAR43 = VAR32 + VAR13 * VAR15 - 1;
        VAR41 = VAR27 && VAR8 <= VAR6 && VAR6 < VAR8 + VAR44;
        update = VAR28 || VAR41;
        update |= FUN17(&VAR2->VAR40, VAR42, VAR43 - VAR42, VAR45);
        if (update)
        {
            VAR9 *VAR46 = FUN18(VAR4);
            VAR46 += VAR6 * VAR13 * VAR16;
            FUN19(VAR46, VAR11, VAR13, VAR18);
            if (VAR41)
            {
                FUN20(VAR46, VAR10, VAR13, VAR22, VAR7, VAR6 - VAR8);
            }
            if (VAR29 < 0)
            {
                VAR29 = VAR6;
            }
            if (VAR42 < VAR30)
            {
                VAR30 = VAR42;
            }
            if (VAR43 > VAR31)
            {
                VAR31 = VAR43;
            }
        }
        else
        {
            if (VAR29 >= 0)
            {
                FUN21(VAR2->VAR5, 0, VAR29, VAR13, VAR6 - VAR29);
                VAR29 = -1;
            }
        }
        VAR11 += VAR13 * VAR15;
        VAR32 += VAR13 * VAR15;
    }
    if (VAR29 >= 0)
    {
        FUN21(VAR2->VAR5, 0, VAR29, VAR13, VAR6 - VAR29);
    }
    if (VAR30 != ~0l)
    {
        FUN22(&VAR2->VAR40, VAR30, VAR31 + VAR47, VAR45);
    }
}