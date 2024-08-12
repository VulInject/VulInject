void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4)
{
    int VAR5;
    uint32_t VAR6;
    VAR6 = VAR3->VAR7.VAR8[VAR9];
    VAR3->VAR7.VAR8[VAR9] = (VAR4 & 0xffc8ffff);
    VAR3->VAR7.VAR10 = (VAR4 >> 16) & 7;
    VAR3->VAR7.VAR11 = (VAR4 >> 20) & 3;
    VAR6 ^= VAR4;
    if (VAR6 & (3 << 22))
    {
        VAR5 = (VAR4 >> 22) & 3;
        switch (VAR5)
        {
        case 0:
            VAR5 = VAR12;
            break;
        case 1:
            VAR5 = VAR13;
            break;
        case 2:
            VAR5 = VAR14;
            break;
        case 3:
            VAR5 = VAR15;
            break;
        }
        FUN2(VAR5, &VAR3->VAR7.VAR16);
    }
    if (VAR6 & (1 << 24))
        FUN3((VAR4 & (1 << 24)) != 0, &VAR3->VAR7.VAR16);
    if (VAR6 & (1 << 25))
        FUN4((VAR4 & (1 << 25)) != 0, &VAR3->VAR7.VAR16);
    VAR5 = FUN5(VAR4);
    FUN6(VAR5, &VAR3->VAR7.VAR16);
}