static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8;
    unsigned VAR9, VAR10;
    unsigned VAR11;
    uint8_t VAR12[2048];
    VAR4 *VAR13;
    bool VAR14 = true;
    int VAR15;
    VAR8 = FUN2(VAR3);
    VAR15 = FUN3(VAR8, VAR5);
    if (VAR15 == VAR16)
    {
        return -1;
        if (VAR8->VAR17[VAR18] & VAR19)
        {
            unsigned VAR20;
            VAR20 = VAR5[12] << 8 | VAR5[13];
            if (VAR20 < 0x600)
            {
                if (VAR6 < VAR20)
                {
                    return -1;
                    VAR11 = (VAR8->VAR17[VAR18] & VAR21) >> VAR22;
                    VAR9 = ((VAR8->VAR17[VAR23] & VAR24) >> VAR25) * VAR26;
                    if (VAR6 < 60)
                    {
                        VAR6 = 60;
                        if (VAR8->VAR17[VAR18] & VAR27)
                        {
                            VAR13 = (void *)VAR5;
                        }
                        else
                        {
                            unsigned VAR28;
                            memcpy(VAR12, VAR5, VAR6);
                            memset(VAR12 + VAR6, 0, sizeof(VAR12) - VAR6);
                            VAR13 = VAR12;
                            VAR28 = FUN4(FUN5(0, VAR12, FUN6(VAR6, 60)));
                            memcpy(VAR12 + VAR6, &VAR28, sizeof(VAR28));
                            VAR10 += 4;
                            VAR6 += 4;
                            FUN7("", VAR9, VAR6);
                            while (VAR10)
                            {
                                if (!FUN8(VAR3))
                                {
                                    assert(!VAR14);
                                    return -1;
                                    FUN7("", FUN9(VAR10, VAR9), FUN10(VAR8->VAR29));
                                    FUN11(FUN10(VAR8->VAR29) + VAR11, VAR13, FUN9(VAR10, VAR9));
                                    VAR13 += FUN9(VAR10, VAR9);
                                    VAR10 -= FUN9(VAR10, VAR9);
                                    if (VAR14)
                                    {
                                        FUN12(VAR8->VAR29);
                                        VAR14 = false;
                                        if (VAR10 == 0)
                                        {
                                            FUN13(VAR8->VAR29);
                                            FUN14(VAR8->VAR29, VAR6);
                                            FUN15(VAR8->VAR29);
                                            switch (VAR15)
                                            {
                                            case VAR30:
                                                break;
                                            case VAR31:
                                                FUN16(VAR8->VAR29);
                                                break;
                                            case VAR32:
                                                FUN17(VAR8->VAR29);
                                                break;
                                            case VAR33:
                                                FUN18(VAR8->VAR29);
                                                break;
                                            case VAR16:
                                                FUN19();
                                            default:
                                                FUN20(VAR8->VAR29, VAR15);
                                                FUN11(VAR8->VAR34, (VAR4 *)VAR8->VAR29, sizeof(VAR8->VAR29));
                                                if (FUN21(VAR8->VAR29))
                                                {
                                                    FUN7("");
                                                    VAR8->VAR34 = VAR8->VAR17[VAR35];
                                                }
                                                else
                                                {
                                                    FUN7("");
                                                    VAR8->VAR34 += 8;
                                                    FUN22(VAR8);
                                                    FUN23(VAR8, VAR5, VAR6);
                                                    VAR8->VAR17[VAR36] |= VAR37;
                                                    VAR8->VAR17[VAR38] |= VAR39 & ~(VAR8->VAR17[VAR40]);
                                                    FUN24(VAR8);
                                                    return VAR6;