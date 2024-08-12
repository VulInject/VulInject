static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6, int VAR7)
{
    const char *VAR8 = "";
    switch (VAR5)
    {
    case VAR9:
        if (VAR6 == 0)
        {
            return;
        }
        FUN2(VAR4, VAR7, VAR4->VAR10 & 0x7);
        FUN3(VAR6);
        VAR8 = "";
        break;
    case VAR11:
        FUN4(VAR12, VAR6);
        FUN5(VAR4, VAR7, VAR4->VAR10 & 0x7);
        VAR8 = "";
        break;
    case VAR13:
        if (VAR6 == 0)
        {
            return;
        }
        FUN6(VAR4, VAR7, VAR4->VAR10 & 0x7);
        FUN3(VAR6);
        VAR8 = "";
        break;
    case VAR14:
        FUN4(VAR12, VAR6);
        FUN7(VAR4, VAR7, VAR4->VAR10 & 0x7);
        VAR8 = "";
        break;
    case VAR15:
        VAR8 = "";
        if (!VAR2->VAR16)
            goto VAR17;
        FUN8();
        break;
    case VAR18:
        VAR8 = "";
        if (!VAR2->VAR19)
            goto VAR17;
        FUN9();
        break;
    case VAR20:
        VAR8 = "";
        if (!VAR2->VAR21)
            goto VAR17;
        FUN10();
        break;
    case VAR22:
        VAR8 = "";
        if (!VAR2->VAR23)
            goto VAR17;
        FUN11();
        break;
    case VAR24:
        VAR8 = "";
        FUN12();
        VAR4->VAR25 = VAR26;
        break;
    case VAR27:
        VAR8 = "";
        if (!(VAR4->VAR28 & VAR29))
        {
            FUN13(VAR8);
            FUN14(VAR4, VAR30);
        }
        else
        {
            FUN15();
            VAR4->VAR25 = VAR26;
        }
        break;
    case VAR31:
        VAR8 = "";
        VAR4->VAR32 += 4;
        FUN16(VAR4, 1);
        VAR4->VAR32 -= 4;
        FUN17();
        VAR4->VAR25 = VAR26;
        break;
    default:
    VAR17:
        FUN13(VAR8);
        FUN14(VAR4, VAR30);
        return;
    }
    FUN18("", VAR8, VAR33[VAR6], VAR7);
}