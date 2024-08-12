static inline int FUN1(TCGType VAR1, int VAR2)
{
    VAR3 *VAR4 = &VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9;
    VAR9 = VAR1 + (VAR2 ? VAR10 : 0);
    VAR8 = FUN2(VAR4->VAR11[VAR9].VAR12, VAR13);
    if (VAR8 < VAR13)
    {
        FUN3(VAR8, VAR4->VAR11[VAR9].VAR12);
        VAR7 = &VAR4->VAR14[VAR8];
        VAR7->VAR15 = 1;
        assert(VAR7->VAR16 == VAR1);
        assert(VAR7->VAR2 == VAR2);
    }
    else
    {
        VAR8 = VAR4->VAR17;
        if (VAR1 == VAR18)
        {
            FUN4(VAR4, VAR4->VAR17 + 2);
            VAR7 = &VAR4->VAR14[VAR4->VAR17];
            VAR7->VAR16 = VAR1;
            VAR7->VAR1 = VAR19;
            VAR7->VAR15 = 1;
            VAR7->VAR2 = VAR2;
            VAR7->VAR20 = NULL;
            VAR7++;
            VAR7->VAR16 = VAR1;
            VAR7->VAR1 = VAR19;
            VAR7->VAR15 = 1;
            VAR7->VAR2 = VAR2;
            VAR7->VAR20 = NULL;
            VAR4->VAR17 += 2;
        }
        else
        {
            FUN4(VAR4, VAR4->VAR17 + 1);
            VAR7 = &VAR4->VAR14[VAR4->VAR17];
            VAR7->VAR16 = VAR1;
            VAR7->VAR1 = VAR1;
            VAR7->VAR15 = 1;
            VAR7->VAR2 = VAR2;
            VAR7->VAR20 = NULL;
            VAR4->VAR17++;
        }
    }
    VAR4->VAR21++;
    return VAR8;
}