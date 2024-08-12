static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR4->VAR8 = -1;
    if (!strcmp(VAR4->VAR9, ""))
    {
        int VAR10[VAR11];
        static const enum AVMediaType VAR12[] = {VAR13, VAR14, VAR15, VAR16, VAR17};
        enum AVMediaType VAR18;
        for (VAR7 = 0; VAR7 < VAR11; VAR7++)
            VAR10[VAR7] = -1;
        for (VAR7 = 0; VAR7 < VAR2->VAR19; VAR7++)
        {
            VAR18 = VAR2->VAR20[VAR7]->VAR21->VAR22;
            if ((unsigned)VAR18 < VAR11 && VAR10[VAR18] == -1 && !(VAR2->VAR20[VAR7]->VAR23 & VAR24))
                VAR10[VAR18] = VAR7;
        }
        for (VAR7 = 0; VAR7 < FUN2(VAR12); VAR7++)
        {
            VAR18 = VAR12[VAR7];
            if ((VAR4->VAR8 = VAR10[VAR18]) >= 0)
                break;
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR19; VAR7++)
        {
            VAR6 = FUN3(VAR2, VAR2->VAR20[VAR7], VAR4->VAR9);
            if (VAR6 < 0)
                break;
            if (VAR6 > 0)
            {
                VAR4->VAR8 = VAR7;
                break;
            }
        }
    }
    if (VAR4->VAR8 < 0)
    {
        FUN4(VAR2, VAR25, "", VAR4->VAR9);
        return FUN5(VAR26);
    }
    return 0;
}