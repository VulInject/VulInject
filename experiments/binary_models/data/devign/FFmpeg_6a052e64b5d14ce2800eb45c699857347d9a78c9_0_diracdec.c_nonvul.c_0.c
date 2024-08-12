static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16, VAR17, VAR18 = 0;
    for (VAR16 = 0; VAR16 < VAR19; VAR16++)
        if (VAR8->VAR20[VAR16].VAR21.VAR3[0] && !VAR8->VAR20[VAR16].VAR21.VAR22)
        {
            VAR2->FUN2(VAR2, &VAR8->VAR20[VAR16].VAR21);
            memset(VAR8->VAR20[VAR16].VAR23, 0, sizeof(VAR8->VAR20[VAR16].VAR23));
        }
    VAR8->VAR24 = NULL;
    *VAR4 = 0;
    if (VAR14 == 0)
        return FUN3(VAR8, (VAR25 *)VAR3, VAR4);
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
    if (!VAR8->VAR24)
        return VAR14;
    if (VAR8->VAR24->VAR21.VAR28 > VAR8->VAR29)
    {
        VAR10 *VAR30 = FUN7(VAR8->VAR31, VAR8->VAR29);
        VAR8->VAR24->VAR21.VAR22 |= VAR32;
        if (FUN8(VAR8->VAR31, VAR33, VAR8->VAR24))
        {
            int VAR34 = VAR8->VAR31[0]->VAR21.VAR28;
            FUN5(VAR2, VAR27, "");
            VAR30 = VAR8->VAR31[0];
            for (VAR16 = 1; VAR8->VAR31[VAR16]; VAR16++)
                if (VAR8->VAR31[VAR16]->VAR21.VAR28 < VAR34)
                    VAR34 = VAR8->VAR31[VAR16]->VAR21.VAR28;
            VAR30 = FUN7(VAR8->VAR31, VAR34);
            FUN8(VAR8->VAR31, VAR33, VAR8->VAR24);
        }
        if (VAR30)
        {
            VAR30->VAR21.VAR22 ^= VAR32;
            *(VAR25 *)VAR3 = VAR30->VAR21;
            *VAR4 = sizeof(VAR25);
        }
    }
    else if (VAR8->VAR24->VAR21.VAR28 == VAR8->VAR29)
    {
        *(VAR25 *)VAR3 = VAR8->VAR24->VAR21;
        *VAR4 = sizeof(VAR25);
    }
    if (*VAR4)
        VAR8->VAR29 = VAR11->VAR21.VAR28 + 1;
    return VAR18;
}