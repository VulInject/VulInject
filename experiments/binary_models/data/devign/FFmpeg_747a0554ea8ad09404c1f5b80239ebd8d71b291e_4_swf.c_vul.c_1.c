static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13;
    if ((FUN2(VAR6) & 0xffffff00) != FUN3('', '', '', 0))
        return -VAR14;
    FUN4(VAR6);
    VAR7 = FUN5(VAR6) >> 3;
    VAR8 = (4 * VAR7 - 3 + 7) / 8;
    FUN6(VAR6, VAR8);
    VAR9 = FUN7(VAR6);
    FUN7(VAR6);
    for (;;)
    {
        VAR10 = FUN8(VAR6, &VAR8);
        if (VAR10 < 0)
        {
            fprintf(VAR15, "");
            return -VAR14;
        }
        if (VAR10 == VAR16)
        {
            FUN5(VAR6);
            VAR11 = FUN5(VAR6);
            FUN7(VAR6);
            if (VAR8 != 4)
                FUN6(VAR6, VAR8 - 4);
            if ((VAR11 & 0x20) != 0)
            {
                VAR13 = FUN9(VAR2, 0);
                if (!VAR13)
                    return -VAR17;
                if (VAR11 & 0x01)
                    VAR13->VAR18.VAR19 = 2;
                else
                    VAR13->VAR18.VAR19 = 1;
                switch ((VAR11 >> 2) & 0x03)
                {
                case 1:
                    VAR13->VAR18.VAR20 = 11025;
                    break;
                case 2:
                    VAR13->VAR18.VAR20 = 22050;
                    break;
                case 3:
                    VAR13->VAR18.VAR20 = 44100;
                    break;
                default:
                    FUN10(VAR13);
                    return -VAR14;
                }
                VAR13->VAR18.VAR21 = VAR22;
                VAR13->VAR18.VAR23 = VAR24;
                break;
            }
        }
        else
        {
            FUN6(VAR6, VAR8);
        }
    }
    return 0;
}