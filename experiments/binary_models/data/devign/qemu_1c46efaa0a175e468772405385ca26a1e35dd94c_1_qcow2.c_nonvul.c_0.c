static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR7.VAR6;
    VAR8 *VAR9 = VAR6->VAR1;
    int VAR10, VAR11;
    VAR4->VAR12 = NULL;
    if (VAR2 < 0)
        goto VAR13;
    if (!VAR4->VAR14)
    {
    }
    else if (VAR4->VAR14 & VAR15)
    {
    }
    else
    {
        if (VAR9->VAR16)
        {
            FUN2(VAR9, VAR4->VAR17, VAR4->VAR18, VAR4->VAR18, VAR4->VAR19, 0, &VAR9->VAR20);
        }
    }
    VAR4->VAR21 -= VAR4->VAR19;
    VAR4->VAR17 += VAR4->VAR19;
    VAR4->VAR18 += VAR4->VAR19 * 512;
    if (VAR4->VAR21 == 0)
    {
        VAR2 = 0;
        goto VAR13;
    }
    VAR4->VAR19 = VAR4->VAR21;
    VAR2 = FUN3(VAR6, VAR4->VAR17 << 9, &VAR4->VAR19, &VAR4->VAR14);
    if (VAR2 < 0)
    {
        goto VAR13;
    }
    VAR10 = VAR4->VAR17 & (VAR9->VAR22 - 1);
    if (!VAR4->VAR14)
    {
        if (VAR6->VAR23)
        {
            VAR11 = FUN4(VAR6->VAR23, VAR4->VAR17, VAR4->VAR18, VAR4->VAR19);
            if (VAR11 > 0)
            {
                VAR4->VAR24.VAR25 = (void *)VAR4->VAR18;
                VAR4->VAR24.VAR26 = VAR4->VAR19 * 512;
                FUN5(&VAR4->VAR27, &VAR4->VAR24, 1);
                FUN6(VAR6->VAR28, VAR29);
                VAR4->VAR12 = FUN7(VAR6->VAR23, VAR4->VAR17, &VAR4->VAR27, VAR4->VAR19, VAR30, VAR4);
                if (VAR4->VAR12 == NULL)
                    goto VAR13;
            }
            else
            {
                VAR2 = FUN8(VAR31, VAR4);
                if (VAR2 < 0)
                    goto VAR13;
            }
        }
        else
        {
            memset(VAR4->VAR18, 0, 512 * VAR4->VAR19);
            VAR2 = FUN8(VAR31, VAR4);
            if (VAR2 < 0)
                goto VAR13;
        }
    }
    else if (VAR4->VAR14 & VAR15)
    {
        if (FUN9(VAR6, VAR4->VAR14) < 0)
            goto VAR13;
        memcpy(VAR4->VAR18, VAR9->VAR32 + VAR10 * 512, 512 * VAR4->VAR19);
        VAR2 = FUN8(VAR31, VAR4);
        if (VAR2 < 0)
            goto VAR13;
    }
    else
    {
        if ((VAR4->VAR14 & 511) != 0)
        {
            VAR2 = -VAR33;
            goto VAR13;
        }
        VAR4->VAR24.VAR25 = (void *)VAR4->VAR18;
        VAR4->VAR24.VAR26 = VAR4->VAR19 * 512;
        FUN5(&VAR4->VAR27, &VAR4->VAR24, 1);
        FUN6(VAR6->VAR28, VAR34);
        VAR4->VAR12 = FUN7(VAR6->VAR28, (VAR4->VAR14 >> 9) + VAR10, &VAR4->VAR27, VAR4->VAR19, VAR30, VAR4);
        if (VAR4->VAR12 == NULL)
        {
            VAR2 = -VAR33;
            goto VAR13;
        }
    }
    return;
VAR13:
    if (VAR4->VAR35->VAR36 > 1)
    {
        FUN10(VAR4->VAR35, VAR4->VAR37, VAR4->VAR35->VAR38);
        FUN11(VAR4->VAR37);
    }
    VAR4->VAR7.FUN12(VAR4->VAR7.VAR1, VAR2);
    FUN13(VAR4);
}