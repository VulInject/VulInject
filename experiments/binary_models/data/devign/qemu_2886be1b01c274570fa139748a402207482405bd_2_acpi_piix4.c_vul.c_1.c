static void FUN1(VAR1 *VAR2, uint64_t VAR3, unsigned VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR7, VAR2);
    uint32_t VAR9;
    switch (VAR3)
    {
    case 0x00:
        VAR9 = FUN3(&VAR8->VAR10, VAR8->VAR10.VAR11.VAR12);
        break;
    case 0x02:
        VAR9 = VAR8->VAR10.VAR13.VAR14.VAR15;
        break;
    case 0x04:
        VAR9 = VAR8->VAR10.VAR13.VAR16.VAR16;
        break;
    case 0x08:
        VAR9 = FUN4(&VAR8->VAR10);
        break;
    default:
        VAR9 = 0;
        break;
    }
    FUN5("", (unsigned int)VAR3, VAR9);
    *VAR6 = VAR9;
}