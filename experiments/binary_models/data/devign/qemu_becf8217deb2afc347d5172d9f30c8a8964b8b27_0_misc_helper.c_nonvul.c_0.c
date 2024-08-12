void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6)
{
    uint64_t VAR7;
    switch (VAR6)
    {
    case 0x500:
        FUN2();
        VAR7 = FUN3(VAR3);
        FUN4();
        break;
    case 0x44:
        VAR7 = 0;
        break;
    case 0x308:
        FUN5(VAR3, VAR4, VAR5);
        VAR7 = 0;
        break;
    default:
        VAR7 = -1;
        break;
    }
    if (VAR7)
    {
        FUN6(VAR3, VAR8, VAR9);
    }
}