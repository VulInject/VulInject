static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    if (FUN2(&VAR2->VAR10) < 2)
    {
        FUN3(VAR2->VAR11, VAR12, "", FUN2(&VAR2->VAR10));
        return -1;
    }
    VAR9 = FUN4(&VAR2->VAR13, VAR2->VAR14.VAR15, VAR16, 3);
    if (VAR9 >> 4)
        FUN3(VAR2->VAR11, VAR12, "");
    if (VAR9)
        VAR9 = FUN5(&VAR2->VAR10, VAR9);
    VAR9 = VAR9 * VAR17[0] + VAR2->VAR18;
    VAR2->VAR18 = VAR4[0] = VAR9;
    VAR6 = 1;
    for (;;)
    {
        VAR5 = FUN4(&VAR2->VAR13, VAR2->VAR14.VAR15, VAR16, 3);
        if (VAR5 == 0)
            break;
        if (VAR5 == 0xf0)
        {
            VAR6 += 16;
        }
        else
        {
            if (VAR5 & 0xf)
            {
                VAR8 = FUN5(&VAR2->VAR10, VAR5 & 0xf);
            }
            else
            {
                FUN3(VAR2->VAR11, VAR12, "");
                return VAR19;
            }
            VAR6 += VAR5 >> 4;
            if (VAR6 >= 64)
            {
                FUN3(VAR2->VAR11, VAR12, "", VAR6);
                return 0;
            }
            VAR7 = VAR20[VAR6];
            VAR4[VAR7] = VAR8 * VAR17[VAR7];
            VAR6++;
            if (VAR6 >= 64)
                break;
        }
    }
    return 0;
}