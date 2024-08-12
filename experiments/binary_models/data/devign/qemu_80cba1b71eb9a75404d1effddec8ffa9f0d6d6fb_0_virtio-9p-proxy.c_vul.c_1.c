static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(sizeof(VAR3));
    int VAR5;
    if (VAR2->VAR6 & VAR7)
    {
        VAR5 = FUN3(VAR2->VAR8);
    }
    else
    {
        VAR5 = FUN4(VAR2->VAR8);
        if (VAR5 < 0)
        {
            fprintf(VAR9, "");
            return -1;
        }
    }
    FUN5(VAR2->VAR8);
    VAR4->VAR10.VAR11 = FUN2(VAR12 + VAR13);
    VAR4->VAR10.VAR14 = VAR12 + VAR13;
    VAR4->VAR15.VAR11 = FUN2(VAR12 + VAR13);
    VAR4->VAR15.VAR14 = VAR12 + VAR13;
    VAR2->private = VAR4;
    VAR4->VAR16 = VAR5;
    FUN6(&VAR4->mutex);
    VAR2->VAR6 |= VAR17;
    VAR2->VAR18.VAR19 = VAR20;
    return 0;