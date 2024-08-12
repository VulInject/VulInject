static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = FUN3(VAR9);
    switch (VAR5 & VAR13)
    {
    case VAR14:
    case VAR15:
        VAR7->FUN4(VAR2, VAR4);
        break;
    case VAR16:
        VAR7->FUN5(VAR2, VAR4);
        break;
    case VAR17:
        if (VAR5 & 0xff00)
        {
            VAR7->FUN6(VAR2, VAR4);
        }
        else
        {
            VAR7->FUN7(VAR2, VAR4);
        }
        break;
    case VAR18:
        VAR7->FUN8(VAR2, VAR4, (VAR5 & 0xff00) >> 8);
        break;
    case VAR19:
        VAR7->FUN9(VAR2, VAR4);
        break;
    case VAR20:
        VAR7->FUN10(VAR2, VAR4);
        break;
    case VAR21:
        FUN11(VAR2, VAR4, true);
        break;
    case VAR22:
        FUN11(VAR2, VAR4, false);
        break;
    default:
        VAR12->FUN12(VAR9, VAR4, VAR5);
        break;
    }
}