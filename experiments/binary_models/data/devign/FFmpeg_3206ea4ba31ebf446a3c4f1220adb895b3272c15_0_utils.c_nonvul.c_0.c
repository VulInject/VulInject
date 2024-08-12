static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9->VAR10 ? VAR2->VAR9->VAR10 : VAR2->VAR9->VAR11;
    int64_t VAR12 = VAR13;
    if (VAR4->VAR14 != VAR15)
    {
        if (VAR4->VAR16)
            return;
        VAR4->VAR16 = 1;
        VAR12 = VAR4->VAR14;
        for (; VAR8; VAR8 = FUN2(VAR2, VAR4, VAR8))
        {
            if (VAR8->VAR17.VAR5 == VAR5)
            {
                if (VAR8->VAR17.VAR18 != VAR8->VAR17.VAR19 || VAR8->VAR17.VAR19 != VAR15 || VAR8->VAR17.VAR6)
                    break;
                VAR12 -= VAR6;
            }
        }
        if (VAR8 && VAR8->VAR17.VAR19 != VAR4->VAR14)
        {
            FUN3(VAR2, VAR20, "" VAR21 "", FUN4(VAR4->VAR14), FUN4(VAR8->VAR17.VAR19), FUN4(VAR8->VAR17.VAR18), VAR8->VAR17.VAR6);
            return;
        }
        if (!VAR8)
        {
            FUN3(VAR2, VAR20, "", FUN4(VAR4->VAR14));
            return;
        }
        VAR8 = VAR2->VAR9->VAR10 ? VAR2->VAR9->VAR10 : VAR2->VAR9->VAR11;
        VAR4->VAR14 = VAR12;
    }
    else if (VAR4->VAR12 != VAR13)
        return;
    for (; VAR8; VAR8 = FUN2(VAR2, VAR4, VAR8))
    {
        if (VAR8->VAR17.VAR5 != VAR5)
            continue;
        if ((VAR8->VAR17.VAR18 == VAR8->VAR17.VAR19 || VAR8->VAR17.VAR18 == VAR15) && (VAR8->VAR17.VAR19 == VAR15 || VAR8->VAR17.VAR19 == VAR4->VAR14 || VAR8->VAR17.VAR19 == VAR13) && !VAR8->VAR17.VAR6)
        {
            VAR8->VAR17.VAR19 = VAR12;
            if (!VAR4->VAR9->VAR22->VAR23)
                VAR8->VAR17.VAR18 = VAR12;
            VAR8->VAR17.VAR6 = VAR6;
        }
        else
            break;
        VAR12 = VAR8->VAR17.VAR19 + VAR8->VAR17.VAR6;
    }
    if (!VAR8)
        VAR4->VAR12 = VAR12;
}