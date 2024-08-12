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
        FUN2(VAR2, VAR4, VAR10[VAR6], VAR7, VAR4->VAR11 & 0x7);
        VAR8 = "";
        break;
    case VAR12:
    {
        TCGv VAR13 = FUN3();
        FUN4(VAR13, VAR6);
        FUN5(VAR2, VAR4, VAR13, VAR7, VAR4->VAR11 & 0x7);
        FUN6(VAR13);
    }
        VAR8 = "";
        break;
    case VAR14:
        FUN7(VAR2, VAR4, VAR15);
        if (VAR6 == 0)
        {
            return;
        }
        FUN8(VAR2, VAR4, VAR10[VAR6], VAR7, VAR4->VAR11 & 0x7);
        VAR8 = "";
        break;
    case VAR16:
        FUN7(VAR2, VAR4, VAR15);
        {
            TCGv VAR13 = FUN3();
            FUN4(VAR13, VAR6);
            FUN9(VAR2, VAR4, VAR13, VAR7, VAR4->VAR11 & 0x7);
            FUN6(VAR13);
        }
        VAR8 = "";
        break;
    case VAR17:
        FUN7(VAR2, VAR4, VAR18);
        if (VAR7 == 0)
        {
            return;
        }
        FUN10(VAR2, VAR4, VAR6, VAR7, (VAR4->VAR11 >> 5) & 1, VAR4->VAR11 & 0x7, (VAR4->VAR11 >> 4) & 1);
        VAR8 = "";
        break;
    case VAR19:
        FUN7(VAR2, VAR4, VAR18);
        FUN11(VAR2, VAR4, VAR7, VAR6, (VAR4->VAR11 >> 5) & 1, VAR4->VAR11 & 0x7, (VAR4->VAR11 >> 4) & 1);
        VAR8 = "";
        break;
    case VAR20:
        VAR8 = "";
        if (!VAR2->VAR21->VAR22)
            goto VAR23;
        FUN12();
        break;
    case VAR24:
        VAR8 = "";
        if (!VAR2->VAR21->VAR25)
            goto VAR23;
        FUN13();
        break;
    case VAR26:
        VAR8 = "";
        if (!VAR2->VAR21->VAR27)
            goto VAR23;
        FUN14();
        break;
    case VAR28:
        VAR8 = "";
        if (!VAR2->VAR21->VAR29)
            goto VAR23;
        FUN15();
        break;
    case VAR30:
        VAR8 = "";
        FUN7(VAR2, VAR4, VAR31);
        FUN16();
        VAR4->VAR32 = VAR33;
        break;
    case VAR34:
        VAR8 = "";
        FUN7(VAR2, VAR4, VAR35);
        if (!(VAR4->VAR36 & VAR37))
        {
            FUN17(VAR8);
            FUN18(VAR4, VAR38);
        }
        else
        {
            FUN19();
            VAR4->VAR32 = VAR33;
        }
        break;
    case VAR39:
        VAR8 = "";
        FUN7(VAR2, VAR4, VAR15 | VAR35);
        VAR4->VAR40 += 4;
        FUN20(VAR4, 1);
        VAR4->VAR40 -= 4;
        FUN21();
        VAR4->VAR32 = VAR33;
        break;
    default:
    VAR23:
        FUN17(VAR8);
        FUN18(VAR4, VAR38);
        return;
    }
    (void)VAR8;
    FUN22("", VAR8, VAR41[VAR6], VAR7);