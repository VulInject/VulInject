static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12, VAR13 = 1;
    int64_t VAR14, VAR15;
    int VAR16;
    for (;;)
    {
        if (VAR6->VAR17)
        {
            VAR9 = VAR2->VAR18[VAR6->VAR19];
            FUN2(VAR2, VAR2->VAR20, VAR9, VAR9->VAR7, VAR4);
            VAR16 = 0;
        }
        else
        {
            if (VAR6->VAR21)
            {
                VAR22 *VAR23;
                VAR9 = VAR2->VAR18[0];
                VAR23 = VAR9->VAR7;
                VAR14 = VAR24;
                VAR11 = !VAR23->VAR25 ? VAR26 : VAR23->VAR27 * VAR23->VAR28 / 2;
                VAR16 = (VAR13++ == 1) ? 2 : 0;
                VAR15 = FUN3(VAR2->VAR20);
            }
            else
            {
                VAR11 = FUN4(VAR2, &VAR14, &VAR16, &VAR10, &VAR15);
                if (VAR11 > 0)
                    VAR9 = VAR2->VAR18[VAR10];
            }
            if (VAR11 <= 0 || VAR2->VAR20->VAR29)
                return FUN5(VAR30);
            VAR12 = FUN6(VAR2, VAR2->VAR20, VAR9, VAR9->VAR7, VAR11, VAR4, &VAR13, VAR16, VAR14);
            if ((VAR16 & 2) && (VAR13 & 0x7F) == 1)
                FUN7(VAR9, VAR15, VAR14, 0, 0, VAR31);
            if (VAR12)
                continue;
        }
        if ((VAR9->VAR32 >= VAR33 && !(VAR16 & 2)) || VAR9->VAR32 >= VAR34)
        {
            FUN8(VAR4);
        }
        else
            break;
    }
    return 0;
}