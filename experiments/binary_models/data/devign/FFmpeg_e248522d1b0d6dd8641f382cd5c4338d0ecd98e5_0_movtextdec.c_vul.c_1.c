static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR4->VAR8 = FUN2(VAR2);
    VAR2 += 2;
    if (VAR4->VAR9 + VAR4->VAR10 + 2 + VAR4->VAR8 * 12 > VAR6->VAR11)
        return -1;
    VAR4->VAR12 |= VAR13;
    for (VAR7 = 0; VAR7 < VAR4->VAR8; VAR7++)
    {
        VAR4->VAR14 = FUN3(sizeof(*VAR4->VAR14));
        if (!VAR4->VAR14)
        {
            FUN4(VAR4);
            return FUN5(VAR15);
        }
        VAR4->VAR14->VAR16 = FUN2(VAR2);
        VAR2 += 2;
        VAR4->VAR14->VAR17 = FUN2(VAR2);
        VAR2 += 2;
        VAR4->VAR14->VAR18 = FUN2(VAR2);
        VAR2 += 2;
        VAR4->VAR14->VAR19 = FUN6(VAR2);
        VAR2++;
        VAR4->VAR14->VAR20 = FUN6(VAR2);
        FUN7(&VAR4->VAR21, &VAR4->VAR22, VAR4->VAR14);
        if (!VAR4->VAR21)
        {
            FUN4(VAR4);
            return FUN5(VAR15);
        }
        VAR2++;
        VAR2 += 4;
    }
    return 0;
}