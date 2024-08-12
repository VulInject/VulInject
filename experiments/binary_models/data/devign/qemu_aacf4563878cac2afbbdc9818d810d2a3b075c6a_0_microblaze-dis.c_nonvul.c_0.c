FUN1(bfd_vma VAR1, struct VAR2 *VAR3)
{
    fprintf_ftype VAR4 = VAR3->VAR4;
    void *VAR5 = VAR3->VAR5;
    unsigned long VAR6, VAR7;
    struct VAR8 *VAR9, *VAR10;
    int VAR11 = 0;
    bfd_boolean VAR12 = VAR13;
    static bfd_vma VAR14 = -1;
    static int VAR15 = -1;
    int VAR16 = VAR3->VAR17;
    VAR3->VAR18 = 4;
    VAR6 = FUN2(VAR1, VAR3, &VAR9);
    if (VAR6 == 0)
    {
        return -1;
    }
    if (VAR15 == VAR16)
    {
        if (VAR1 - (VAR3->VAR18) == VAR14)
        {
            VAR7 = FUN2(VAR14, VAR3, &VAR10);
            if (VAR7 == 0)
                return -1;
            if (VAR10->VAR19 == VAR20)
            {
                VAR11 = (FUN3(VAR7) << 16) & 0xffff0000;
                VAR12 = VAR21;
            }
            else
            {
                VAR11 = 0;
                VAR12 = VAR13;
            }
        }
    }
    VAR14 = VAR1;
    VAR15 = VAR16;
    if (VAR9->VAR22 == 0)
    {
        FUN4(VAR5, "", VAR6);
    }
    else
    {
        FUN4(VAR5, "", VAR9->VAR22);
        switch (VAR9->VAR23)
        {
        case VAR24:
            FUN4(VAR5, "", FUN5(VAR6), FUN6(VAR6), FUN7(VAR6));
            break;
        case VAR25:
            FUN4(VAR5, "", FUN5(VAR6), FUN6(VAR6), FUN8(VAR6));
            if (VAR3->VAR26 && FUN9(VAR6) == 0 && VAR3->VAR27)
            {
                if (VAR12)
                    VAR11 |= (FUN3(VAR6) & 0x0000ffff);
                else
                {
                    VAR11 = FUN3(VAR6);
                    if (VAR11 & 0x8000)
                        VAR11 |= 0xFFFF0000;
                }
                if (VAR11 > 0 && VAR3->FUN10(VAR11, VAR3))
                { FUN4 ( VAR5 , ""\VAR28%VAR29, %VAR29, %VAR29""\VAR28%VAR29, %VAR29""\VAR28%VAR29, %VAR29""\VAR28%VAR29, %VAR29""\VAR28%VAR29, %VAR29""\VAR28%VAR29, %VAR29""\VAR28%VAR29, %VAR29""\VAR28%VAR29, %VAR29""\t VAR3 -> FUN11 ( VAR11 , VAR3 ) ;
                }
                else
                { FUN4 ( VAR5 , ""%VAR30""\VAR28%VAR29, %VAR29""\t VAR3 -> FUN11 ( VAR11 , VAR3 ) ;
                }
            }
            break;
        case VAR31:
            FUN4(VAR5, "", FUN8(VAR6));
            if (VAR3->VAR26 && VAR3->VAR27 && VAR9->VAR19 != VAR20)
            {
                if (VAR12)
                    VAR11 |= (FUN3(VAR6) & 0x0000ffff);
                else
                {
                    VAR11 = FUN3(VAR6);
                    if (VAR11 & 0x8000)
                        VAR11 |= 0xFFFF0000;
                }
                if (VAR9->VAR32 == VAR33)
                    VAR11 += (int)VAR1;
                if (VAR11 > 0 && VAR3->FUN10(VAR11, VAR3))
                { FUN4 ( VAR5 , ""\VAR28\t FUN4 ( VAR5 , "" , VAR11 ) ;
                }
            }
            break;
        case VAR34:
            FUN4(VAR5, "", FUN5(VAR6), FUN7(VAR6));
            break;
        case VAR35:
            FUN4(VAR5, "", FUN7(VAR6));
            break;
        case VAR36:
            FUN4(VAR5, "", FUN6(VAR6));
            break;
        case VAR37:
            FUN4(VAR5, "", FUN5(VAR6), FUN7(VAR6));
            break;
        case VAR38:
            FUN4(VAR5, "", FUN5(VAR6), FUN12(VAR6));
            break;
        case VAR39:
            FUN4(VAR5, "", FUN5(VAR6));
            break;
        case VAR40:
            FUN4(VAR5, "", FUN13(VAR6));
            break;
        default:
            FUN4(VAR5, "", VAR6);
            break;
        }
    }
    return 4;
}