static int FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    if (VAR2->VAR4 > VAR2->VAR5)
    {
        int VAR6;
        VAR6 = recv(VAR2->VAR7, VAR2->VAR5, VAR2->VAR4 - VAR2->VAR5, 0);
        if (VAR6 < 0)
        {
            if (FUN2() != FUN3(VAR8) && FUN2() != FUN3(VAR9))
                goto VAR10;
        }
        else if (VAR6 == 0)
            goto VAR10;
        else
        {
            VAR2->VAR5 += VAR6;
            VAR2->VAR11 += VAR6;
            FUN4(&VAR2->VAR12, VAR2->VAR11);
        }
    }
    if (VAR2->VAR5 - VAR2->VAR13 >= 2 && VAR2->VAR11 > VAR14)
    {
        if (VAR2->VAR13[0] != '' || VAR2->VAR13[1] != '')
        {
            FUN5("");
            goto VAR10;
        }
    }
    if (VAR2->VAR5 >= VAR2->VAR4)
    {
        VAR15 *VAR16 = VAR2->VAR17;
        if (VAR2->VAR11 > VAR14)
        {
            FUN6(VAR2->VAR18, VAR16->VAR19, VAR20);
            if (write(VAR2->VAR18, VAR2->VAR13, VAR14) < 0)
            {
                FUN5("", strerror(VAR21));
                goto VAR10;
            }
            VAR16->VAR19 += VAR14;
            if (VAR16->VAR19 > VAR2->VAR17->VAR22)
                VAR16->VAR22 = VAR16->VAR19;
            if (VAR2->VAR17->VAR23 && VAR16->VAR19 >= VAR2->VAR17->VAR23)
                VAR16->VAR19 = VAR14;
            FUN7(VAR2->VAR18, VAR16->VAR19);
            for (VAR3 = VAR24; VAR3 != NULL; VAR3 = VAR3->VAR25)
            {
                if (VAR3->VAR26 == VAR27 && VAR3->VAR17->VAR16 == VAR2->VAR17->VAR16)
                    VAR3->VAR26 = VAR28;
            }
        }
        else
        {
            VAR29 *VAR30 = NULL;
            VAR31 *VAR32;
            VAR33 *VAR34;
            int VAR35;
            FUN8(&VAR32, VAR2->VAR13, VAR2->VAR4 - VAR2->VAR13, VAR36);
            VAR32->VAR37 = 1;
            VAR34 = FUN9(VAR16->VAR38->VAR39);
            if (!VAR34)
                goto VAR10;
            if (FUN10(&VAR30, VAR32, VAR2->VAR17->VAR40, VAR34, NULL) < 0)
            {
                FUN11(VAR32);
                goto VAR10;
            }
            if (VAR30->VAR41 != VAR16->VAR41)
            {
                FUN12(VAR30);
                FUN11(VAR32);
                goto VAR10;
            }
            for (VAR35 = 0; VAR35 < VAR30->VAR41; VAR35++)
                memcpy(VAR16->VAR42[VAR35]->VAR43, VAR30->VAR42[VAR35]->VAR43, sizeof(VAR44));
            FUN12(VAR30);
            FUN11(VAR32);
        }
        VAR2->VAR5 = VAR2->VAR13;
    }
    return 0;
VAR10:
    VAR2->VAR17->VAR45 = 0;
    close(VAR2->VAR18);
    for (VAR3 = VAR24; VAR3 != NULL; VAR3 = VAR3->VAR25)
    {
        if (VAR3->VAR26 == VAR27 && VAR3->VAR17->VAR16 == VAR2->VAR17->VAR16)
            VAR3->VAR26 = VAR46;
    }
    return -1;
}