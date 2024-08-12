int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    int VAR6;
    int VAR7 = FUN2(VAR2->VAR8) && !FUN3(VAR2->VAR8) ? 2 : 1;
    int VAR9 = VAR2->VAR10 || VAR2->VAR11 || VAR2->VAR12 || VAR2->VAR13;
    int VAR14 = VAR2->VAR15 || VAR2->VAR16;
    int VAR17, VAR18;
    int VAR19 = FUN4(VAR2->VAR20 * sizeof(VAR21) + 66, 16);
    VAR22 *VAR23 = FUN5(VAR2->VAR24) ? VAR2->VAR25 : (VAR22 *)VAR2->VAR26;
    int VAR27 = 0;
    if (VAR2->VAR28 == 16)
        VAR19 <<= 1;
    VAR5 = VAR9 ? 2 : 1;
    VAR6 = VAR14 ? 2 : 1;
    VAR2->VAR29 = FUN6(VAR5, VAR6) + 2;
    VAR2->VAR30 = VAR5 + VAR6 + VAR7;
    VAR2->VAR31[0] = VAR5;
    VAR2->VAR31[1] = VAR5 + VAR6;
    VAR2->VAR32 = FUN7(sizeof(VAR33), VAR2->VAR30);
    if (!VAR2->VAR32)
        return FUN8(VAR34);
    VAR2->VAR35 = FUN7(sizeof(VAR36), VAR2->VAR29);
    VAR27 = FUN9(&VAR2->VAR35[0], VAR2->VAR24, VAR2->VAR37, VAR2->VAR38, VAR2->VAR39, VAR2->VAR40, 0);
    if (VAR27 < 0)
        goto VAR41;
    for (VAR3 = 1; VAR3 < VAR2->VAR29 - 2; ++VAR3)
    {
        VAR27 = FUN9(&VAR2->VAR35[VAR3], VAR2->VAR24, VAR2->VAR42 + VAR43, VAR2->VAR44 + VAR43, VAR2->VAR39, VAR2->VAR40, 0);
        if (VAR27 < 0)
            goto VAR41;
        VAR27 = FUN10(&VAR2->VAR35[VAR3], FUN4(VAR2->VAR45 * 2 + 78, 16), VAR2->VAR45);
        if (VAR27 < 0)
            goto VAR41;
    }
    VAR27 = FUN9(&VAR2->VAR35[VAR3], VAR2->VAR24, VAR2->VAR42 + VAR43, VAR2->VAR44 + VAR43, VAR2->VAR46, VAR2->VAR47, 1);
    if (VAR27 < 0)
        goto VAR41;
    VAR27 = FUN10(&VAR2->VAR35[VAR3], VAR19, VAR2->VAR20);
    if (VAR27 < 0)
        goto VAR41;
    FUN11(&VAR2->VAR35[VAR3], VAR19 >> 1, VAR2->VAR28 == 16);
    ++VAR3;
    VAR27 = FUN9(&VAR2->VAR35[VAR3], VAR2->VAR8, VAR2->VAR48, VAR2->VAR49, VAR2->VAR46, VAR2->VAR47, 0);
    if (VAR27 < 0)
        goto VAR41;
    VAR4 = 0;
    VAR17 = 0;
    VAR18 = 1;
    if (VAR9)
    {
        VAR27 = FUN12(&VAR2->VAR32[VAR4], &VAR2->VAR35[VAR17], &VAR2->VAR35[VAR18], VAR23);
        if (VAR27 < 0)
            goto VAR41;
        VAR2->VAR32[VAR4].VAR50 = VAR2->VAR51 != 0;
        ++VAR4;
        VAR17 = VAR18;
    }
    VAR18 = FUN6(VAR5, VAR6);
    VAR27 = FUN13(&VAR2->VAR32[VAR4], &VAR2->VAR35[VAR17], &VAR2->VAR35[VAR18], VAR2->VAR52, VAR2->VAR53, VAR2->VAR54, VAR2->VAR55);
    if (VAR27 < 0)
        goto VAR41;
    VAR2->VAR32[VAR4].VAR50 = VAR2->VAR51 != 0;
    ++VAR4;
    {
        VAR17 = 0;
        VAR18 = 1;
        if (VAR14)
        {
            VAR27 = FUN14(&VAR2->VAR32[VAR4], &VAR2->VAR35[VAR17], &VAR2->VAR35[VAR18], VAR23);
            if (VAR27 < 0)
                goto VAR41;
            ++VAR4;
            VAR17 = VAR18;
        }
        VAR18 = FUN6(VAR5, VAR6);
        if (VAR2->VAR56)
            VAR27 = FUN15(&VAR2->VAR32[VAR4], &VAR2->VAR35[VAR17], &VAR2->VAR35[VAR18], VAR2->VAR57, VAR2->VAR58, VAR2->VAR59, VAR2->VAR60);
        else
            VAR27 = FUN16(&VAR2->VAR32[VAR4], &VAR2->VAR35[VAR17], &VAR2->VAR35[VAR18]);
        if (VAR27 < 0)
            goto VAR41;
    }
    ++VAR4;
    {
        VAR17 = VAR2->VAR29 - 2;
        VAR18 = VAR2->VAR29 - 1;
        VAR27 = FUN17(VAR2, VAR2->VAR32 + VAR4, VAR2->VAR35 + VAR17, VAR2->VAR35 + VAR18);
        if (VAR27 < 0)
            goto VAR41;
    }
    return 0;
VAR41:
    FUN18(VAR2);
    return VAR27;
}