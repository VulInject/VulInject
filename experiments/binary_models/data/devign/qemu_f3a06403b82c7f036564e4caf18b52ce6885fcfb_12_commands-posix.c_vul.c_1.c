struct VAR1 *FUN1(int64_t VAR2, bool VAR3, int64_t VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR6);
    VAR1 *VAR9 = NULL;
    VAR10 *VAR11;
    VAR12 *VAR13;
    size_t VAR14;
    if (!VAR8)
    {
        return NULL;
    }
    if (!VAR3)
    {
        VAR4 = VAR15;
    }
    else if (VAR4 < 0)
    {
        FUN3(VAR6, "" VAR16 "", VAR4);
        return NULL;
    }
    VAR13 = VAR8->VAR13;
    VAR11 = FUN4(VAR4 + 1);
    VAR14 = fread(VAR11, 1, VAR4, VAR13);
    if (FUN5(VAR13))
    {
        FUN6(VAR6, VAR17, "");
        FUN7("" VAR16, VAR2);
    }
    else
    {
        VAR11[VAR14] = 0;
        VAR9 = FUN4(sizeof(VAR1));
        VAR9->VAR4 = VAR14;
        VAR9->VAR18 = FUN8(VAR13);
        if (VAR14)
        {
            VAR9->VAR19 = FUN9(VAR11, VAR14);
        }
    }
    FUN10(VAR11);
    FUN11(VAR13);
    return VAR9;
}