static void FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR6 *VAR8, VAR6 *VAR9, unsigned VAR10, VAR11 *VAR12, VAR13 **VAR14)
{
    const uint64_t VAR15 = 0x800000020000000ULL;
    const hwaddr VAR16 = 0x1000000000ULL;
    const hwaddr VAR17 = 0xa0000000;
    const hwaddr VAR18 = 0x80000000;
    const uint32_t VAR19 = 255;
    const hwaddr VAR20 = 0x10000000000ULL;
    uint64_t VAR21 = FUN2(VAR2)->VAR22;
    hwaddr VAR23, VAR24;
    int VAR25;
    if (FUN2(VAR2)->VAR26 > VAR21)
    {
        VAR21 = VAR2->VAR27.VAR28 + FUN3(&VAR2->VAR27.VAR29);
    }
    VAR23 = FUN4(VAR21, VAR20);
    if (VAR3 > VAR19)
    {
        FUN5(VAR14, ""VAR3\"", VAR19);
        return;
    }
    *VAR5 = VAR15 + VAR3;
    for (VAR25 = 0; VAR25 < VAR10; ++VAR25)
    {
        VAR12[VAR25] = FUN6(VAR3, VAR25);
    }
    VAR24 = VAR23 + VAR3 * VAR16;
    *VAR7 = VAR24 + VAR18;
    *VAR8 = VAR24 + VAR17;
}