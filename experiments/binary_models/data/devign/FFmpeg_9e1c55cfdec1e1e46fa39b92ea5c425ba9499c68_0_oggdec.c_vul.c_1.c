static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR3 = VAR2->VAR4;
    int VAR5;
    int64_t VAR6, VAR7;
    int VAR8 = 0;
    if (!VAR2->VAR9->VAR10)
        return 0;
    if (VAR2->VAR11 != VAR12)
        return 0;
    VAR6 = FUN2(VAR2->VAR9);
    if (VAR6 < 0)
        return 0;
    VAR7 = VAR6 > VAR13 ? VAR6 - VAR13 : 0;
    FUN3(VAR2);
    FUN4(VAR2->VAR9, VAR7, VAR14);
    while (!FUN5(VAR2, &VAR5))
    {
        if (VAR3->VAR15[VAR5].VAR16 != -1 && VAR3->VAR15[VAR5].VAR16 != 0 && VAR3->VAR15[VAR5].VAR17)
        {
            VAR2->VAR15[VAR5]->VAR11 = FUN6(VAR2, VAR5, VAR3->VAR15[VAR5].VAR16, NULL);
            if (VAR2->VAR15[VAR5]->VAR18 != VAR12)
            {
                VAR2->VAR15[VAR5]->VAR11 -= VAR2->VAR15[VAR5]->VAR18;
                VAR8 -= (VAR3->VAR15[VAR5].VAR19 == -1);
                VAR3->VAR15[VAR5].VAR19 = 1;
            }
            else if (!VAR3->VAR15[VAR5].VAR19)
            {
                VAR3->VAR15[VAR5].VAR19 = -1;
                VAR8++;
            }
        }
    }
    FUN7(VAR2, 0);
    FUN3(VAR2);
    FUN4(VAR2->VAR9, VAR2->VAR20, VAR14);
    FUN8(VAR2);
    while (!FUN9(VAR2, &VAR5, NULL, NULL, NULL))
    {
        int64_t VAR21 = FUN10(VAR2, VAR5, NULL);
        if (VAR21 != VAR12 && VAR2->VAR15[VAR5]->VAR18 == VAR12 && !VAR3->VAR15[VAR5].VAR19)
        {
            VAR2->VAR15[VAR5]->VAR11 -= VAR21;
            VAR3->VAR15[VAR5].VAR19 = 1;
            VAR8--;
        }
        else if (VAR2->VAR15[VAR5]->VAR18 != VAR12 && !VAR3->VAR15[VAR5].VAR19)
        {
            VAR3->VAR15[VAR5].VAR19 = 1;
            VAR8--;
        }
    }
    if (VAR8 <= 0)
        break;
}
FUN7(VAR2, 0);
return 0;