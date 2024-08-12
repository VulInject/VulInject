static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR1 *VAR4;
    if (VAR2->VAR5 >= VAR2->VAR6)
    {
        VAR7 *VAR8 = VAR2->VAR9;
        if (VAR2->VAR10 > VAR11)
        {
            FUN2(VAR2->VAR12, VAR8->VAR13, VAR14);
            write(VAR2->VAR12, VAR2->VAR15, VAR11);
            VAR8->VAR13 += VAR11;
            if (VAR8->VAR13 > VAR2->VAR9->VAR16)
                VAR8->VAR16 = VAR8->VAR13;
            if (VAR8->VAR13 >= VAR2->VAR9->VAR17)
                VAR8->VAR13 = VAR11;
            FUN3(VAR2->VAR12, VAR8->VAR13);
            for (VAR4 = VAR18; VAR4 != NULL; VAR4 = VAR4->VAR19)
            {
                if (VAR4->VAR20 == VAR21 && VAR4->VAR9->VAR8 == VAR2->VAR9->VAR8)
                {
                    VAR4->VAR20 = VAR22;
                }
            }
        }
        else
        {
            AVFormatContext VAR23;
            VAR24 *VAR25 = &VAR23.VAR25;
            int VAR26;
            memset(&VAR23, 0, sizeof(VAR23));
            FUN4(VAR25, VAR2->VAR15, VAR2->VAR6 - VAR2->VAR15, VAR27);
            VAR25->VAR28 = VAR2->VAR6;
            VAR25->VAR29 = 1;
            if (VAR8->VAR30->FUN5(&VAR23, 0) < 0)
            {
                goto VAR31;
            }
            if (VAR23.VAR32 != VAR8->VAR32)
            {
                goto VAR31;
            }
            for (VAR26 = 0; VAR26 < VAR23.VAR32; VAR26++)
            {
                memcpy(&VAR8->VAR33[VAR26]->VAR34, &VAR23.VAR33[VAR26]->VAR34, sizeof(VAR35));
            }
        }
        VAR2->VAR5 = VAR2->VAR15;
    }
    VAR3 = read(VAR2->VAR36, VAR2->VAR5, VAR2->VAR6 - VAR2->VAR5);
    if (VAR3 < 0)
    {
        if (VAR37 != VAR38 && VAR37 != VAR39)
        {
            goto VAR31;
        }
    }
    else if (VAR3 == 0)
    {
        goto VAR31;
    }
    else
    {
        VAR2->VAR5 += VAR3;
        VAR2->VAR10 += VAR3;
    }
    return 0;
VAR31:
    VAR2->VAR9->VAR40 = 0;
    close(VAR2->VAR12);
    return -1;
}