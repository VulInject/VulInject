static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    int VAR11 = 0;
    VAR12 *VAR13 = (VAR12 *)"";
    VAR12 *VAR14;
    int VAR15 = 0;
    if (VAR4->VAR11)
    {
        if (VAR4->VAR10)
        {
            VAR10 = FUN2(VAR4->VAR10);
            VAR11 = VAR4->VAR11;
            VAR13 = VAR4->VAR13;
        }
        else
        {
            VAR10 = FUN3(VAR4->VAR11);
            if (VAR10)
            {
                memcpy(VAR10->VAR13, VAR4->VAR13, VAR4->VAR11);
                VAR11 = VAR10->VAR11;
                VAR13 = VAR10->VAR13;
            }
        }
        if (!VAR10)
        {
            VAR15 = FUN4(VAR16);
            goto VAR17;
        }
        if (!VAR5)
            VAR7->VAR18++;
    }
    else
    {
        if (!VAR7->VAR18)
        {
            VAR7->VAR19 = 1;
            VAR7->VAR20 = 1;
            goto VAR17;
        }
    }
    VAR14 = VAR13;
    do
    {
        VAR21 *VAR22 = FUN5(sizeof(*VAR22));
        if (!VAR22)
        {
            VAR15 = FUN4(VAR16);
            goto VAR17;
        }
        VAR22->VAR13 = VAR13;
        VAR22->VAR23 = FUN6(VAR11, VAR7->VAR24->VAR25[0]->VAR26);
        if (VAR5)
            VAR22->VAR27 |= VAR28;
        if (VAR13 == VAR14)
            VAR22->VAR27 |= VAR29;
        VAR13 += VAR22->VAR23;
        VAR11 -= VAR22->VAR23;
        VAR22->VAR30 = VAR4->VAR30 == VAR31 ? VAR32 : VAR4->VAR30;
        VAR22->VAR33 = VAR4->VAR33 == VAR31 ? VAR32 : VAR4->VAR33;
        if (!VAR11)
            VAR22->VAR27 |= VAR34;
        if (!VAR22->VAR23)
        {
            VAR22->VAR27 |= VAR35;
            VAR7->VAR19 = 1;
        }
        if (VAR10)
        {
            VAR22->VAR36 = FUN2(VAR10);
            if (!VAR22->VAR36)
            {
                FUN7(VAR22);
                VAR15 = FUN4(VAR16);
                goto VAR17;
            }
        }
        if (!VAR7->VAR37)
            VAR7->VAR37 = VAR22;
        if (VAR7->VAR38)
            VAR7->VAR38->VAR39 = VAR22;
        VAR7->VAR38 = VAR22;
    } while (VAR11);
VAR17:
    FUN8(&VAR10);
    return VAR15;
}