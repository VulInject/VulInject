static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint32_t VAR7 = VAR3;
    int VAR8;
    VAR2 -= VAR6->VAR9;
    switch (VAR2)
    {
    case VAR10:
        VAR6->VAR11 = VAR7 & 0xfff7;
        if ((VAR7 & (1 << 3)) && (VAR7 & (1 << 6)))
        {
            if (VAR7 & (1 << 0))
            {
                if (VAR6->VAR12 & 1)
                    VAR6->VAR13 |= 1 << 0;
                else
                    VAR6->VAR13 &= ~(1 << 0);
                VAR8 = !FUN2(VAR6->VAR14, VAR6->VAR12 >> 1, VAR6->VAR12 & 1);
            }
            else
            {
                if (VAR6->VAR13 & (1 << 0))
                {
                    VAR6->VAR12 = FUN3(VAR6->VAR14);
                    if (VAR7 & (1 << 2))
                        FUN4(VAR6->VAR14);
                    VAR8 = 1;
                }
                else
                    VAR8 = !FUN5(VAR6->VAR14, VAR6->VAR12);
            }
            if (VAR7 & (1 << 1))
                FUN6(VAR6->VAR14);
            if (VAR8)
            {
                if (VAR7 & (1 << 0))
                    VAR6->VAR13 |= 1 << 6;
                else if (VAR6->VAR13 & (1 << 0))
                    VAR6->VAR13 |= 1 << 7;
                else
                    VAR6->VAR13 |= 1 << 6;
                VAR6->VAR13 &= ~(1 << 1);
            }
            else
            {
                VAR6->VAR13 |= 1 << 6;
                VAR6->VAR13 |= 1 << 10;
                VAR6->VAR13 |= 1 << 1;
            }
        }
        if (!(VAR7 & (1 << 3)) && (VAR7 & (1 << 6)))
            if (VAR7 & (1 << 4))
                FUN6(VAR6->VAR14);
        FUN7(VAR6);
        break;
    case VAR15:
        VAR6->VAR13 &= ~(VAR7 & 0x07f0);
        FUN7(VAR6);
        break;
    case VAR16:
        FUN8(FUN9(VAR6->VAR17), VAR7 & 0x7f);
        break;
    case VAR18:
        VAR6->VAR12 = VAR7 & 0xff;
        break;
    default:
        FUN10("" VAR19 "", VAR20, VAR2);
    }
}