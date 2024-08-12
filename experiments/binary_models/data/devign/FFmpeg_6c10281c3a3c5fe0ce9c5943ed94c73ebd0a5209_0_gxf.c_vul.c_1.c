static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    pkt_type_t VAR7;
    int VAR8;
    while (!FUN2(VAR6))
    {
        int VAR9, VAR10, VAR11;
        int VAR12;
        if (!FUN3(VAR6, &VAR7, &VAR8))
        {
            if (!FUN2(VAR6))
                FUN4(VAR2, VAR13, "");
            return -1;
        }
        if (VAR7 == VAR14)
        {
            FUN5(VAR2, VAR8);
            continue;
        }
        if (VAR7 != VAR15)
        {
            FUN6(VAR6, VAR8);
            continue;
        }
        if (VAR8 < 16)
        {
            FUN4(VAR2, VAR13, "");
            continue;
        }
        VAR8 -= 16;
        VAR9 = FUN7(VAR6);
        VAR10 = FUN7(VAR6);
        VAR12 = FUN8(VAR6);
        FUN8(VAR6);
        FUN8(VAR6);
        FUN7(VAR6);
        FUN7(VAR6);
        VAR11 = FUN9(VAR6, VAR4, VAR8);
        VAR4->VAR16 = FUN10(VAR2, VAR10, VAR9);
        VAR4->VAR17 = VAR12;
        return VAR11;
    }
    return FUN11(VAR18);
}