static void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    while (FUN2(VAR2->VAR4) < VAR3)
    {
        uint32_t VAR5 = FUN3(VAR2->VAR4);
        uint32_t VAR6 = FUN3(VAR2->VAR4);
        switch (VAR5)
        {
        case FUN4('', '', '', ''):
        {
            uint64_t VAR7 = FUN2(VAR2->VAR4) + VAR6;
            while (FUN2(VAR2->VAR4) < VAR7)
            {
                uint16_t VAR5 = FUN5(VAR2->VAR4);
                uint16_t VAR6 = FUN5(VAR2->VAR4);
                const char *VAR8 = NULL;
                char VAR9[64] = {0};
                if (FUN2(VAR2->VAR4) + VAR6 > VAR7)
                    VAR6 = VAR7 - FUN2(VAR2->VAR4);
                VAR6 -= FUN6(VAR2->VAR4, VAR9, FUN7(VAR6, sizeof(VAR9) - 1));
                switch (VAR5)
                {
                case 0x03:
                    VAR8 = "";
                    break;
                case 0x04:
                    VAR8 = "";
                    break;
                case 0x13:
                    VAR8 = "";
                    if (VAR9[4] == '' && VAR9[7] == '')
                        VAR9[4] = VAR9[7] = '';
                    break;
                }
                if (VAR8)
                    FUN8(&VAR2->VAR10, VAR8, VAR9, 0);
                FUN9(VAR2->VAR4, VAR6);
            }
            break;
        }
        default:
            FUN9(VAR2->VAR4, VAR6);
            break;
        }
    }
}