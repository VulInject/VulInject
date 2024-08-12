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
                fprintf(VAR9, "", VAR10, VAR3 ? "" : "");
            }
            if (VAR3)
            {
                FUN2(VAR5);
            }
            else
            {
                FUN3(VAR5);
            }
        case VAR13:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR3);
            }
            FUN4(VAR5, VAR14, VAR3);
            break;
        case VAR15:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR3);
            }
            FUN4(VAR5, VAR16, VAR3);
            break;
        case VAR17:
            if (VAR6 == 1 && VAR3 == 0)
            {
                if (VAR7 & VAR8)
                {
                    fprintf(VAR9, "", VAR10);
                }
                FUN4(VAR5, VAR18, 1);
            }
            break;
        case VAR19:
            if (VAR3)
            {
                if (VAR7 & VAR8)
                {
                    fprintf(VAR9, "", VAR10);
                }
                VAR5->VAR20 = 1;
            }
            break;
        case VAR21:
            if (VAR3)
            {
                if (VAR7 & VAR8)
                {
                    fprintf(VAR9, "", VAR10);
                }
                FUN5(VAR5);
            }
            break;
        case VAR22:
            if (VAR7 & VAR8)
            {
                fprintf(VAR9, "", VAR10, VAR3);
            }
            FUN4(VAR5, VAR23, VAR3);
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