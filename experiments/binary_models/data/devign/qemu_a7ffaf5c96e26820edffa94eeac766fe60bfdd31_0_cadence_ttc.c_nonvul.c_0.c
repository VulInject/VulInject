static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int64_t VAR4, VAR5;
    int64_t VAR6 = ((VAR2->VAR7 & VAR8) ? (VAR9)VAR2->VAR10 + 1 : 0x10000ULL) << 16;
    uint64_t VAR11 = VAR2->VAR12;
    VAR2->VAR12 = FUN2(VAR13);
    FUN3("", (long long)VAR11);
    if (!VAR2->VAR14 || VAR11 == VAR2->VAR12)
    {
        VAR2->VAR14 = 1;
        return;
    }
    VAR4 = (VAR9)FUN4(VAR2, VAR2->VAR12 - VAR11);
    VAR5 = (VAR9)VAR2->VAR15 + ((VAR2->VAR7 & VAR16) ? -VAR4 : VAR4);
    for (VAR3 = 0; VAR3 < 3; ++VAR3)
    {
        int64_t VAR17 = (VAR9)VAR2->VAR18[VAR3] << 16;
        if (VAR17 > VAR6)
        {
            continue;
        }
        if (FUN5(VAR17, VAR2->VAR15, VAR5) || FUN5(VAR17 + VAR6, VAR2->VAR15, VAR5) || FUN5(VAR17 - VAR6, VAR2->VAR15, VAR5))
        {
            VAR2->VAR19 |= (2 << VAR3);
        }
    }
    if ((VAR5 < 0) || (VAR5 >= VAR6))
    {
        VAR2->VAR19 |= (VAR2->VAR7 & VAR8) ? VAR20 : VAR21;
    }
    while (VAR5 < 0)
    {
        VAR5 += VAR6;
    }
    VAR2->VAR15 = (VAR22)(VAR5 % VAR6);
    FUN6(VAR2);
}