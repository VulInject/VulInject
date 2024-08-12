void FUN1(VAR1 *VAR2, unsigned int *VAR3, unsigned int *VAR4, unsigned VAR5, unsigned VAR6)
{
    unsigned int VAR7;
    unsigned int VAR8, VAR9, VAR10;
    VAR7 = VAR2->VAR11;
    VAR8 = VAR9 = VAR10 = 0;
    while (FUN2(VAR2, VAR7))
    {
        unsigned int VAR12, VAR13, VAR14 = 0;
        hwaddr VAR15;
        int VAR16;
        VAR12 = VAR2->VAR17.VAR18;
        VAR13 = VAR8;
        VAR16 = FUN3(VAR2, VAR7++);
        VAR15 = VAR2->VAR17.VAR19;
        if (FUN4(VAR15, VAR16) & VAR20)
        {
            if (FUN5(VAR15, VAR16) % sizeof(VAR21))
            {
                FUN6("");
                FUN7(1);
            }
            if (VAR13 >= VAR12)
            {
                FUN6("");
                FUN7(1);
            }
            VAR14 = 1;
            VAR12 = FUN5(VAR15, VAR16) / sizeof(VAR21);
            VAR15 = FUN8(VAR15, VAR16);
            VAR13 = VAR16 = 0;
        }
        do
        {
            if (++VAR13 > VAR12)
            {
                FUN6("");
                FUN7(1);
            }
            if (FUN4(VAR15, VAR16) & VAR22)
            {
                VAR9 += FUN5(VAR15, VAR16);
            }
            else
            {
                VAR10 += FUN5(VAR15, VAR16);
            }
            if (VAR9 >= VAR5 && VAR10 >= VAR6)
            {
                goto VAR23;
            }
        } while ((VAR16 = FUN9(VAR15, VAR16, VAR12)) != VAR12);
        if (!VAR14)
            VAR8 = VAR13;
        else
            VAR8++;
    }
VAR23:
    if (VAR3)
    {
        *VAR3 = VAR9;
    }
    if (VAR4)
    {
        *VAR4 = VAR10;
    }
}