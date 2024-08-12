static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10 = 8;
    if (FUN2(VAR2->VAR11))
        return VAR12;
    if (VAR8->VAR13 >= VAR8->VAR14)
        return VAR12;
    if (FUN3(VAR2->VAR11, VAR8->VAR15[VAR8->VAR13].VAR16, VAR17) < 0)
        return FUN4(VAR18);
    if (VAR8->VAR13 == (VAR8->VAR14 - 1))
        VAR6 = VAR8->VAR19;
    else
        VAR6 = VAR8->VAR20;
    if (VAR8->VAR15[VAR8->VAR13].VAR21 <= 0 || VAR8->VAR15[VAR8->VAR13].VAR21 > VAR22 - VAR10)
    {
        FUN5(VAR2, VAR23, "", VAR8->VAR15[VAR8->VAR13].VAR21);
        VAR8->VAR13++;
        return FUN4(VAR18);
    }
    if (FUN6(VAR4, VAR8->VAR15[VAR8->VAR13].VAR21 + VAR10) < 0)
        return FUN4(VAR24);
    FUN7(VAR4->VAR25, VAR6);
    FUN7(VAR4->VAR25 + 4, VAR8->VAR15[VAR8->VAR13].VAR26);
    VAR5 = FUN8(VAR2->VAR11, VAR4->VAR25 + VAR10, VAR8->VAR15[VAR8->VAR13].VAR21);
    VAR4->VAR27 = VAR8->VAR15[VAR8->VAR13].VAR27;
    VAR4->VAR28 = 0;
    VAR4->VAR21 = VAR5 + VAR10;
    VAR8->VAR13++;
    return 0;