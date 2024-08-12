static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16, VAR17, VAR18 = 0;
    int VAR19;
    for (VAR16 = 0; VAR16 < VAR20; VAR16++)
        if (VAR8->VAR21[VAR16].VAR22->VAR3[0] && !VAR8->VAR21[VAR16].VAR22->VAR23)
        {
            FUN2(VAR8->VAR21[VAR16].VAR22);
            memset(VAR8->VAR21[VAR16].VAR24, 0, sizeof(VAR8->VAR21[VAR16].VAR24));
        }
    VAR8->VAR25 = NULL;
    *VAR4 = 0;
    if (VAR14 == 0)
        return FUN3(VAR8, (VAR10 *)VAR3, VAR4);
    for (;;)
    {
        for (; VAR18 + VAR26 < VAR14; VAR18++)
        {
            if (VAR13[VAR18] == '' && VAR13[VAR18 + 1] == '' && VAR13[VAR18 + 2] == '' && VAR13[VAR18 + 3] == '')
                break;
        }
        if (VAR18 + VAR26 >= VAR14)
            break;
        VAR17 = FUN4(VAR13 + VAR18 + 5);
        if (VAR18 + VAR17 > VAR14 || !VAR17)
        {
            if (VAR18 + VAR17 > VAR14)
                FUN5(VAR8->VAR2, VAR27, "", VAR17);
            VAR18 += 4;
            continue;
        }
        if (FUN6(VAR2, VAR13 + VAR18, VAR17))
        {
            FUN5(VAR8->VAR2, VAR27, "");
            return -1;
        }
        VAR18 += VAR17;
    }
    if (!VAR8->VAR25)
        return VAR14;
    if (VAR8->VAR25->VAR22->VAR28 > VAR8->VAR29)
    {
        VAR30 *VAR31 = FUN7(VAR8->VAR32, VAR8->VAR29);
        VAR8->VAR25->VAR22->VAR23 |= VAR33;
        if (FUN8(VAR8->VAR32, VAR34, VAR8->VAR25))
        {
            int VAR35 = VAR8->VAR32[0]->VAR22->VAR28;
            FUN5(VAR2, VAR27, "");
            for (VAR16 = 1; VAR8->VAR32[VAR16]; VAR16++)
                if (VAR8->VAR32[VAR16]->VAR22->VAR28 < VAR35)
                    VAR35 = VAR8->VAR32[VAR16]->VAR22->VAR28;
            VAR31 = FUN7(VAR8->VAR32, VAR35);
            FUN8(VAR8->VAR32, VAR34, VAR8->VAR25);
        }
        if (VAR31)
        {
            VAR31->VAR22->VAR23 ^= VAR33;
            if ((VAR19 = FUN9(VAR3, VAR31->VAR22)) < 0)
                return VAR19;
            *VAR4 = 1;
        }
    }
    else if (VAR8->VAR25->VAR22->VAR28 == VAR8->VAR29)
    {
        if ((VAR19 = FUN9(VAR3, VAR8->VAR25->VAR22)) < 0)
            return VAR19;
        *VAR4 = 1;
    }
    if (*VAR4)
        VAR8->VAR29 = VAR11->VAR28 + 1;
    return VAR18;
}