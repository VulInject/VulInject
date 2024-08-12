static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    pkt_type_t VAR7;
    int VAR8;
    while (!FUN2(VAR6))
    {
        VAR9 *VAR10;
        int VAR11, VAR12, VAR13;
        int VAR14, VAR15, VAR16 = 0;
        int VAR17;
        if (!FUN3(VAR6, &VAR7, &VAR8))
        {
            if (!FUN2(VAR6))
                FUN4(VAR2, VAR18, "");
            return -1;
        }
        if (VAR7 == VAR19)
        {
            FUN5(VAR2, VAR8);
            continue;
        }
        if (VAR7 != VAR20)
        {
            FUN6(VAR6, VAR8);
            continue;
        }
        if (VAR8 < 16)
        {
            FUN4(VAR2, VAR18, "");
            continue;
        }
        VAR8 -= 16;
        VAR11 = FUN7(VAR6);
        VAR12 = FUN7(VAR6);
        VAR17 = FUN8(VAR2, VAR12, VAR11);
        if (VAR17 < 0)
            return VAR17;
        VAR10 = VAR2->VAR21[VAR17];
        VAR14 = FUN9(VAR6);
        VAR15 = FUN9(VAR6);
        FUN9(VAR6);
        FUN7(VAR6);
        FUN7(VAR6);
        if (VAR10->VAR22->VAR23 == VAR24 || VAR10->VAR22->VAR23 == VAR25)
        {
            int VAR26 = VAR15 >> 16;
            int VAR27 = VAR15 & 0xffff;
            int VAR28 = FUN10(VAR10->VAR22->VAR23) >> 3;
            if (VAR26 <= VAR27 && VAR27 * VAR28 <= VAR8)
            {
                FUN6(VAR6, VAR26 * VAR28);
                VAR16 = VAR8 - VAR27 * VAR28;
                VAR8 = (VAR27 - VAR26) * VAR28;
            }
            else
                FUN4(VAR2, VAR18, "");
        }
        VAR13 = FUN11(VAR6, VAR4, VAR8);
        if (VAR16)
            FUN6(VAR6, VAR16);
        VAR4->VAR17 = VAR17;
        VAR4->VAR29 = VAR14;
        return VAR13;
    }
    return FUN12(VAR30);
}