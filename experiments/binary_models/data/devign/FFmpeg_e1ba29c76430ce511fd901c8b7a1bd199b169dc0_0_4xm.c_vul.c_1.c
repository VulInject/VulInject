static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR9 = FUN2(&VAR2->VAR10, VAR2->VAR11.VAR12, VAR13, 3);
    if (VAR9 >> 4)
    {
        FUN3(VAR2->VAR14, VAR15, "");
        if (VAR9)
            VAR9 = FUN4(&VAR2->VAR16, VAR9);
        VAR9 = VAR9 * VAR17[0] + VAR2->VAR18;
        VAR2->VAR18 = VAR4[0] = VAR9;
        VAR6 = 1;
        for (;;)
        {
            VAR5 = FUN2(&VAR2->VAR10, VAR2->VAR11.VAR12, VAR13, 3);
            if (VAR5 == 0)
                break;
            if (VAR5 == 0xf0)
            {
                VAR6 += 16;
            }
            else
            {
                VAR8 = FUN4(&VAR2->VAR16, VAR5 & 0xf);
                VAR6 += VAR5 >> 4;
                if (VAR6 >= 64)
                {
                    FUN3(VAR2->VAR14, VAR15, "", VAR6);
                    return 0;
                    VAR7 = VAR19[VAR6];
                    VAR4[VAR7] = VAR8 * VAR17[VAR7];
                    VAR6++;
                    if (VAR6 >= 64)
                        break;
                    return 0