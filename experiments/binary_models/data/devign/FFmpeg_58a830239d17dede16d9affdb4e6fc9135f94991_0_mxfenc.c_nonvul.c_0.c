static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR4->VAR10;
    VAR11 *VAR12 = VAR2->VAR10;
    uint32_t VAR13 = -1;
    int VAR14;
    *VAR7 = 0;
    for (VAR14 = 0; VAR14 < VAR6->VAR15 - 4; VAR14++)
    {
        VAR13 = (VAR13 << 8) + VAR6->VAR16[VAR14];
        if (VAR13 == 0x1B5)
        {
            if ((VAR6->VAR16[VAR14 + 1] & 0xf0) == 0x10)
            {
                VAR4->VAR17->VAR18 = VAR6->VAR16[VAR14 + 1] & 0x07;
                VAR4->VAR17->VAR19 = VAR6->VAR16[VAR14 + 2] >> 4;
            }
            else if (VAR14 + 5 < VAR6->VAR15 && (VAR6->VAR16[VAR14 + 1] & 0xf0) == 0x80)
            {
                VAR9->VAR20 = !(VAR6->VAR16[VAR14 + 5] & 0x80);
                break;
            }
        }
        else if (VAR13 == 0x1b8)
        {
            if (VAR6->VAR16[VAR14 + 4] >> 6 & 0x01)
                *VAR7 |= 0x80;
            if (!VAR12->VAR21)
            {
                unsigned VAR22 = (VAR6->VAR16[VAR14 + 1] >> 2) & 0x1f;
                unsigned VAR23 = ((VAR6->VAR16[VAR14 + 1] & 0x03) << 4) | (VAR6->VAR16[VAR14 + 2] >> 4);
                unsigned VAR24 = ((VAR6->VAR16[VAR14 + 2] & 0x07) << 3) | (VAR6->VAR16[VAR14 + 3] >> 5);
                unsigned VAR25 = ((VAR6->VAR16[VAR14 + 3] & 0x1f) << 1) | (VAR6->VAR16[VAR14 + 4] >> 7);
                VAR12->VAR26 = !!(VAR6->VAR16[VAR14 + 1] & 0x80);
                VAR12->VAR27 = (VAR22 * 3600 + VAR23 * 60 + VAR24) * VAR12->VAR28 + VAR25;
                if (VAR12->VAR26)
                {
                    unsigned VAR29 = 60 * VAR22 + VAR23;
                    VAR12->VAR27 -= 2 * (VAR29 - VAR29 / 10);
                }
                FUN2(VAR2, VAR30, "", VAR12->VAR27, VAR22, VAR23, VAR24, VAR12->VAR26 ? '' : '', VAR25);
            }
        }
        else if (VAR13 == 0x1b3)
        {
            *VAR7 |= 0x40;
            switch ((VAR6->VAR16[VAR14 + 4] >> 4) & 0xf)
            {
            case 2:
                VAR9->VAR31 = (VAR32){4, 3};
                break;
            case 3:
                VAR9->VAR31 = (VAR32){16, 9};
                break;
            case 4:
                VAR9->VAR31 = (VAR32){221, 100};
                break;
            default:
                FUN3(&VAR9->VAR31.VAR33, &VAR9->VAR31.VAR34, VAR4->VAR17->VAR35, VAR4->VAR17->VAR36, 1024 * 1024);
            }
        }
        else if (VAR13 == 0x100)
        {
            int VAR37 = (VAR6->VAR16[VAR14 + 2] >> 3) & 0x07;
            if (VAR37 == 2)
            {
                *VAR7 |= 0x22;
                VAR4->VAR17->VAR38 = 1;
            }
            else if (VAR37 == 3)
            {
                *VAR7 |= 0x33;
                VAR9->VAR39 = -1;
            }
            else if (!VAR37)
            {
                FUN2(VAR2, VAR40, "");
                return 0;
            }
        }
    }
    if (VAR2->VAR41 != &VAR42)
        VAR9->VAR43 = FUN4(VAR4->VAR17);
    return !!VAR9->VAR43;
}