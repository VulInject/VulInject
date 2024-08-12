static int FUN1(unsigned char *VAR1, VAR2 *VAR3)
{
    int VAR4, VAR5, VAR6;
    unsigned int VAR7 = VAR3->VAR8 * VAR3->VAR9 * VAR3->VAR10;
    GetByteContext VAR11[4];
    VAR12 *VAR13;
    if (VAR7 * VAR3->VAR14 > FUN2(&VAR3->VAR15))
        return VAR16;
    for (VAR6 = 0; VAR6 < VAR3->VAR14; VAR6++)
    {
        VAR11[VAR6] = VAR3->VAR15;
        FUN3(&VAR11[VAR6], VAR6 * VAR7);
    }
    for (VAR5 = VAR3->VAR8 - 1; VAR5 >= 0; VAR5--)
    {
        VAR13 = VAR1 + (VAR5 * VAR3->VAR17);
        if (VAR3->VAR10 == 1)
        {
            for (VAR4 = VAR3->VAR9; VAR4 > 0; VAR4--)
            {
                FUN4(&VAR11[VAR6], VAR13, VAR3->VAR14);
                VAR13 += VAR3->VAR14;
            }
        }
        else
        {
            VAR18 *VAR19 = (VAR18 *)VAR13;
            for (VAR4 = VAR3->VAR9; VAR4 > 0; VAR4--)
                for (VAR6 = 0; VAR6 < VAR3->VAR14; VAR6++)
                    *VAR19++ = FUN5(&VAR11[VAR6]);
        }
    }
    return 0;
}