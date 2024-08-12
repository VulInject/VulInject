int FUN1(VAR1 **VAR2, const char *VAR3, const char *VAR4, int VAR5)
{
    VAR1 *VAR6 = *VAR2;
    VAR7 *VAR8 = FUN2(VAR6, VAR3, NULL, VAR5);
    char *VAR9 = NULL;
    if (!VAR6)
        VAR6 = *VAR2 = FUN3(sizeof(*VAR6));
    if (VAR8)
    {
        if (VAR5 & VAR10)
            return 0;
        if (VAR5 & VAR11)
            VAR9 = VAR8->VAR4;
        else
            FUN4(VAR8->VAR4);
        FUN4(VAR8->VAR3);
        *VAR8 = VAR6->VAR12[--VAR6->VAR13];
    }
    else
    {
        VAR7 *VAR14 = FUN5(VAR6->VAR12, (VAR6->VAR13 + 1) * sizeof(*VAR6->VAR12));
        if (VAR14)
            VAR6->VAR12 = VAR14;
        else
            return FUN6(VAR15);
    }
    if (VAR4)
    {
        if (VAR5 & VAR16)
            VAR6->VAR12[VAR6->VAR13].VAR3 = VAR3;
        else
            VAR6->VAR12[VAR6->VAR13].VAR3 = FUN7(VAR3);
        if (VAR5 & VAR17)
        {
            VAR6->VAR12[VAR6->VAR13].VAR4 = VAR4;
        }
        else if (VAR9 && VAR5 & VAR11)
        {
            int VAR18 = strlen(VAR9) + strlen(VAR4) + 1;
            if (!(VAR9 = FUN5(VAR9, VAR18)))
                return FUN6(VAR15);
            FUN8(VAR9, VAR4, VAR18);
            VAR6->VAR12[VAR6->VAR13].VAR4 = VAR9;
        }
        else
            VAR6->VAR12[VAR6->VAR13].VAR4 = FUN7(VAR4);
        VAR6->VAR13++;
    }
    if (!VAR6->VAR13)
    {
        FUN4(VAR6->VAR12);
        FUN9(VAR2);
    }
    return 0;
}