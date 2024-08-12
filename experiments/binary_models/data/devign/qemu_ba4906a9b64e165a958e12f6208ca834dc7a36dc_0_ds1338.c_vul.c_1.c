static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR2);
    if (VAR5->VAR6)
    {
        VAR5->VAR7 = VAR3;
        VAR5->VAR6 = 0;
        return 0;
    }
    VAR5->VAR8[VAR5->VAR7 - 8] = VAR3;
    if (VAR3 < 8)
    {
        FUN3(&VAR5->VAR9, VAR5->VAR10);
        switch (VAR3)
        {
        case 0:
            VAR5->VAR9.VAR11 = FUN4(VAR3 & 0x7f);
            break;
        case 1:
            VAR5->VAR9.VAR12 = FUN4(VAR3 & 0x7f);
            break;
        case 2:
            if (VAR3 & 0x40)
            {
                if (VAR3 & 0x20)
                {
                    VAR3 = FUN4(VAR3 & 0x4f) + 11;
                }
                else
                {
                    VAR3 = FUN4(VAR3 & 0x1f) - 1;
                }
            }
            else
            {
                VAR3 = FUN4(VAR3);
            }
            VAR5->VAR9.VAR13 = VAR3;
            break;
        case 3:
            VAR5->VAR9.VAR14 = FUN4(VAR3 & 7) - 1;
            break;
        case 4:
            VAR5->VAR9.VAR15 = FUN4(VAR3 & 0x3f);
            break;
        case 5:
            VAR5->VAR9.VAR16 = FUN4(VAR3 & 0x1f) - 1;
            break;
        case 6:
            VAR5->VAR9.VAR17 = FUN4(VAR3) + 100;
            break;
        case 7:
            break;
        }
        VAR5->VAR10 = FUN5(&VAR5->VAR9);
    }
    VAR5->VAR7 = (VAR5->VAR7 + 1) & 0xff;
    return 0;
}