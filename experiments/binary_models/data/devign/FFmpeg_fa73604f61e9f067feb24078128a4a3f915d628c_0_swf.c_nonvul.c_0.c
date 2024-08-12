static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = 0;
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    offset_t VAR14;
    VAR15 *VAR16 = 0;
    VAR15 *VAR17 = 0;
    VAR6 = FUN2(sizeof(VAR5));
    if (!VAR6)
        return -1;
    VAR2->VAR18 = VAR6;
    VAR12 = FUN3(VAR8) & 0xffffff00;
    if (VAR12 == FUN4('', '', '', 0))
    {
        FUN5(VAR2, VAR19, "");
        return VAR20;
    }
    if (VAR12 != FUN4('', '', '', 0))
        return VAR20;
    FUN6(VAR8);
    VAR9 = FUN7(VAR8) >> 3;
    VAR10 = (4 * VAR9 - 3 + 7) / 8;
    FUN8(VAR8, VAR10);
    VAR11 = FUN9(VAR8);
    FUN9(VAR8);
    VAR6->VAR21 = (1000 * 256) / VAR11;
    VAR6->VAR22 = 0;
    VAR6->VAR23 = -1;
    VAR14 = FUN10(VAR8);
    for (;;)
    {
        VAR12 = FUN11(VAR8, &VAR10);
        if (VAR12 < 0)
        {
            if (VAR16 || VAR17)
            {
                if (VAR17 && VAR16)
                {
                    VAR17->VAR24->VAR25.VAR26 = VAR16->VAR24->VAR27 / VAR6->VAR22;
                    VAR17->VAR24->VAR25.VAR28 = 1;
                }
                break;
            }
            FUN5(VAR2, VAR19, "");
            return VAR20;
        }
        if (VAR12 == VAR29 && !VAR17)
        {
            int VAR30;
            VAR6->VAR23 = FUN9(VAR8);
            FUN9(VAR8);
            FUN9(VAR8);
            FUN9(VAR8);
            FUN7(VAR8);
            VAR30 = FUN12(VAR31, FUN7(VAR8));
            if (VAR30)
            {
                VAR17 = FUN13(VAR2, 0);
                FUN14(VAR17, 24, 1, 1000);
                VAR17->VAR24->VAR32 = VAR33;
                VAR17->VAR24->VAR30 = VAR30;
                if (VAR6->VAR22)
                {
                    VAR17->VAR24->VAR25.VAR26 = 1000. / VAR6->VAR21;
                    VAR17->VAR24->VAR25.VAR28 = 1;
                }
            }
        }
        else if ((VAR12 == VAR34 || VAR12 == VAR35) && !VAR16)
        {
            FUN7(VAR8);
            VAR13 = FUN7(VAR8);
            VAR6->VAR22 = FUN9(VAR8);
            if (VAR10 != 4)
                FUN8(VAR8, VAR10 - 4);
            if ((VAR13 & 0x20) != 0)
            {
                if (VAR12 == VAR35)
                {
                    FUN9(VAR8);
                }
                VAR16 = FUN13(VAR2, 1);
                if (!VAR16)
                    return -VAR36;
                FUN14(VAR16, 24, 1, 1000);
                if (VAR13 & 0x01)
                    VAR16->VAR24->VAR37 = 2;
                else
                    VAR16->VAR24->VAR37 = 1;
                switch ((VAR13 >> 2) & 0x03)
                {
                case 1:
                    VAR16->VAR24->VAR27 = 11025;
                    break;
                case 2:
                    VAR16->VAR24->VAR27 = 22050;
                    break;
                case 3:
                    VAR16->VAR24->VAR27 = 44100;
                    break;
                default:
                    FUN15(VAR16);
                    return VAR20;
                }
                VAR16->VAR24->VAR32 = VAR38;
                VAR16->VAR24->VAR30 = VAR39;
            }
        }
        else
        {
            FUN8(VAR8, VAR10);
        }
    }
    FUN16(VAR8, VAR14, VAR40);
    return 0;
}