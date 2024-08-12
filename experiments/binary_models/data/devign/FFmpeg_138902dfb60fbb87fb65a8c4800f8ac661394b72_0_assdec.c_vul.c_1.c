static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, VAR7 *VAR8, int *VAR9)
{
    int VAR10;
    int64_t VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    if (sscanf(VAR6, "", &VAR12, &VAR13, &VAR14, &VAR15, &VAR16, &VAR17, &VAR18, &VAR19, &VAR10) >= 8)
    {
        const int VAR20 = FUN2(VAR6 + 10);
        VAR11 = (VAR16 * 3600LL + VAR17 * 60LL + VAR18) * 100LL + VAR19;
        *VAR8 = (VAR12 * 3600LL + VAR13 * 60LL + VAR14) * 100LL + VAR15;
        *VAR9 = VAR11 - *VAR8;
        FUN3(VAR4);
        FUN4(VAR4, "", VAR2->VAR21++, VAR20, VAR6 + VAR10);
        while (VAR4->VAR22 > 0 && VAR4->VAR23[VAR4->VAR22 - 1] == '' || VAR4->VAR23[VAR4->VAR22 - 1] == '')
            VAR4->VAR23[--VAR4->VAR22] = 0;
        return 0;
    }
    return -1;
}