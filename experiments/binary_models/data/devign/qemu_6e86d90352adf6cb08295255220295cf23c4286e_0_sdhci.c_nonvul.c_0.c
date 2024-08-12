static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    if (VAR3->VAR4 & VAR5)
    {
        switch (FUN2(VAR3->VAR6))
        {
        case VAR7:
            if ((VAR3->VAR8 == 1) || !(VAR3->VAR4 & VAR9))
            {
                FUN3(VAR3);
            }
            else
            {
                FUN4(VAR3);
            }
            break;
        case VAR10:
            if (!(VAR3->VAR11 & VAR12))
            {
                FUN5("");
                break;
            }
            FUN6(VAR3);
            break;
        case VAR13:
            if (!(VAR3->VAR11 & VAR14))
            {
                FUN5("");
                break;
            }
            FUN6(VAR3);
            break;
        case VAR15:
            if (!(VAR3->VAR11 & VAR14) || !(VAR3->VAR11 & VAR16))
            {
                FUN5("");
                break;
            }
            FUN6(VAR3);
            break;
        default:
            FUN5("");
            break;
        }
    }
    else
    {
        if ((VAR3->VAR4 & VAR17) && FUN7(&VAR3->VAR18))
        {
            VAR3->VAR19 |= VAR20 | VAR21 | VAR22;
            FUN8(VAR3);
        }
        else
        {
            VAR3->VAR19 |= VAR23 | VAR22 | VAR24 | VAR21;
            FUN9(VAR3);
        }
    }
}