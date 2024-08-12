static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (VAR4->VAR8 == VAR6->VAR9)
    {
        if (VAR6->VAR10)
        {
            VAR11 *VAR12 = FUN2(sizeof(*VAR12));
            if (!VAR12)
                return FUN3(VAR13);
            VAR12->VAR4 = *VAR4;
            VAR12->VAR4.VAR14 = FUN4(VAR4->VAR14);
            if (!VAR12->VAR4.VAR14)
            {
                FUN5(&VAR12);
                return FUN3(VAR13);
            }
            if (VAR6->VAR15)
                VAR6->VAR15->VAR16 = VAR12;
            else
                VAR6->VAR17 = VAR12;
            VAR6->VAR15 = VAR12;
        }
        else
            return FUN6(VAR2, VAR4);
    }
    else
    {
        int VAR18;
        if (VAR2->VAR19[VAR4->VAR8]->VAR20 == 1)
        {
            FUN7(VAR2, VAR21, ""
                                      "",
                   VAR4->VAR8);
        }
        if (!VAR6->VAR10 || VAR2->VAR19[VAR4->VAR8]->VAR20 >= 1)
            return 0;
        if ((VAR18 = FUN8(VAR2, &VAR6->VAR22, VAR4)) < 0)
            return VAR18;
        VAR6->VAR10--;
        if (!VAR6->VAR10 && (VAR18 = FUN9(VAR2)) < 0)
            return VAR18;
    }
    return 0;
}