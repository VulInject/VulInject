static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6;
    if (VAR7 & VAR8)
    {
        fprintf(VAR9, "", VAR10, VAR5, VAR2, VAR3);
    }
    VAR6 = (VAR5->VAR11 >> VAR2) & 1;
    if ((VAR6 == 1 && VAR3 == 0) || (VAR6 == 0 && VAR3 != 0))
    {
        switch (VAR2)
        {
        case VAR12:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR3);
            }
            FUN2(VAR5, VAR13, VAR3);
            break;
        case VAR14:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR3);
            }
            FUN2(VAR5, VAR15, VAR3);
            break;
        case VAR16:
            if (VAR6 == 1 && VAR3 == 0)
            {
                if (VAR7 & VAR8)
                {
                    fprintf(VAR9, "", VAR10);
                }
                FUN2(VAR5, VAR17, 1);
            }
            break;
        case VAR18:
            if (VAR3)
            {
                if (VAR7 & VAR8)
                {
                    fprintf(VAR9, "", VAR10);
                }
                VAR5->VAR19 = 1;
            }
            break;
        case VAR20:
            if (VAR3)
            {
                if (VAR7 & VAR8)
                {
                    fprintf(VAR9, "", VAR10);
                }
                FUN3(VAR5);
            }
            break;
        case VAR21:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR3);
            }
            FUN2(VAR5, VAR22, VAR3);
            break;
        default:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR2);
            }
            return;
        }
        if (VAR3)
            VAR5->VAR11 |= 1 << VAR2;
        else
            VAR5->VAR11 &= ~(1 << VAR2);
    }
}