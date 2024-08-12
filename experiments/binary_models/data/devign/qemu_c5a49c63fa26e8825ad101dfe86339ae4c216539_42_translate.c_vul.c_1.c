void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    target_ulong VAR8, VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    int VAR12;
    int VAR13;
    unsigned int VAR14;
    memset(VAR11, 0, sizeof(VAR15));
    VAR11->VAR4 = VAR4;
    VAR8 = VAR4->VAR16;
    VAR11->VAR16 = VAR8;
    VAR9 = VAR11->VAR16;
    VAR11->VAR17 = (VAR18)VAR4->VAR19;
    VAR11->VAR20 = VAR21;
    VAR11->VAR22 = VAR4->VAR23 & VAR24;
    VAR11->VAR25 = &VAR6->VAR25;
    VAR11->VAR26 = FUN2(VAR4->VAR23);
    VAR11->VAR27 = FUN3(VAR4->VAR23);
    VAR11->VAR28 = (VAR2->VAR29 || VAR28);
    VAR11->VAR30 = (VAR4->VAR23 & VAR31) != 0;
    VAR11->VAR32 = 0;
    VAR11->VAR33 = (VAR4->VAR23 >> VAR34) & 0xff;
    VAR11->VAR35 = (VAR4->VAR23 & VAR36) != 0;
    VAR12 = 0;
    VAR13 = VAR4->VAR37 & VAR38;
    if (VAR13 == 0)
    {
        VAR13 = VAR38;
    }
    if (VAR13 > VAR39)
    {
        VAR13 = VAR39;
    }
    FUN4(VAR4);
    do
    {
        if (VAR11->VAR17 & VAR40)
        {
            assert(VAR11->VAR41[1] == VAR11->VAR16 + 4);
            FUN5(VAR11->VAR16, VAR11->VAR41[0] | VAR40);
        }
        else
        {
            FUN5(VAR11->VAR16, VAR11->VAR17);
        }
        VAR12++;
        VAR9 = VAR11->VAR16;
        if (FUN6(FUN7(VAR2, VAR11->VAR16, VAR42)))
        {
            if (VAR11->VAR16 != VAR8)
            {
                FUN8(VAR11);
            }
            FUN9(VAR43);
            FUN10(0);
            VAR11->VAR44 = 1;
            goto VAR45;
        }
        if (VAR12 == VAR13 && (VAR4->VAR37 & VAR46))
        {
            FUN11();
        }
        VAR14 = FUN12(VAR6, VAR11->VAR16);
        FUN13(VAR11, VAR14);
        if (VAR11->VAR44)
            break;
        if (VAR11->VAR16 != (VAR9 + 4))
            break;
        if ((VAR11->VAR16 & (VAR47 - 1)) == 0)
            break;
        if (VAR11->VAR28)
        {
            break;
        }
    } while (!FUN14() && (VAR11->VAR16 - VAR8) < (VAR47 - 32) && VAR12 < VAR13);
VAR45:
    if (VAR4->VAR37 & VAR46)
    {
        FUN15();
    }
    if (!VAR11->VAR44)
    {
        if (VAR11->VAR16 != VAR48 && (VAR11->VAR17 != VAR48 && VAR11->VAR17 != VAR40))
        {
            FUN16(VAR11, 0, VAR11->VAR16, VAR11->VAR17);
        }
        else
        {
            if (VAR11->VAR16 != VAR48)
            {
                FUN17(VAR49, VAR11->VAR16);
            }
            FUN18(VAR11);
            FUN10(0);
        }
    }
    FUN19(VAR4, VAR12);
    VAR4->VAR50 = VAR9 + 4 - VAR8;
    VAR4->VAR51 = VAR12;
    if (FUN20(VAR52) && FUN21(VAR8))
    {
        FUN22();
        FUN23("");
        FUN23("", FUN24(VAR8));
        FUN25(VAR2, VAR8, VAR9 + 4 - VAR8, 0);
        FUN23("");
        FUN26();
    }
}