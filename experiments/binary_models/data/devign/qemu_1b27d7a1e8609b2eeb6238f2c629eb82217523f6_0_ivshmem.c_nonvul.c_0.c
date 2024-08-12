static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint64_t VAR6 = 1;
    uint16_t VAR7 = VAR3 >> 16;
    uint16_t VAR8 = VAR3 & 0xff;
    VAR2 &= 0xfc;
    FUN2("" VAR9 "", VAR2);
    switch (VAR2)
    {
    case VAR10:
        FUN3(VAR5, VAR3);
        break;
    case VAR11:
        FUN4(VAR5, VAR3);
        break;
    case VAR12:
        if (VAR7 > VAR5->VAR13)
        {
            FUN2("", VAR7);
            break;
        }
        if (VAR8 < VAR5->VAR14[VAR7].VAR15)
        {
            FUN2("" VAR16 "", VAR6, VAR7, VAR8);
            if (write(VAR5->VAR14[VAR7].VAR17[VAR8], &(VAR6), 8) != 8)
            {
                FUN2("");
            }
        }
        break;
    default:
        FUN2("", VAR7);
    }
}