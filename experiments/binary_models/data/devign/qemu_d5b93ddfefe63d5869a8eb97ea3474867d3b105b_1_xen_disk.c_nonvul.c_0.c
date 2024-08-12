static int FUN1(struct VAR1 *VAR1)
{
    XenGnttab VAR2 = VAR1->VAR3->VAR4.VAR5;
    int VAR6;
    if (VAR1->VAR7.VAR8 == 0)
    {
        return 0;
    }
    if (VAR9)
    {
        VAR1->VAR10 = FUN2(VAR2, VAR1->VAR7.VAR8, VAR1->VAR11, VAR1->VAR12, VAR1->VAR13);
        if (VAR1->VAR10 == NULL)
        {
            FUN3(&VAR1->VAR3->VAR4, 0, "", VAR1->VAR7.VAR8, strerror(VAR14), VAR1->VAR3->VAR15);
            return -1;
        }
        for (VAR6 = 0; VAR6 < VAR1->VAR7.VAR8; VAR6++)
        {
            VAR1->VAR7.VAR16[VAR6].VAR17 = VAR1->VAR10 + VAR6 * VAR18 + (VAR19)VAR1->VAR7.VAR16[VAR6].VAR17;
        }
        VAR1->VAR3->VAR15 += VAR1->VAR7.VAR8;
    }
    else
    {
        for (VAR6 = 0; VAR6 < VAR1->VAR7.VAR8; VAR6++)
        {
            VAR1->VAR20[VAR6] = FUN4(VAR2, VAR1->VAR11[VAR6], VAR1->VAR12[VAR6], VAR1->VAR13);
            if (VAR1->VAR20[VAR6] == NULL)
            {
                FUN3(&VAR1->VAR3->VAR4, 0, "", VAR1->VAR12[VAR6], strerror(VAR14), VAR1->VAR3->VAR15);
                FUN5(VAR1);
                return -1;
            }
            VAR1->VAR7.VAR16[VAR6].VAR17 = VAR1->VAR20[VAR6] + (VAR19)VAR1->VAR7.VAR16[VAR6].VAR17;
            VAR1->VAR3->VAR15++;
        }
    }
    return 0;
}