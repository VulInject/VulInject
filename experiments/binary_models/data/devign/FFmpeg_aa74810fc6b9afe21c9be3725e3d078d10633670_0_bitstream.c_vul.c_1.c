int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const void *VAR5, int VAR6, int VAR7, const void *VAR8, int VAR9, int VAR10, const void *VAR11, int VAR12, int VAR13, int VAR14)
{
    VAR15 *VAR16;
    int VAR17, VAR18, VAR19;
    VAR2->VAR5 = VAR3;
    if (VAR14 & VAR20)
    {
        VLC VAR21 = *VAR2;
        if (VAR2->VAR22)
            return 0;
        VAR19 = FUN1(&VAR21, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14 & ~VAR20);
        FUN2(VAR19 >= 0);
        FUN2(VAR21.VAR22 <= VAR2->VAR23);
        if (VAR21.VAR22 < VAR2->VAR23)
            FUN3(NULL, VAR24, "", VAR21.VAR22, VAR2->VAR23);
        memcpy(VAR2->VAR25, VAR21.VAR25, VAR21.VAR22 * sizeof(*VAR2->VAR25));
        VAR2->VAR22 = VAR21.VAR22;
        FUN4(&VAR21);
        return 0;
    }
    else
    {
        VAR2->VAR25 = NULL;
        VAR2->VAR23 = 0;
        VAR2->VAR22 = 0;
    }
    FUN5(NULL, "", VAR4);
    VAR16 = FUN6((VAR4 + 1) * sizeof(VAR15));
    FUN2(VAR13 <= 2 || !VAR11);
    VAR18 = 0;
    for (VAR17 = 0; VAR17 < VAR4; VAR17++)
    {
        FUN7(VAR16[VAR18].VAR5, VAR5, VAR17, VAR6, VAR7);
        if (!(VAR26))
            continue;
        if (VAR16[VAR18].VAR5 > 3 * VAR3 || VAR16[VAR18].VAR5 > 32)
        {
            FUN3(NULL, VAR24, "", VAR16[VAR18].VAR5);
            FUN8(VAR16);
            return -1;
        }
        FUN7(VAR16[VAR18].VAR27, VAR8, VAR17, VAR9, VAR10);
        if (VAR16[VAR18].VAR27 >= (1LL << VAR16[VAR18].VAR5))
        {
            FUN3(NULL, VAR24, "");
            FUN8(VAR16);
            return -1;
        }
        if (VAR14 & VAR28)
            VAR16[VAR18].VAR27 = FUN9(VAR16[VAR18].VAR27);
        else
            VAR16[VAR18].VAR27 <<= 32 - VAR16[VAR18].VAR5;
        if (VAR11)
            FUN7(VAR16[VAR18].VAR29, VAR11, VAR17, VAR12, VAR13)
            else VAR16[VAR18].VAR29 = VAR17;
        VAR18++;
    }
    FUN10(VAR16[VAR18].VAR5 > VAR3);
    FUN11(VAR16, VAR18, sizeof(VAR15), VAR30);
    FUN10(VAR16[VAR18].VAR5 && VAR16[VAR18].VAR5 <= VAR3);
    VAR4 = VAR18;
    VAR19 = FUN12(VAR2, VAR3, VAR4, VAR16, VAR14);
    FUN8(VAR16);
    if (VAR19 < 0)
    {
        FUN13(&VAR2->VAR25);
        return VAR19;
    }
    return 0;