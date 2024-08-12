static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    switch (VAR2 & VAR6)
    {
    case VAR7:
        VAR5->VAR8[0] = (VAR5->VAR8[0] & (VAR9 | VAR10)) | (VAR3 & ~(VAR9 | VAR10));
        FUN2("", VAR3);
        break;
    case VAR11:
        VAR5->VAR8[1] = VAR3 & VAR12;
        FUN2("", VAR3);
        break;
    case VAR13:
        VAR5->VAR8[2] = VAR3;
        FUN2("", VAR3);
        break;
    case VAR14:
        VAR5->VAR8[3] = VAR3;
        FUN2("", VAR3);
        break;
    case VAR15:
        VAR5->VAR8[6] = VAR3;
        FUN2("", VAR3);
        break;
    case VAR16:
        VAR5->VAR8[7] = VAR3;
        FUN2("", VAR3);
        break;
    case VAR17:
        VAR5->VAR8[7] = VAR3;
        FUN2("", VAR3);
        break;
    }
}