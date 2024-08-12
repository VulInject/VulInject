FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2("", VAR2, VAR3);
    VAR2 &= 7;
    switch (VAR2)
    {
    case VAR6:
        VAR5->VAR7 = VAR3;
        FUN3(VAR5);
        break;
    case VAR8:
        VAR3 |= 0xc0;
        if ((VAR3 & VAR9) == 0)
        {
            VAR5->VAR10 = VAR11;
            VAR5->VAR10 |= VAR12;
            VAR5->VAR10 |= VAR13;
            VAR5->VAR10 |= VAR14;
        }
        else if (VAR3 & VAR15)
        {
            if (VAR3 & VAR16)
            {
                VAR5->VAR10 &= ~VAR11;
                if ((VAR5->VAR17 & VAR16) == 0)
                    FUN4(VAR5->VAR18, &VAR5->VAR7, 1);
            }
            else
            {
                if (VAR5->VAR17 & VAR19)
                {
                    VAR5->VAR20 = 1;
                }
            }
        }
        FUN3(VAR5);
        VAR5->VAR17 = VAR3;
        break;
    }
}