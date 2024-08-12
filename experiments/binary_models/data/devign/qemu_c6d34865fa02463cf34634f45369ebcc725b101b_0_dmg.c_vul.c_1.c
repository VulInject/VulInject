static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    uint32_t VAR8, VAR9;
    int VAR10;
    size_t VAR11;
    uint32_t VAR12;
    int64_t VAR13 = 0;
    VAR8 = FUN2(VAR6, VAR13);
    if (VAR8 != 0x6d697368 || VAR7 < 244)
    {
        return 0;
    }
    VAR13 += 4;
    VAR13 += 200;
    VAR12 = (VAR7 - 204) / 40;
    VAR11 = sizeof(VAR14) * (VAR2->VAR15 + VAR12);
    VAR2->VAR16 = FUN3(VAR2->VAR16, VAR11 / 2);
    VAR2->VAR17 = FUN3(VAR2->VAR17, VAR11);
    VAR2->VAR18 = FUN3(VAR2->VAR18, VAR11);
    VAR2->VAR19 = FUN3(VAR2->VAR19, VAR11);
    VAR2->VAR20 = FUN3(VAR2->VAR20, VAR11);
    for (VAR9 = VAR2->VAR15; VAR9 < VAR2->VAR15 + VAR12; VAR9++)
    {
        VAR2->VAR16[VAR9] = FUN2(VAR6, VAR13);
        VAR13 += 4;
        if (VAR2->VAR16[VAR9] != 0x80000005 && VAR2->VAR16[VAR9] != 1 && VAR2->VAR16[VAR9] != 2)
        {
            if (VAR2->VAR16[VAR9] == 0xffffffff && VAR9 > 0)
            {
                VAR4->VAR21 = VAR2->VAR17[VAR9 - 1] + VAR2->VAR18[VAR9 - 1];
                VAR4->VAR22 = VAR2->VAR19[VAR9 - 1] + VAR2->VAR20[VAR9 - 1];
            }
            VAR12--;
            VAR9--;
            VAR13 += 36;
            continue;
        }
        VAR13 += 4;
        VAR2->VAR19[VAR9] = FUN4(VAR6, VAR13);
        VAR2->VAR19[VAR9] += VAR4->VAR22;
        VAR13 += 8;
        VAR2->VAR20[VAR9] = FUN4(VAR6, VAR13);
        VAR13 += 8;
        if (VAR2->VAR20[VAR9] > VAR23)
        {
            FUN5("" VAR24 "" VAR25 "", VAR2->VAR20[VAR9], VAR9, VAR23);
            VAR10 = -VAR26;
            goto VAR27;
        }
        VAR2->VAR17[VAR9] = FUN4(VAR6, VAR13);
        VAR2->VAR17[VAR9] += VAR4->VAR21;
        VAR13 += 8;
        VAR2->VAR18[VAR9] = FUN4(VAR6, VAR13);
        VAR13 += 8;
        if (VAR2->VAR18[VAR9] > VAR28)
        {
            FUN5("" VAR24 "" VAR25 "", VAR2->VAR18[VAR9], VAR9, VAR28);
            VAR10 = -VAR26;
            goto VAR27;
        }
        FUN6(VAR2, VAR9, &VAR4->VAR29, &VAR4->VAR30);
    }
    VAR2->VAR15 += VAR12;
    return 0;
VAR27:
    return VAR10;
}