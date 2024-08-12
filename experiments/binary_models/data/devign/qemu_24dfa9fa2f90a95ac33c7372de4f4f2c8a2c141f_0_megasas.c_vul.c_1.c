static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = FUN2(VAR6);
    uint64_t VAR9;
    uint32_t VAR10;
    int VAR11;
    switch (VAR2)
    {
    case VAR12:
        FUN3("", VAR3);
        if (VAR3 & VAR13)
        {
            for (VAR11 = 0; VAR11 < VAR6->VAR14; VAR11++)
            {
                FUN4(&VAR6->VAR15[VAR11]);
            }
        }
        if (VAR3 & VAR16)
        {
            FUN5(VAR6);
        }
        if (VAR3 & VAR17)
        {
        }
        if (VAR3 & VAR18)
        {
            VAR6->VAR19 = VAR20;
        }
        break;
    case VAR21:
        FUN3("", VAR3);
        VAR6->VAR22 = VAR3;
        if (!FUN6(VAR6) && !FUN7(VAR8) && !FUN8(VAR8))
        {
            FUN9();
            FUN10(VAR8);
        }
        if (FUN6(VAR6))
        {
            if (FUN8(VAR8))
            {
                FUN11(0);
            }
            else if (FUN7(VAR8))
            {
                FUN12(0);
            }
            else
            {
                FUN13();
            }
        }
        else
        {
            FUN14();
            FUN5(VAR6);
        }
        break;
    case VAR23:
        FUN3("", VAR3);
        VAR6->VAR24 = 0;
        if (FUN6(VAR6))
        {
            if (!FUN8(VAR8) && !FUN7(VAR8))
            {
                FUN9();
                FUN10(VAR8);
            }
        }
        break;
    case VAR25:
        FUN3("", VAR3);
        VAR6->VAR26 = VAR3;
        break;
    case VAR27:
        FUN3("", VAR3);
    case VAR28:
        if (VAR2 == VAR28)
        {
            FUN3("", VAR3);
            VAR6->VAR26 = 0;
        }
        VAR9 = (VAR3 & ~0x1F);
        VAR9 |= ((VAR29)VAR6->VAR26 << 32);
        VAR6->VAR26 = 0;
        VAR10 = (VAR3 >> 1) & 0xF;
        FUN15(VAR6, VAR9, VAR10);
        break;
    case VAR30:
        FUN3("", VAR3);
        if (VAR31[VAR6->VAR32] == VAR3)
        {
            VAR6->VAR32++;
        }
        else
        {
            VAR6->VAR32 = 0;
            VAR6->VAR33 = 0;
        }
        if (VAR6->VAR32 == 6)
        {
            VAR6->VAR33 = VAR34;
        }
        break;
    case VAR35:
        FUN3("", VAR3);
        if ((VAR6->VAR33 & VAR34) && (VAR3 & VAR36))
        {
            VAR6->VAR33 |= VAR36;
            FUN5(VAR6);
            VAR6->VAR32 = 0;
            VAR6->VAR33 = 0;
        }
        break;
    default:
        FUN16(VAR2, VAR3);
        break;
    }
}