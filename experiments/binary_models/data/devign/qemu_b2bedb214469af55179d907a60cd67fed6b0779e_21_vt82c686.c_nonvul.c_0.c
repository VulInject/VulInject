static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR1;
    FUN2("", VAR2, VAR3);
    if (VAR2 == 0x3f0)
    {
        VAR6->VAR7 = VAR3 & 0xff;
    }
    else
    {
        switch (VAR6->VAR7)
        {
        case 0x00 ... 0xdf:
        case 0xe4:
        case 0xe5:
        case 0xe9 ... 0xed:
        case 0xf3:
        case 0xf5:
        case 0xf7:
        case 0xf9 ... 0xfb:
        case 0xfd ... 0xff:
            VAR4 = 0;
            break;
        default:
            VAR4 = 1;
            if (VAR4)
            {
                switch (VAR6->VAR7)
                {
                case 0xe7:
                    if ((VAR3 & 0xff) != 0xfe)
                    {
                        FUN2("");
                    }
                    break;
                case 0xe8:
                    if ((VAR3 & 0xff) != 0xbe)
                    {
                        FUN2("");
                    }
                    break;
                default:
                    VAR6->VAR8[VAR6->VAR7] = VAR3 & 0xff;
                }
            }
        }
        VAR6->VAR8[VAR6->VAR7] = VAR3 & 0xff;
    }
}