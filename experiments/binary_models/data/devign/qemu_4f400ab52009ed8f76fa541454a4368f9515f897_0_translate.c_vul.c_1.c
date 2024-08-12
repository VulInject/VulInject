FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    uint32_t VAR8;
    unsigned int VAR9;
    int VAR10, VAR11;
    struct VAR12 *VAR13 = &VAR14;
    uint32_t VAR15;
    VAR8 = VAR4->VAR16;
    VAR13->VAR2 = VAR2;
    VAR13->VAR4 = VAR4;
    VAR7 = VAR17 + VAR18;
    VAR13->VAR19 = VAR20;
    VAR13->VAR16 = VAR8;
    VAR13->VAR21 = VAR2->VAR21;
    VAR13->VAR22 = 0;
    VAR13->VAR23 = 0;
    VAR15 = (VAR8 & VAR24) + VAR25;
    VAR11 = -1;
    do
    {
        FUN2(VAR2, VAR13);
        if (VAR13->VAR19 == VAR26)
            goto VAR27;
        if (VAR5)
        {
            VAR10 = VAR28 - VAR17;
            if (VAR11 < VAR10)
            {
                VAR11++;
                while (VAR11 < VAR10)
                    VAR29[VAR11++] = 0;
            }
            VAR30[VAR11] = VAR13->VAR16;
            VAR29[VAR11] = 1;
        }
        VAR9 = FUN3(VAR13);
        FUN4(FUN5());
        VAR13->VAR16 += VAR9;
        if (!VAR13->VAR22 || (VAR13->VAR22 && !(VAR13->VAR31 == VAR32 && VAR13->VAR23)))
        {
            VAR33[VAR34]();
            FUN6(~VAR35);
            VAR36[VAR34]();
            VAR13->VAR22 = 1;
            VAR13->VAR23 = 0;
        }
        if (VAR13->VAR37)
        {
            VAR13->VAR37--;
            if (VAR13->VAR37 == 0)
            {
                if (VAR13->VAR38 == VAR39)
                {
                    FUN7();
                    VAR13->VAR19 = VAR40;
                }
                else
                {
                    FUN8(VAR13->VAR41, VAR13->VAR16);
                    VAR13->VAR19 = VAR40;
                }
            }
        }
        if (VAR2->VAR21)
            break;
    } while (!VAR13->VAR19 && VAR28 < VAR7 && VAR13->VAR16 < VAR15);
    if (!VAR13->VAR19)
    {
        FUN9((long)VAR13->VAR16);
        FUN10();
    }
    FUN11(VAR13);
VAR27:
    if (FUN12(VAR2->VAR21, 0))
    {
        FUN13();
    }
    else
    {
        switch (VAR13->VAR19)
        {
        case VAR20:
            FUN14(VAR13, 1, VAR13->VAR16);
            break;
        default:
        case VAR26:
        case VAR40:
            FUN15(0);
            break;
        case VAR42:
            break;
        }
    }
    *VAR28 = VAR43;
    if (VAR5)
    {
        VAR10 = VAR28 - VAR17;
        VAR11++;
        while (VAR11 <= VAR10)
            VAR29[VAR11++] = 0;
    }
    else
    {
        VAR4->VAR44 = VAR13->VAR16 - VAR8;
    }
    if (VAR45 & VAR46)
    {
        fprintf(VAR47, "");
        fprintf(VAR47, "", FUN16(VAR8));
        FUN17(VAR47, VAR8, VAR13->VAR16 + 4 - VAR8, 0);
        fprintf(VAR47, "");
    }
    return 0;
}