static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR3 **VAR5, void *VAR6)
{
    int VAR7, VAR8;
    for (VAR7 = 0; VAR7 < VAR2->VAR9; VAR7++)
    {
        VAR3 *VAR10 = *VAR4;
        if (VAR10)
        {
            *VAR4 = (*VAR4)->VAR11;
            VAR10->VAR11 = NULL;
        }
        else if (!(VAR10 = FUN2(sizeof(*VAR10))))
            return FUN3(VAR12);
        if (VAR10->VAR13)
        {
            if ((VAR8 = FUN4(VAR10->VAR13, VAR10->VAR14, VAR2, VAR7, VAR6)) < 0)
                return VAR8;
            FUN5(VAR10->VAR15);
            FUN5(VAR10);
        }
        else
        {
            VAR10->VAR13 = VAR2;
            VAR10->VAR14 = VAR7;
            FUN6(VAR5, &VAR10);
        }
    }
    if (*VAR4)
    {
        FUN7(VAR6, VAR16, ""%VAR17\"", VAR2->VAR18->VAR15);
        return FUN3(VAR19);
    }
    VAR7 = VAR2->VAR20;
    while (VAR7--)
    {
        VAR3 *VAR21 = FUN2(sizeof(VAR3));
        if (!VAR21)
            return FUN3(VAR12);
        VAR21->VAR13 = VAR2;
        VAR21->VAR14 = VAR7;
        FUN8(VAR4, VAR21);
    }
    return 0;
}