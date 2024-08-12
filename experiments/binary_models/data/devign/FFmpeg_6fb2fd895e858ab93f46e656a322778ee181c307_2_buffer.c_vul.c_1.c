VAR1 *FUN1(VAR1 *VAR2, int VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
        return NULL;
    *VAR4 = *VAR2;
    if (VAR2->VAR5 == VAR6)
    {
        VAR4->VAR7 = FUN2(sizeof(VAR8));
        if (!VAR4->VAR7)
        {
            FUN3(VAR4);
            return NULL;
        }
        FUN4(VAR4->VAR7, VAR2->VAR7);
        VAR4->VAR9 = VAR4->VAR10;
    }
    else if (VAR2->VAR5 == VAR11)
    {
        VAR4->VAR12 = FUN2(sizeof(VAR13));
        if (!VAR4->VAR12)
        {
            FUN3(VAR4);
            return NULL;
        }
        *VAR4->VAR12 = *VAR2->VAR12;
        if (VAR2->VAR9 && VAR2->VAR9 != VAR2->VAR10)
        {
            int VAR14 = FUN5(VAR2->VAR12->VAR15);
            if (!(VAR4->VAR9 = FUN2(sizeof(*VAR4->VAR9) * VAR14)))
            {
                FUN6(&VAR4->VAR12);
                FUN6(&VAR4);
                return NULL;
            }
            memcpy(VAR4->VAR9, VAR2->VAR9, sizeof(*VAR4->VAR9) * VAR14);
        }
        else
            VAR4->VAR9 = VAR4->VAR10;
    }
    VAR4->VAR16 &= VAR3;
    VAR4->VAR17->VAR18++;
    return VAR4;