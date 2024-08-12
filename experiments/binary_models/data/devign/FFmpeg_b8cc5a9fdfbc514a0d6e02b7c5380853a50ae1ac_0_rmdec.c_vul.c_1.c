static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, int *VAR6, VAR3 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    uint32_t VAR19 = 0xFFFFFFFF;
    while (!FUN2(VAR12))
    {
        *VAR7 = FUN3(VAR12) - 3;
        if (VAR9->VAR20 > 0)
        {
            VAR14 = VAR9->VAR21;
            VAR13 = VAR9->VAR20;
            *VAR4 = VAR22;
            *VAR5 = 0;
        }
        else
        {
            VAR19 = (VAR19 << 8) + FUN4(VAR12);
            if (VAR19 == FUN5('', '', '', ''))
            {
                VAR13 = FUN6(VAR12) - 6;
                if (VAR13 < 0)
                    continue;
                goto VAR23;
            }
            if (VAR19 > (unsigned)0xFFFF || VAR19 < 12)
                continue;
            VAR13 = VAR19;
            VAR19 = 0xFFFFFFFF;
            VAR14 = FUN6(VAR12);
            *VAR4 = FUN7(VAR12);
            VAR15 = FUN4(VAR12);
            *VAR5 = FUN4(VAR12);
            VAR13 -= 12;
        }
        for (VAR16 = 0; VAR16 < VAR2->VAR24; VAR16++)
        {
            VAR18 = VAR2->VAR25[VAR16];
            if (VAR14 == VAR18->VAR26)
                break;
        }
        if (VAR16 == VAR2->VAR24)
        {
        VAR23:
            FUN8(VAR12, VAR13);
            VAR9->VAR20 -= VAR13;
            continue;
        }
        *VAR6 = VAR16;
        return VAR13;
    }
    return -1;
}