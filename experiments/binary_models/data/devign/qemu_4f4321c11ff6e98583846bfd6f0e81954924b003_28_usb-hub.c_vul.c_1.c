static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7;
    switch (VAR4->VAR8)
    {
    case VAR9:
        if (VAR4->VAR10 == 1)
        {
            VAR11 *VAR12;
            unsigned int VAR13;
            int VAR14, VAR15;
            VAR15 = (VAR16 + 1 + 7) / 8;
            if (VAR4->VAR17 == 1)
            {
                VAR15 = 1;
            }
            else if (VAR15 > VAR4->VAR17)
            {
                return VAR18;
            }
            VAR13 = 0;
            for (VAR14 = 0; VAR14 < VAR16; VAR14++)
            {
                VAR12 = &VAR6->VAR19[VAR14];
                if (VAR12->VAR20)
                    VAR13 |= (1 << (VAR14 + 1));
            }
            if (VAR13 != 0)
            {
                for (VAR14 = 0; VAR14 < VAR15; VAR14++)
                {
                    VAR4->VAR21[VAR14] = VAR13 >> (8 * VAR14);
                }
                VAR7 = VAR15;
            }
            else
            {
                VAR7 = VAR22;
            }
        }
        else
        {
            goto VAR23;
        }
        break;
    case VAR24:
    default:
    VAR23:
        VAR7 = VAR25;
        break;
    }
    return VAR7;
}