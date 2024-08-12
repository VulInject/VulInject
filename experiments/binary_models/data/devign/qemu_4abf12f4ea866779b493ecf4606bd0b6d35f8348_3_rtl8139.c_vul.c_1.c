static void FUN1(void *VAR1, uint8_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 &= 0xff;
    switch (VAR2)
    {
    case VAR6 ... VAR6 + 5:
        VAR5->VAR7[VAR2 - VAR6] = VAR3;
        break;
    case VAR6 + 6 ... VAR6 + 7:
        break;
    case VAR8 ... VAR8 + 7:
        VAR5->VAR9[VAR2 - VAR8] = VAR3;
        break;
    case VAR10:
        FUN2(VAR5, VAR3);
        break;
    case VAR11:
        FUN3(VAR5, VAR3);
        break;
    case VAR12:
        FUN4(VAR5, VAR3);
        break;
    case VAR13:
        FUN5(VAR5, VAR3);
        break;
    case VAR14:
        FUN6(VAR5, VAR3);
        break;
    case VAR15:
        FUN7(VAR5, VAR3);
        break;
    case VAR16:
        FUN8(VAR5, VAR3);
        break;
    case VAR17:
        FUN9(VAR5, VAR3);
        break;
    case VAR18:
        FUN10("", VAR3);
        break;
    case VAR19:
        FUN10("", VAR3);
        if (VAR3 == '')
        {
            VAR5->VAR20 = 1;
        }
        else if (VAR3 == '')
        {
            VAR5->VAR20 = 0;
        }
        break;
    case VAR21:
        FUN10("", VAR3);
        VAR5->VAR21 = VAR3;
        break;
    case VAR22:
        FUN10("", VAR3);
        if (VAR3 & (1 << 7))
        {
            FUN10(""
                    "");
        }
        if (VAR3 & (1 << 6))
        {
            FUN10("");
            FUN11(VAR5);
        }
        break;
    default:
        FUN10("", VAR2, VAR3);
        break;
    }
}