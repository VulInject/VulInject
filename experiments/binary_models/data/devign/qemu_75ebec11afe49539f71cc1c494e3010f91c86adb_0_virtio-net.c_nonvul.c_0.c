static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    VAR9 *VAR10 = FUN3(VAR8->VAR11);
    VAR4 |= VAR8->VAR12;
    FUN4(&VAR4, VAR13);
    if (!FUN5(VAR8))
    {
        FUN6(&VAR4, VAR14);
        FUN6(&VAR4, VAR15);
        FUN6(&VAR4, VAR16);
        FUN6(&VAR4, VAR17);
        FUN6(&VAR4, VAR18);
        FUN6(&VAR4, VAR19);
        FUN6(&VAR4, VAR20);
        FUN6(&VAR4, VAR21);
    }
    if (!FUN5(VAR8) || !FUN7(VAR8))
    {
        FUN6(&VAR4, VAR22);
        FUN6(&VAR4, VAR23);
    }
    if (!FUN8(VAR10->VAR24))
    {
        return VAR4;
    }
    VAR4 = FUN9(FUN8(VAR10->VAR24), VAR4);
    VAR3->VAR25 = VAR4;
    if (VAR8->VAR26 && (VAR8->VAR12 & 1ULL << VAR27))
    {
        VAR4 |= (1ULL << VAR27);
    }
    return VAR4;
}