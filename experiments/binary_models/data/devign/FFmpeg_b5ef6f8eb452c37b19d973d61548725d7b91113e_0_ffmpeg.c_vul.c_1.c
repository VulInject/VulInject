static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4 && VAR4->VAR5)
    {
        const enum VAR6 *VAR7 = VAR4->VAR5;
        if (VAR2->VAR4->VAR8 <= VAR9)
        {
            if (VAR2->VAR4->VAR10 == VAR11)
            {
                VAR7 = (const enum VAR6[]){VAR12, VAR13, VAR14, VAR15, VAR16};
            }
            else if (VAR2->VAR4->VAR10 == VAR17)
            {
                VAR7 = (const enum VAR6[]){VAR12, VAR13, VAR18, VAR14, VAR15, VAR19, VAR20, VAR16};
            }
        }
        for (; *VAR7 != -1; VAR7++)
        {
            if (*VAR7 == VAR2->VAR4->VAR21)
                break;
        }
        if (*VAR7 == -1)
        {
            FUN2(NULL, VAR22, "", VAR23[VAR2->VAR4->VAR21].VAR24, VAR4->VAR24, VAR23[VAR4->VAR5[0]].VAR24);
            VAR2->VAR4->VAR21 = VAR4->VAR5[0];
        }
    }