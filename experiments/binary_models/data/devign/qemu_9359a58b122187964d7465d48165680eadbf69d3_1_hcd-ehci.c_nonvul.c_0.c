static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR9 + (VAR2 >> 2);
    uint32_t VAR10 = *VAR8;
    int VAR11;
    FUN2(VAR2 + VAR6->VAR12, FUN3(VAR2), VAR3);
    switch (VAR2)
    {
    case VAR13:
        if (VAR3 & VAR14)
        {
            FUN4(VAR6);
            VAR3 = VAR6->VAR15;
            break;
        }
        if ((VAR3 & VAR16) && !(VAR6->VAR15 & VAR16))
        {
            fprintf(VAR17, "", (int)VAR3 & VAR16);
            VAR3 &= ~VAR16;
        }
        if (VAR3 & VAR18)
        {
            VAR6->VAR19 = 0;
            FUN5(VAR6->VAR20);
            FUN6();
        }
        if (((VAR21 | VAR22 | VAR23) & VAR3) != ((VAR21 | VAR22 | VAR23) & VAR6->VAR15))
        {
            if (VAR6->VAR24 == VAR25)
            {
                FUN7(VAR6);
            }
            VAR6->VAR15 = VAR3;
            FUN8(VAR6);
            VAR6->VAR19 = 0;
            FUN5(VAR6->VAR20);
        }
        break;
    case VAR26:
        VAR3 &= VAR27;
        FUN9(VAR6, VAR3);
        VAR3 = VAR6->VAR28;
        FUN10(VAR6);
        break;
    case VAR29:
        VAR3 &= VAR30;
        if (FUN11(VAR6) && (VAR31 & VAR3))
        {
            FUN5(VAR6->VAR20);
        }
        break;
    case VAR32:
        VAR3 &= 0x00003fff;
        VAR6->VAR33 = VAR3;
        break;
    case VAR34:
        VAR3 &= 0x1;
        if (VAR3)
        {
            for (VAR11 = 0; VAR11 < VAR35; VAR11++)
                FUN12(VAR6, VAR11, 0);
        }
        break;
    case VAR36:
        if (FUN13(VAR6))
        {
            fprintf(VAR17, ""
                            "");
        }
        break;
    case VAR37:
        if (FUN14(VAR6))
        {
            fprintf(VAR17, ""
                            "");
        }
        break;
    }
    *VAR8 = VAR3;
    FUN15(VAR2 + VAR6->VAR12, FUN3(VAR2), *VAR8, VAR10);
}