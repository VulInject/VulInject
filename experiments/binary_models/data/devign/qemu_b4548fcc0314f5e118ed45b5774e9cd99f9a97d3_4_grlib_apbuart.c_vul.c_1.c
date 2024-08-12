FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    unsigned char VAR6 = 0;
    VAR2 &= 0xff;
    switch (VAR2)
    {
    case VAR7:
        VAR6 = VAR3 & 0xFF;
        FUN2(VAR5->VAR8, &VAR6, 1);
        return;
    case VAR9:
        return;
    case VAR10:
        return;
    case VAR11:
        return;
    default:
        break;
    }
    FUN3("", VAR2);
}