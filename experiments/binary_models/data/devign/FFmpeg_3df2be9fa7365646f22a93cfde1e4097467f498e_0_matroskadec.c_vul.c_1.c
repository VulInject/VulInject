static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    char *VAR6, *VAR7, *VAR8 = VAR4->VAR9, *VAR10 = VAR8 + VAR4->VAR11;
    for (; *VAR8 != '' && VAR8 < VAR10 - 1; VAR8++)
        ;
    if (*VAR8 == '')
        VAR7 = ++VAR8;
    for (; *VAR8 != '' && VAR8 < VAR10 - 1; VAR8++)
        ;
    if (*VAR8 == '')
    {
        int64_t VAR12 = VAR4->VAR13 + VAR5;
        int VAR14 = VAR2->VAR15 * VAR4->VAR13 / 10000000;
        int VAR16 = VAR2->VAR15 * VAR12 / 10000000;
        int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
        VAR17 = VAR14 / 360000;
        VAR14 -= 360000 * VAR17;
        VAR18 = VAR14 / 6000;
        VAR14 -= 6000 * VAR18;
        VAR19 = VAR14 / 100;
        VAR14 -= 100 * VAR19;
        VAR20 = VAR16 / 360000;
        VAR16 -= 360000 * VAR20;
        VAR21 = VAR16 / 6000;
        VAR16 -= 6000 * VAR21;
        VAR22 = VAR16 / 100;
        VAR16 -= 100 * VAR22;
        *VAR8++ = '';
        VAR23 = 50 + VAR10 - VAR8 + VAR24;
        if (!(VAR6 = FUN2(VAR23)))
            return;
        snprintf(VAR6, VAR23, "", VAR7, VAR17, VAR18, VAR19, VAR14, VAR20, VAR21, VAR22, VAR16, VAR8);
        FUN3(VAR4->VAR9);
        VAR4->VAR9 = VAR6;
        VAR4->VAR11 = strlen(VAR6);
    }
}