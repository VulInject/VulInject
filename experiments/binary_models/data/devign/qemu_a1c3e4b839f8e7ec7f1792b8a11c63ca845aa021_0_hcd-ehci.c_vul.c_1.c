static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = (VAR6 *)(&VAR5->VAR7[VAR2]);
    uint32_t VAR8 = *VAR7;
    int VAR9;
    FUN2(VAR2, FUN3(VAR2), VAR3);
    if (VAR2 & 3)
    {
        fprintf(VAR10, "" VAR11 "", VAR2);
        return;
        if (VAR2 >= VAR12 && VAR2 < VAR12 + 4 * VAR13)
        {
            FUN4(VAR5, (VAR2 - VAR12) / 4, VAR3);
            FUN5(VAR2, FUN3(VAR2), *VAR7, VAR8);
            return;
            if (VAR2 < VAR14)
            {
                fprintf(VAR10, "" VAR11 "", VAR2);
                return;
                switch (VAR2)
                {
                case VAR15:
                    if (VAR3 & VAR16)
                    {
                        FUN6(VAR5);
                        VAR3 = VAR5->VAR17;
                        break;
                        if ((VAR3 & VAR18) && !(VAR5->VAR17 & VAR18))
                        {
                            fprintf(VAR10, "", VAR3 & VAR18);
                            VAR3 &= ~VAR18;
                            if (((VAR19 | VAR20 | VAR21) & VAR3) != ((VAR19 | VAR20 | VAR21) & VAR5->VAR17))
                            {
                                if (VAR5->VAR22 == VAR23)
                                {
                                    FUN7(VAR5);
                                    VAR5->VAR17 = VAR3;
                                    FUN8(VAR5);
                                    FUN9(VAR5->VAR24, FUN10(VAR25));
                                    break;
                                case VAR26:
                                    VAR3 &= VAR27;
                                    FUN11(VAR5, VAR3);
                                    VAR3 = VAR5->VAR28;
                                    FUN12(VAR5);
                                    break;
                                case VAR29:
                                    VAR3 &= VAR30;
                                    break;
                                case VAR31:
                                    VAR3 &= 0x00003ff8;
                                    break;
                                case VAR32:
                                    VAR3 &= 0x1;
                                    if (VAR3)
                                    {
                                        for (VAR9 = 0; VAR9 < VAR13; VAR9++)
                                            FUN13(VAR5, VAR9, 0);
                                        break;
                                    case VAR33:
                                        if (FUN14(VAR5))
                                        {
                                            fprintf(VAR10, ""
                                                            "");
                                            break;
                                        case VAR34:
                                            if (FUN15(VAR5))
                                            {
                                                fprintf(VAR10, ""
                                                                "");
                                                break;
                                                *VAR7 = VAR3;
                                                FUN5(VAR2, FUN3(VAR2), *VAR7, VAR8)