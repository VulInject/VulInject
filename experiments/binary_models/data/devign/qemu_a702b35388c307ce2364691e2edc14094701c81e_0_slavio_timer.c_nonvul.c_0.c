static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6, VAR7;
    VAR6 = (VAR3 & VAR8) >> 2;
    switch (VAR6)
    {
    case 0:
        if (FUN2(VAR5))
        {
            FUN3(VAR5);
            VAR7 = VAR5->VAR9;
        }
        else
        {
            FUN4(VAR5->VAR10);
            VAR5->VAR11 = 0;
            VAR7 = VAR5->VAR12 & 0x7fffffff;
        }
        break;
    case 1:
        FUN3(VAR5);
        if (FUN2(VAR5))
            VAR7 = VAR5->VAR13 & 0xfffffe00;
        else
            VAR7 = (VAR5->VAR13 & 0x7ffffe00) | VAR5->VAR11;
        break;
    case 3:
        VAR7 = VAR5->VAR14;
        break;
    case 4:
        VAR7 = VAR5->VAR15;
        break;
    default:
        FUN5("" VAR16 "", VAR3);
        VAR7 = 0;
        break;
    }
    FUN5("" VAR16 "", VAR3, VAR7);
    return VAR7;
}