static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15, VAR16, VAR17;
    VAR15 = 0;
    while (VAR15 < VAR10)
    {
        VAR16 = VAR10 - VAR15;
        if (VAR13->VAR18 == -1)
        {
            VAR13->VAR19 = (VAR16 < VAR20);
            VAR13->VAR21 = VAR22;
            if (VAR13->VAR19)
            {
                VAR17 = VAR20 - 1;
            }
            else
            {
                VAR17 = VAR23;
            }
            VAR13->VAR18 = VAR7;
        }
        else
        {
            VAR17 = VAR13->VAR21 - VAR24 - VAR25 - 1;
            if (VAR17 < VAR16 && VAR6->VAR26->VAR27 == VAR28)
            {
                FUN2(VAR2);
                continue;
            }
        }
        if (VAR17 > 0)
        {
            if (VAR16 > VAR17)
                VAR16 = VAR17;
            else if (VAR16 == (VAR17 - 1))
                VAR16 = VAR17 - 2;
            FUN3(VAR2, VAR4, VAR7 + VAR29, VAR10, VAR15, VAR16, VAR11);
            FUN4(&VAR13->VAR30, VAR9, VAR16);
            if (VAR13->VAR19)
                VAR13->VAR21 -= (VAR16 + VAR24);
            else
                VAR13->VAR21 -= (VAR16 + VAR31);
            VAR13->VAR32 = VAR7;
            VAR13->VAR33++;
        }
        else
        {
            VAR16 = 0;
        }
        VAR15 += VAR16;
        VAR9 += VAR16;
        if (!VAR13->VAR19)
            FUN2(VAR2);
        else if (VAR13->VAR21 <= (VAR24 + VAR25 + 1))
            FUN2(VAR2);
    }
    VAR4->VAR34++;
}