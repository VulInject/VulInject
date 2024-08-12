static int FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 **VAR5)
{
    uint32_t VAR6;
    bool VAR7 = false;
    bool VAR8 = false;
    if (FUN2(VAR2->VAR9, &VAR6, sizeof(VAR6), VAR5) < 0)
    {
        FUN3(VAR5, "");
        return -VAR10;
        FUN4(&VAR6);
        FUN5(VAR6);
        if (VAR6 & VAR11)
        {
            VAR7 = true;
            VAR6 &= ~VAR11;
            if (VAR6 & VAR12)
            {
                VAR8 = true;
                VAR6 &= ~VAR12;
                if (VAR6 != 0)
                {
                    FUN6(VAR5, "" VAR13 "", VAR6);
                    while (1)
                    {
                        int VAR14;
                        uint32_t VAR15, VAR16;
                        uint64_t VAR17;
                        if (FUN2(VAR2->VAR9, &VAR17, sizeof(VAR17), VAR5) < 0)
                        {
                            FUN3(VAR5, "");
                            VAR17 = FUN7(VAR17);
                            FUN8(VAR17);
                            if (VAR17 != VAR18)
                            {
                                FUN6(VAR5, "");
                                if (FUN2(VAR2->VAR9, &VAR15, sizeof(VAR15), VAR5) < 0)
                                {
                                    FUN3(VAR5, "");
                                    VAR15 = FUN9(VAR15);
                                    if (FUN2(VAR2->VAR9, &VAR16, sizeof(VAR16), VAR5) < 0)
                                    {
                                        FUN3(VAR5, "");
                                        VAR16 = FUN9(VAR16);
                                        FUN10(VAR15, FUN11(VAR15));
                                        if (VAR2->VAR19 && VAR2->VAR9 == (VAR20 *)VAR2->VAR21)
                                        {
                                            VAR20 *VAR22;
                                            if (!VAR7)
                                            {
                                                FUN6(VAR5, "" VAR13, VAR15);
                                                switch (VAR15)
                                                {
                                                case VAR23:
                                                    if (VAR16)
                                                    {
                                                        return FUN12(VAR2, VAR16, VAR15, true, VAR5);
                                                        VAR22 = FUN13(VAR2, VAR5);
                                                        if (!VAR22)
                                                        {
                                                            return -VAR10;
                                                            VAR14 = 0;
                                                            FUN14(FUN15(VAR2->VAR9));
                                                            VAR2->VAR9 = FUN16(VAR22);
                                                            break;
                                                        case VAR24:
                                                            FUN6(VAR5, "", VAR15);
                                                        default:
                                                            if (FUN17(VAR2->VAR9, VAR16, VAR5) < 0)
                                                            {
                                                                return -VAR10;
                                                                VAR14 = FUN18(VAR2->VAR9, VAR25, VAR15, VAR5, "" VAR13 "", VAR15);
                                                                if (VAR15 == VAR26)
                                                                {
                                                                    return 1;
                                                                    break;
                                                                }
                                                                else if (VAR7)
                                                                {
                                                                    switch (VAR15)
                                                                    {
                                                                    case VAR27:
                                                                        if (VAR16)
                                                                        {
                                                                            VAR14 = FUN12(VAR2, VAR16, VAR15, false, VAR5);
                                                                        }
                                                                        else
                                                                        {
                                                                            VAR14 = FUN19(VAR2, VAR5);
                                                                            break;
                                                                        case VAR26:
                                                                            FUN20(VAR2->VAR9, VAR28, VAR15, NULL);
                                                                            return 1;
                                                                        case VAR24:
                                                                            return FUN21(VAR2, VAR16, VAR3, VAR8, VAR5);
                                                                        case VAR29:
                                                                        case VAR30:
                                                                            VAR14 = FUN22(VAR2, VAR16, VAR15, VAR3, VAR5);
                                                                            if (VAR14 == 1)
                                                                            {
                                                                                assert(VAR15 == VAR30);
                                                                                return 0;
                                                                                break;
                                                                            case VAR23:
                                                                                if (VAR16)
                                                                                {
                                                                                    VAR14 = FUN12(VAR2, VAR16, VAR15, false, VAR5);
                                                                                }
                                                                                else if (VAR2->VAR19)
                                                                                {
                                                                                    VAR14 = FUN18(VAR2->VAR9, VAR31, VAR15, VAR5, "");
                                                                                }
                                                                                else
                                                                                {
                                                                                    VAR14 = FUN18(VAR2->VAR9, VAR32, VAR15, VAR5, "");
                                                                                    break;
                                                                                case VAR33:
                                                                                    if (VAR16)
                                                                                    {
                                                                                        VAR14 = FUN12(VAR2, VAR16, VAR15, false, VAR5);
                                                                                    }
                                                                                    else if (VAR2->VAR34)
                                                                                    {
                                                                                        VAR14 = FUN18(VAR2->VAR9, VAR31, VAR15, VAR5, "");
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        VAR14 = FUN20(VAR2->VAR9, VAR28, VAR15, VAR5);
                                                                                        VAR2->VAR34 = true;
                                                                                        VAR3 |= VAR35;
                                                                                        break;
                                                                                    default:
                                                                                        if (FUN17(VAR2->VAR9, VAR16, VAR5) < 0)
                                                                                        {
                                                                                            return -VAR10;
                                                                                            VAR14 = FUN18(VAR2->VAR9, VAR36, VAR15, VAR5, "" VAR13 "", VAR15, FUN11(VAR15));
                                                                                            break;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            switch (VAR15)
                                                                                            {
                                                                                            case VAR24:
                                                                                                return FUN21(VAR2, VAR16, VAR3, VAR8, VAR5);
                                                                                            default:
                                                                                                FUN6(VAR5, "" VAR13 "", VAR15, FUN11(VAR15));
                                                                                                if (VAR14 < 0)
                                                                                                {
                                                                                                    return VAR14