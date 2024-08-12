static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    unsigned char VAR6;
    VAR2 &= 7;
    FUN2("", VAR2, VAR3);
    switch (VAR2)
    {
    default:
    case 0:
        if (VAR5->VAR7 & VAR8)
        {
            VAR5->VAR9 = (VAR5->VAR9 & 0xff00) | VAR3;
            FUN3(VAR5);
        }
        else
        {
            VAR5->VAR10 = 0;
            VAR5->VAR11 &= ~VAR12;
            FUN4(VAR5);
            VAR6 = VAR3;
            if (!(VAR5->VAR13 & VAR14))
            {
                FUN5(VAR5->VAR15, &VAR6, 1);
            }
            else
            {
                FUN6(VAR5, VAR6);
            }
            if (VAR5->VAR16 > 0)
            {
                VAR5->VAR16--;
                FUN7(VAR5);
            }
            else if (VAR5->VAR16 == 0)
            {
                VAR5->VAR16--;
                FUN8(VAR5->VAR17, FUN9(VAR18) + VAR19 * VAR20 / 1000);
            }
        }
        break;
    case 1:
        if (VAR5->VAR7 & VAR8)
        {
            VAR5->VAR9 = (VAR5->VAR9 & 0x00ff) | (VAR3 << 8);
            FUN3(VAR5);
        }
        else
        {
            VAR5->VAR21 = VAR3 & 0x0f;
            if (VAR5->VAR11 & VAR12)
            {
                VAR5->VAR10 = 1;
            }
            FUN4(VAR5);
        }
        break;
    case 2:
        break;
    case 3:
    {
        int VAR22;
        VAR5->VAR7 = VAR3;
        FUN3(VAR5);
        VAR22 = (VAR3 >> 6) & 1;
        if (VAR22 != VAR5->VAR23)
        {
            VAR5->VAR23 = VAR22;
            FUN10(VAR5->VAR15, VAR24, &VAR22);
        }
    }
    break;
    case 4:
        VAR5->VAR13 = VAR3 & 0x1f;
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        VAR5->VAR25 = VAR3;
        break;
    }
}