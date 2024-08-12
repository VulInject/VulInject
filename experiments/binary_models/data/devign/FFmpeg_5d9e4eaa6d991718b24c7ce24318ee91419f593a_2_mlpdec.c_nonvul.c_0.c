static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned int VAR7, VAR8;
    if (VAR2->VAR9++ > 1)
    {
        FUN2(VAR2->VAR10, VAR11, "");
        return -1;
    }
    VAR4->VAR12 = FUN3(VAR6, 4);
    for (VAR7 = 0; VAR7 < VAR4->VAR12; VAR7++)
    {
        int VAR13, VAR14;
        VAR4->VAR15[VAR7] = FUN3(VAR6, 4);
        VAR13 = FUN3(VAR6, 4);
        VAR4->VAR16[VAR7] = FUN4(VAR6);
        if (VAR4->VAR15[VAR7] > VAR4->VAR17)
        {
            FUN2(VAR2->VAR10, VAR11, "", VAR4->VAR15[VAR7]);
            return -1;
        }
        if (VAR13 > 14)
        {
            FUN2(VAR2->VAR10, VAR11, "");
            return -1;
        }
        VAR14 = VAR4->VAR17;
        if (!VAR4->VAR18)
            VAR14 += 2;
        for (VAR8 = 0; VAR8 <= VAR14; VAR8++)
        {
            int VAR19 = 0;
            if (FUN4(VAR6))
                VAR19 = FUN5(VAR6, VAR13 + 2);
            VAR4->VAR20[VAR7][VAR8] = VAR19 << (14 - VAR13);
        }
        if (VAR4->VAR18)
            VAR4->VAR21[VAR7] = FUN3(VAR6, 4);
        else
            VAR4->VAR21[VAR7] = 0;
    }
    return 0;
}