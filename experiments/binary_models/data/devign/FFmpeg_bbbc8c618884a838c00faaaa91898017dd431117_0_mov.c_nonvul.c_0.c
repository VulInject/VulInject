static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6 = NULL;
    int64_t VAR7 = VAR8;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR3->VAR10; VAR9++)
    {
        VAR4 *VAR11 = VAR3->VAR12[VAR9];
        VAR13 *VAR14 = VAR11->VAR15;
        if (VAR14->VAR16 && VAR14->VAR17 < VAR11->VAR18)
        {
            VAR1 *VAR17 = &VAR11->VAR19[VAR14->VAR17];
            int64_t VAR20;
            if (VAR14->VAR21 && VAR14->VAR22 >= VAR14->VAR23)
                FUN2(VAR3, VAR24, "");
            if (VAR14->VAR21 && VAR14->VAR22 < VAR14->VAR23)
                VAR20 = FUN3(VAR17->VAR25 - VAR14->VAR26 - VAR14->VAR21[VAR14->VAR22].VAR27, VAR28, VAR14->VAR29);
            else
                VAR20 = FUN3(VAR17->VAR25, VAR28, VAR14->VAR29);
            FUN4(VAR3, "" VAR30 "", VAR9, VAR14->VAR17, VAR20);
            if (!VAR6 || (!VAR3->VAR16->VAR31 && VAR17->VAR32 < VAR6->VAR32) || (VAR3->VAR16->VAR31 && ((VAR14->VAR16 != VAR3->VAR16 && VAR20 < VAR7) || (VAR14->VAR16 == VAR3->VAR16 && ((FUN5(VAR7 - VAR20) <= VAR28 && VAR17->VAR32 < VAR6->VAR32) || (FUN5(VAR7 - VAR20) > VAR28 && VAR20 < VAR7))))))
            {
                VAR6 = VAR17;
                VAR7 = VAR20;
                *VAR5 = VAR11;
            }
        }
    }
    return VAR6;
}