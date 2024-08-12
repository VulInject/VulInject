static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int64_t VAR4, VAR5, VAR6;
    uint32_t VAR7;
    if (VAR2->VAR8 == 1 && VAR2->VAR9)
        VAR5 = VAR2->VAR10;
    else
        VAR5 = FUN2(VAR11) - VAR2->VAR12;
    VAR3 = (VAR5 > VAR2->VAR13);
    if (VAR3)
        VAR2->VAR14 = 0x80000000;
    if (!VAR2->VAR7)
        VAR7 = 0x7fffffff;
    else
        VAR7 = VAR2->VAR7;
    VAR7 = VAR7 >> 9;
    VAR4 = FUN3(VAR5 - VAR2->VAR15, VAR16, VAR17);
    VAR6 = VAR4 % VAR7;
    VAR2->VAR6 = VAR6 << 9;
    VAR2->VAR18 = VAR6 >> 22;
    VAR2->VAR13 = VAR5 + FUN3(VAR7 - VAR6, VAR17, VAR16);
    FUN4("" VAR19 "" VAR19 "", VAR2->VAR20, VAR7, VAR2->VAR14 ? 1 : 0, (VAR5 - VAR2->VAR15), VAR6, VAR2->VAR6, VAR2->VAR13 - VAR5, VAR2->VAR9, VAR2->VAR8);
    if (VAR2->VAR8 != 1)
        FUN5(VAR2->VAR21, VAR2->VAR20, VAR3, VAR2->VAR22);
}