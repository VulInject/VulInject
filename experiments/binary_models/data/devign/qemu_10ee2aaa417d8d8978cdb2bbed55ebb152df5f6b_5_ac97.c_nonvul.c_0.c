static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6 = VAR2 - VAR5->VAR7[0];
    VAR5->VAR8 = 0;
    switch (VAR6)
    {
    case VAR9:
        FUN2(VAR5);
        break;
    case VAR10:
        VAR3 &= ~0xf;
        VAR3 |= FUN3(VAR5, VAR6) & 0xf;
        FUN4(VAR5, VAR6, VAR3);
        break;
    case VAR11:
        FUN5(VAR5, VAR6, VAR12, VAR3);
        break;
    case VAR13:
        FUN5(VAR5, VAR6, VAR14, VAR3);
        break;
    case VAR15:
        FUN5(VAR5, VAR6, VAR16, VAR3);
        break;
    case VAR17:
        FUN6(VAR5, VAR3);
        break;
    case VAR18:
    case VAR19:
        FUN7("", VAR3);
        break;
    case VAR20:
        FUN7("", VAR3);
        break;
    case VAR21:
        if (!(VAR3 & VAR22))
        {
            FUN4(VAR5, VAR23, 0xbb80);
            FUN4(VAR5, VAR24, 0xbb80);
            FUN8(VAR5, VAR25, 48000);
            FUN8(VAR5, VAR26, 48000);
        }
        if (!(VAR3 & VAR27))
        {
            FUN4(VAR5, VAR28, 0xbb80);
            FUN8(VAR5, VAR29, 48000);
        }
        FUN7("", VAR3);
        FUN4(VAR5, VAR21, VAR3);
        break;
    case VAR23:
        if (FUN3(VAR5, VAR21) & VAR22)
        {
            FUN4(VAR5, VAR6, VAR3);
            FUN7("", VAR3);
            FUN8(VAR5, VAR26, VAR3);
        }
        else
        {
            FUN7(""
                  "",
                  VAR3);
        }
        break;
    case VAR28:
        if (FUN3(VAR5, VAR21) & VAR27)
        {
            FUN4(VAR5, VAR6, VAR3);
            FUN7("", VAR3);
            FUN8(VAR5, VAR29, VAR3);
        }
        else
        {
            FUN7(""
                  "",
                  VAR3);
        }
        break;
    case VAR24:
        if (FUN3(VAR5, VAR21) & VAR22)
        {
            FUN4(VAR5, VAR6, VAR3);
            FUN7("", VAR3);
            FUN8(VAR5, VAR25, VAR3);
        }
        else
        {
            FUN7("", VAR3);
        }
        break;
    default:
        FUN7("", VAR2, VAR3);
        FUN4(VAR5, VAR6, VAR3);
        break;
    }
}