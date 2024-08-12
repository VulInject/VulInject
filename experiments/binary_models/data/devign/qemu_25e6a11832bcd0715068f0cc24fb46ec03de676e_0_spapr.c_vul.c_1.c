static void FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR6 *VAR8, VAR6 *VAR9, unsigned VAR10, VAR11 *VAR12, VAR13 **VAR14)
{
    const uint64_t VAR15 = 0x800000020000000ULL;
    const int VAR16 = (VAR17 - VAR18) / VAR19 - 1;
    int VAR20;
    FUN2((VAR18 % VAR19) != 0);
    FUN2((VAR17 % VAR19) != 0);
    FUN2((VAR19 % VAR21) != 0);
    FUN2((VAR21 % VAR22) != 0);
    FUN2((VAR16 * VAR22) > VAR21);
    FUN2((VAR16 * VAR21) > VAR19);
    if (VAR3 >= VAR16)
    {
        FUN3(VAR14, ""VAR3\"", VAR16 - 1);
        return;
    }
    *VAR5 = VAR15 + VAR3;
    for (VAR20 = 0; VAR20 < VAR10; ++VAR20)
    {
        VAR12[VAR20] = FUN4(VAR3, VAR20);
    }
    *VAR7 = VAR18 + VAR3 * VAR22;
    *VAR8 = VAR18 + (VAR3 + 1) * VAR21;
    *VAR9 = VAR18 + (VAR3 + 1) * VAR19;
}