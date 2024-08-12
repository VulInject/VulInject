static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7;
    switch (VAR4->VAR8)
    {
    case VAR9:
        if (VAR4->VAR10->VAR11 == 1)
        {
            VAR12 *VAR13;
            unsigned int VAR14;
            uint8_t VAR15[4];
            int VAR16, VAR17;
            VAR17 = (VAR18 + 1 + 7) / 8;
            if (VAR4->VAR19.VAR20 == 1)
            {
                VAR17 = 1;
            }
            else if (VAR17 > VAR4->VAR19.VAR20)
            {
                return VAR21;
            }
            VAR14 = 0;
            for (VAR16 = 0; VAR16 < VAR18; VAR16++)
            {
                VAR13 = &VAR6->VAR22[VAR16];
                if (VAR13->VAR23)
                    VAR14 |= (1 << (VAR16 + 1));
            }
            if (VAR14 != 0)
            {
                for (VAR16 = 0; VAR16 < VAR17; VAR16++)
                {
                    VAR15[VAR16] = VAR14 >> (8 * VAR16);
                }
                FUN2(VAR4, VAR15, VAR17);
                VAR7 = VAR17;
            }
            else
            {
                VAR7 = VAR24;
            }
        }
        else
        {
            goto VAR25;
        }
        break;
    case VAR26:
    default:
    VAR25:
        VAR7 = VAR27;
        break;
    }
    return VAR7;
}