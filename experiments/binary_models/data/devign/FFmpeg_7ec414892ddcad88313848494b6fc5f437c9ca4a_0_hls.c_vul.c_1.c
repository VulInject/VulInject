static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    struct VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR9->VAR10;
    int VAR11, VAR12;
    int VAR13 = 0;
VAR14:
    if (!VAR6->VAR15)
        return VAR16;
    if (!VAR6->VAR17)
    {
        int64_t VAR18;
        struct VAR19 *VAR20;
        if (VAR6->VAR21 && VAR6->VAR21->VAR22)
        {
            VAR6->VAR15 = 0;
            for (VAR12 = 0; VAR12 < VAR6->VAR23; VAR12++)
            {
                if (VAR6->VAR24[VAR12]->VAR25 < VAR26)
                {
                    VAR6->VAR15 = 1;
                    break;
                }
            }
        }
        if (!VAR6->VAR15)
        {
            FUN2(VAR6->VAR9, VAR27, "", VAR6->VAR28);
            return VAR16;
        }
        VAR18 = FUN3(VAR6);
    VAR29:
        VAR30++;
        if (VAR30 > VAR8->VAR31)
            return VAR16;
        if (!VAR6->VAR32 && FUN4() - VAR6->VAR33 >= VAR18)
        {
            if ((VAR11 = FUN5(VAR8, VAR6->VAR34, VAR6, NULL)) < 0)
            {
                FUN2(VAR6->VAR9, VAR35, "", VAR6->VAR28);
                return VAR11;
            }
            VAR18 = VAR6->VAR36 / 2;
        }
        if (VAR6->VAR37 < VAR6->VAR38)
        {
            FUN2(NULL, VAR35, "", VAR6->VAR38 - VAR6->VAR37);
            VAR6->VAR37 = VAR6->VAR38;
        }
        if (VAR6->VAR37 >= VAR6->VAR38 + VAR6->VAR39)
        {
            if (VAR6->VAR32)
                return VAR16;
            while (FUN4() - VAR6->VAR33 < VAR18)
            {
                if (FUN6(VAR8->VAR40))
                    return VAR41;
                FUN7(100 * 1000);
            }
            goto VAR29;
        }
        VAR20 = FUN8(VAR6);
        VAR11 = FUN9(VAR6, VAR20);
        if (VAR11)
            return VAR11;
        VAR11 = FUN10(VAR8, VAR6, VAR20);
        if (VAR11 < 0)
        {
            if (FUN6(VAR8->VAR40))
                return VAR41;
            FUN2(VAR6->VAR9, VAR35, "", VAR6->VAR28);
            VAR6->VAR37 += 1;
            goto VAR29;
        }
        VAR13 = 1;
    }
    if (VAR6->VAR42 < VAR6->VAR43)
    {
        int VAR44 = FUN11(VAR6->VAR43 - VAR6->VAR42, VAR4);
        memcpy(VAR3, VAR6->VAR45, VAR44);
        VAR6->VAR42 += VAR44;
        return VAR44;
    }
    VAR11 = FUN12(VAR6, FUN8(VAR6), VAR3, VAR4, VAR46);
    if (VAR11 > 0)
    {
        if (VAR13 && VAR6->VAR47 != 0)
        {
            FUN13(VAR6, VAR3, VAR4, &VAR11);
        }
        return VAR11;
    }
    FUN14(VAR6->VAR9, &VAR6->VAR17);
    VAR6->VAR37++;
    VAR8->VAR37 = VAR6->VAR37;
    goto VAR14;