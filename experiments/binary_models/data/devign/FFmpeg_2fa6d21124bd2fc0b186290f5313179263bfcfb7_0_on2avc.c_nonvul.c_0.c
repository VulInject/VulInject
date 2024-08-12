static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9 = 1;
    int VAR10 = 0;
    for (VAR5 = 0; VAR5 < VAR2->VAR11; VAR5++)
    {
        if (!VAR2->VAR12[VAR5])
        {
            memcpy(VAR2->VAR13 + VAR10, VAR2->VAR13 + VAR10 - VAR2->VAR14, VAR2->VAR14 * sizeof(*VAR2->VAR13));
            VAR10 += VAR2->VAR14;
            continue;
        }
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            if (!VAR2->VAR15[VAR10])
            {
                int VAR16 = 1;
                for (VAR6 = VAR5 + 1; VAR6 < VAR2->VAR11; VAR6++)
                {
                    if (VAR2->VAR12[VAR6])
                        break;
                    if (VAR2->VAR15[VAR6 * VAR2->VAR14 + VAR7])
                    {
                        VAR16 = 0;
                        break;
                    }
                }
                if (VAR16)
                {
                    VAR2->VAR13[VAR10++] = 0;
                    continue;
                }
            }
            if (VAR9)
            {
                VAR8 = FUN2(VAR4, 7);
                VAR9 = 0;
            }
            else
            {
                VAR8 += FUN3(VAR4, VAR2->VAR17.VAR18, 9, 3) - 60;
            }
            if (VAR8 < 0 || VAR8 > 127)
            {
                FUN4(VAR2->VAR19, VAR20, "", VAR8);
                return VAR21;
            }
            VAR2->VAR13[VAR10++] = VAR2->VAR22[VAR8];
        }
    }
    return 0;
}