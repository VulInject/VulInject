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
        if (VAR6->VAR19 && VAR6->VAR19->VAR20 && VAR6->VAR9->VAR20 >= VAR6->VAR21 + VAR6->VAR19->VAR20)
        {
            VAR6->VAR15 = 0;
            for (VAR12 = VAR6->VAR21; VAR12 < VAR6->VAR21 + VAR6->VAR19->VAR20; VAR12++)
            {
                if (VAR6->VAR9->VAR22[VAR12]->VAR23 < VAR24)
                    VAR6->VAR15 = 1;
            }
        }
        if (!VAR6->VAR15)
        {
            FUN2(VAR6->VAR9, VAR25, "", VAR6->VAR26);
            return VAR16;
        }
        VAR18 = FUN3(VAR6);
    VAR27:
        if (!VAR6->VAR28 && FUN4() - VAR6->VAR29 >= VAR18)
        {
            if ((VAR11 = FUN5(VAR8, VAR6->VAR30, VAR6, NULL)) < 0)
            {
                FUN2(VAR6->VAR9, VAR31, "", VAR6->VAR26);
                return VAR11;
            }
            VAR18 = VAR6->VAR32 / 2;
        }
        if (VAR6->VAR33 < VAR6->VAR34)
        {
            FUN2(NULL, VAR31, "", VAR6->VAR34 - VAR6->VAR33);
            VAR6->VAR33 = VAR6->VAR34;
        }
        if (VAR6->VAR33 >= VAR6->VAR34 + VAR6->VAR35)
        {
            if (VAR6->VAR28)
                return VAR16;
            while (FUN4() - VAR6->VAR29 < VAR18)
            {
                if (FUN6(VAR8->VAR36))
                    return VAR37;
                FUN7(100 * 1000);
            }
            goto VAR27;
        }
        VAR11 = FUN8(VAR8, VAR6);
        if (VAR11 < 0)
        {
            FUN2(VAR6->VAR9, VAR31, "", VAR6->VAR26);
            return VAR11;
        }
        VAR13 = 1;
    }
    VAR11 = FUN9(VAR6, VAR3, VAR4, VAR38);
    if (VAR11 > 0)
    {
        if (VAR13 && VAR6->VAR39 != 0)
        {
            FUN10(VAR6, VAR3, VAR4, &VAR11);
        }
        return VAR11;
    }
    FUN11(VAR6->VAR17);
    VAR6->VAR17 = NULL;
    VAR6->VAR33++;
    VAR8->VAR40 = 1;
    VAR8->VAR33 = VAR6->VAR33;
    goto VAR14;
}