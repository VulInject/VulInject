static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, bool VAR5)
{
    int32_t VAR6;
    TCGv_i32 VAR7, VAR8;
    bool VAR9 = false;
    if (VAR2->VAR10 == 1 && !VAR2->VAR11)
    {
        FUN2(VAR2, 4, VAR12, FUN3(), 3);
        return;
    }
    if (VAR2->VAR10 == 0 || VAR2->VAR10 == 2)
    {
        VAR9 = true;
    }
    switch (VAR3)
    {
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
        break;
    case VAR20:
        if (VAR2->VAR10 == 1 || !FUN4(VAR2, VAR21))
        {
            VAR9 = true;
        }
        break;
    case VAR22:
        if (VAR2->VAR10 != 3)
        {
            VAR9 = true;
        }
        break;
    default:
        VAR9 = true;
    }
    if (VAR9)
    {
        FUN2(VAR2, 4, VAR12, FUN3(), FUN5(VAR2));
        return;
    }
    VAR7 = FUN6();
    VAR8 = FUN7(VAR3);
    FUN8(VAR7, VAR23, VAR8);
    FUN9(VAR8);
    switch (VAR4)
    {
    case 0:
        VAR6 = -4;
        break;
    case 1:
        VAR6 = 0;
        break;
    case 2:
        VAR6 = -8;
        break;
    case 3:
        VAR6 = 4;
        break;
    default:
        FUN10();
    }
    FUN11(VAR7, VAR7, VAR6);
    VAR8 = FUN12(VAR2, 14);
    FUN13(VAR8, VAR7, FUN14(VAR2));
    FUN9(VAR8);
    VAR8 = FUN15(VAR24);
    FUN11(VAR7, VAR7, 4);
    FUN13(VAR8, VAR7, FUN14(VAR2));
    FUN9(VAR8);
    if (VAR5)
    {
        switch (VAR4)
        {
        case 0:
            VAR6 = -8;
            break;
        case 1:
            VAR6 = 4;
            break;
        case 2:
            VAR6 = -4;
            break;
        case 3:
            VAR6 = 0;
            break;
        default:
            FUN10();
        }
        FUN11(VAR7, VAR7, VAR6);
        VAR8 = FUN7(VAR3);
        FUN16(VAR23, VAR8, VAR7);
        FUN9(VAR8);
    }
    FUN9(VAR7);
}