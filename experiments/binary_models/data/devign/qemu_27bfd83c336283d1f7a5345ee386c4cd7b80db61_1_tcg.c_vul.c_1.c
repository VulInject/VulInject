static inline int FUN1(TCGType VAR1, int VAR2)
{
    VAR3 *VAR4 = &VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9;
    VAR9 = VAR1;
    if (VAR2)
        VAR9 += VAR10;
    VAR8 = VAR4->VAR11[VAR9];
    if (VAR8 != -1)
    {
        VAR7 = &VAR4->VAR12[VAR8];
        VAR4->VAR11[VAR9] = VAR7->VAR13;
        VAR7->VAR14 = 1;
        assert(VAR7->VAR2 == VAR2);
    }
    else
    {
        VAR8 = VAR4->VAR15;
        if (VAR1 == VAR16)
        {
            FUN2(VAR4, VAR4->VAR15 + 2);
            VAR7 = &VAR4->VAR12[VAR4->VAR15];
            VAR7->VAR17 = VAR1;
            VAR7->VAR1 = VAR18;
            VAR7->VAR14 = 1;
            VAR7->VAR2 = VAR2;
            VAR7->VAR19 = NULL;
            VAR7++;
            VAR7->VAR17 = VAR18;
            VAR7->VAR1 = VAR18;
            VAR7->VAR14 = 1;
            VAR7->VAR2 = VAR2;
            VAR7->VAR19 = NULL;
            VAR4->VAR15 += 2;
        }
        else
        {
            FUN2(VAR4, VAR4->VAR15 + 1);
            VAR7 = &VAR4->VAR12[VAR4->VAR15];
            VAR7->VAR17 = VAR1;
            VAR7->VAR1 = VAR1;
            VAR7->VAR14 = 1;
            VAR7->VAR2 = VAR2;
            VAR7->VAR19 = NULL;
            VAR4->VAR15++;
        }
    }
    return VAR8;