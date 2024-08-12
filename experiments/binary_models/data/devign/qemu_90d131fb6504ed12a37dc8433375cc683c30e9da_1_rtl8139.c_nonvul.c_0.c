static void FUN1(void *VAR1, uint8_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    switch (VAR2)
    {
    case VAR6 ... VAR6 + 4:
        VAR5->VAR7[VAR2 - VAR6] = VAR3;
        break;
    case VAR6 + 5:
        VAR5->VAR7[VAR2 - VAR6] = VAR3;
        FUN2(FUN3(VAR5->VAR8), VAR5->VAR7);
        break;
    case VAR6 + 6 ... VAR6 + 7:
        break;
    case VAR9 ... VAR9 + 7:
        VAR5->VAR10[VAR2 - VAR9] = VAR3;
        break;
    case VAR11:
        FUN4(VAR5, VAR3);
        break;
    case VAR12:
        FUN5(VAR5, VAR3);
        break;
    case VAR13:
        FUN6(VAR5, VAR3);
        break;
    case VAR14:
        FUN7(VAR5, VAR3);
        break;
    case VAR15:
        FUN8(VAR5, VAR3);
        break;
    case VAR16:
        FUN9(VAR5, VAR3);
        break;
    case VAR17:
        FUN10(VAR5, VAR3);
        break;
    case VAR18:
        FUN11(VAR5, VAR3);
        break;
    case VAR19:
        FUN12("", VAR3);
        break;
    case VAR20:
        FUN12("", VAR3);
        if (VAR3 == '')
        {
            VAR5->VAR21 = 1;
        }
        else if (VAR3 == '')
        {
            VAR5->VAR21 = 0;
        }
        break;
    case VAR22:
        FUN12("", VAR3);
        VAR5->VAR22 = VAR3;
        break;
    case VAR23:
        FUN12("", VAR3);
        if (VAR3 & (1 << 7))
        {
            FUN12(""
                    "");
        }
        if (VAR3 & (1 << 6))
        {
            FUN12("");
            FUN13(VAR5);
        }
        break;
    default:
        FUN12("", VAR2, VAR3);
        break;
    }
}