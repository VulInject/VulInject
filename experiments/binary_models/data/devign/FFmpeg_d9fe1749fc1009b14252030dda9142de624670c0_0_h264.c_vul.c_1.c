static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    int VAR7;
    if (VAR2->VAR8 == VAR9)
    {
        VAR6->VAR10 = FUN2(VAR4) - 1;
        VAR2->VAR11[0].VAR12 = FUN2(VAR4) - 1;
        if (VAR2->VAR11[0].VAR12 == -1)
            else
            {
                VAR2->VAR11[0].VAR13 = VAR14;
                VAR2->VAR15 = 1;
            }
    }
    else
    {
        if (FUN2(VAR4))
        {
            for (VAR7 = 0; VAR7 < VAR16; VAR7++)
            {
                MMCOOpcode VAR13 = FUN3(VAR4);
                VAR2->VAR11[VAR7].VAR13 = VAR13;
                if (VAR13 == VAR17 || VAR13 == VAR18)
                {
                    VAR2->VAR11[VAR7].VAR19 = (VAR2->VAR20 - FUN3(VAR4) - 1) & (VAR2->VAR21 - 1);
                }
                if (VAR13 == VAR18 || VAR13 == VAR22 || VAR13 == VAR14 || VAR13 == VAR23)
                {
                    unsigned int VAR12 = FUN3(VAR4);
                    if (VAR12 >= 32 || (VAR12 >= 16 && !(VAR13 == VAR22 && VAR24)))
                    {
                        FUN4(VAR2->VAR6.VAR25, VAR26, "", VAR13);
                        return -1;
                    }
                    VAR2->VAR11[VAR7].VAR12 = VAR12;
                }
                if (VAR13 > (unsigned)VAR14)
                {
                    FUN4(VAR2->VAR6.VAR25, VAR26, "", VAR13);
                    return -1;
                }
                if (VAR13 == VAR27)
                    break;
            }
            VAR2->VAR15 = VAR7;
        }
        else
        {
            assert(VAR2->VAR28 + VAR2->VAR29 <= VAR2->VAR30.VAR31);
            if (VAR2->VAR29 && VAR2->VAR28 + VAR2->VAR29 == VAR2->VAR30.VAR31 && !(VAR24 && !VAR6->VAR32 && VAR6->VAR33->VAR34))
            {
                VAR2->VAR11[0].VAR13 = VAR17;
                VAR2->VAR11[0].VAR19 = VAR2->VAR35[VAR2->VAR29 - 1]->VAR36;
                VAR2->VAR15 = 1;
                if (VAR24)
                {
                    VAR2->VAR11[0].VAR19 *= 2;
                    VAR2->VAR11[1].VAR13 = VAR17;
                    VAR2->VAR11[1].VAR19 = VAR2->VAR11[0].VAR19 + 1;
                    VAR2->VAR15 = 2;
                }
            }
            else
        }
    }
    return 0;