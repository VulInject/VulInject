static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    uint32_t VAR8, VAR9;
    int VAR10;
    size_t VAR11;
    uint32_t VAR12;
    int64_t VAR13 = 0;
    uint64_t VAR14;
    uint64_t VAR15 = VAR4->VAR16;
    uint64_t VAR17;
    VAR8 = FUN2(VAR6, VAR13);
    if (VAR8 != 0x6d697368 || VAR7 < 244)
    {
        return 0;
    }
    VAR17 = FUN3(VAR6, VAR13 + 8);
    VAR14 = FUN3(VAR6, VAR13 + 0x18);
    VAR15 += VAR14;
    VAR13 += 204;
    VAR12 = (VAR7 - 204) / 40;
    VAR11 = sizeof(VAR18) * (VAR2->VAR19 + VAR12);
    VAR2->VAR20 = FUN4(VAR2->VAR20, VAR11 / 2);
    VAR2->VAR21 = FUN4(VAR2->VAR21, VAR11);
    VAR2->VAR22 = FUN4(VAR2->VAR22, VAR11);
    VAR2->VAR23 = FUN4(VAR2->VAR23, VAR11);
    VAR2->VAR24 = FUN4(VAR2->VAR24, VAR11);
    for (VAR9 = VAR2->VAR19; VAR9 < VAR2->VAR19 + VAR12; VAR9++)
    {
        VAR2->VAR20[VAR9] = FUN2(VAR6, VAR13);
        if (!FUN5(VAR2->VAR20[VAR9]))
        {
            VAR12--;
            VAR9--;
            VAR13 += 40;
            continue;
        }
        VAR2->VAR23[VAR9] = FUN3(VAR6, VAR13 + 8);
        VAR2->VAR23[VAR9] += VAR17;
        VAR2->VAR24[VAR9] = FUN3(VAR6, VAR13 + 0x10);
        if (VAR2->VAR24[VAR9] > VAR25)
        {
            FUN6("" VAR26 "" VAR27 "", VAR2->VAR24[VAR9], VAR9, VAR25);
            VAR10 = -VAR28;
            goto VAR29;
        }
        VAR2->VAR21[VAR9] = FUN3(VAR6, VAR13 + 0x18);
        VAR2->VAR21[VAR9] += VAR15;
        VAR2->VAR22[VAR9] = FUN3(VAR6, VAR13 + 0x20);
        if (VAR2->VAR22[VAR9] > VAR30)
        {
            FUN6("" VAR26 "" VAR27 "", VAR2->VAR22[VAR9], VAR9, VAR30);
            VAR10 = -VAR28;
            goto VAR29;
        }
        FUN7(VAR2, VAR9, &VAR4->VAR31, &VAR4->VAR32);
        VAR13 += 40;
    }
    VAR2->VAR19 += VAR12;
    return 0;
VAR29:
    return VAR10;
}