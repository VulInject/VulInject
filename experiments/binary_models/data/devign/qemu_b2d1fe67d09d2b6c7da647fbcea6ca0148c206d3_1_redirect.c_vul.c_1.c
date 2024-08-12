static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR6, VAR2);
    uint8_t VAR7;
    VAR7 = VAR4->VAR7->VAR8;
    if (VAR4->VAR9 == VAR10)
    {
        VAR7 |= VAR11;
    }
    switch (VAR6->VAR12[FUN3(VAR7)].VAR13)
    {
    case VAR14:
        FUN4("", VAR7);
        VAR4->VAR15 = VAR16;
        break;
    case VAR17:
        FUN5(VAR6, VAR4, VAR7);
        break;
    case VAR18:
        if (VAR4->VAR19 == VAR20 && VAR4->VAR9 == VAR10 && VAR4->VAR7->VAR21)
        {
            VAR4->VAR15 = VAR22;
            break;
        }
        FUN6(VAR6, VAR4, VAR7);
        break;
    case VAR23:
        if (VAR7 & VAR11)
        {
            FUN7(VAR6, VAR4, VAR7);
        }
        else
        {
            FUN8(VAR6, VAR4, VAR7);
        }
        break;
    default:
        FUN4("", VAR7, VAR6->VAR12[FUN3(VAR7)].VAR13);
        VAR4->VAR15 = VAR16;
    }
}