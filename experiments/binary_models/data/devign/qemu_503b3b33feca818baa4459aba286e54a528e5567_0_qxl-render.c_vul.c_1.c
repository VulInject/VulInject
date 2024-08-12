static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6;
    int VAR7;
    if (VAR2->VAR8.VAR9)
    {
        VAR2->VAR8.VAR9 = 0;
        VAR2->VAR8.VAR10 = FUN2(VAR2, VAR2->VAR8.VAR6.VAR11, VAR12);
        if (!VAR2->VAR8.VAR10)
        {
            return;
        }
        FUN3(VAR2, &VAR2->VAR13[0]);
        VAR2->VAR14 = 1;
        FUN4(VAR2->VAR8.VAR6.VAR15, VAR2->VAR8.VAR6.VAR16, VAR2->VAR8.VAR17, VAR2->VAR8.VAR18, VAR2->VAR8.VAR19);
        if (VAR2->VAR8.VAR17 > 0)
        {
            VAR6 = FUN5(VAR2->VAR8.VAR6.VAR15, VAR2->VAR8.VAR6.VAR16, VAR2->VAR8.VAR19, VAR2->VAR8.VAR20, VAR2->VAR8.VAR10, false);
        }
        else
        {
            VAR6 = FUN6(VAR2->VAR8.VAR6.VAR15, VAR2->VAR8.VAR6.VAR16);
        }
        FUN7(VAR4->VAR21, VAR6);
    }
    if (!VAR2->VAR8.VAR10)
    {
        return;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
    {
        if (FUN8(VAR2->VAR13 + VAR7))
        {
            break;
        }
        if (VAR2->VAR13[VAR7].VAR22 > VAR2->VAR13[VAR7].VAR23 || VAR2->VAR13[VAR7].VAR24 > VAR2->VAR13[VAR7].VAR25 || VAR2->VAR13[VAR7].VAR23 > VAR2->VAR8.VAR6.VAR15 || VAR2->VAR13[VAR7].VAR25 > VAR2->VAR8.VAR6.VAR16)
        {
            continue;
        }
        FUN9(VAR2, VAR2->VAR13 + VAR7);
        FUN10(VAR4->VAR21, VAR2->VAR13[VAR7].VAR22, VAR2->VAR13[VAR7].VAR24, VAR2->VAR13[VAR7].VAR23 - VAR2->VAR13[VAR7].VAR22, VAR2->VAR13[VAR7].VAR25 - VAR2->VAR13[VAR7].VAR24);
    }
    VAR2->VAR14 = 0;
}