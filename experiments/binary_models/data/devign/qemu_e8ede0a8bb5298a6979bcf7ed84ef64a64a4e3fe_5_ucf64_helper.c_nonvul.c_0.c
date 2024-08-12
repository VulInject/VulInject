void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4)
{
    int VAR5;
    uint32_t VAR6;
    VAR6 = VAR3->VAR7.VAR8[VAR9];
    VAR3->VAR7.VAR8[VAR9] = (VAR4 & VAR10);
    VAR6 ^= VAR4;
    if (VAR6 & (VAR11))
    {
        VAR5 = FUN2(VAR4);
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
        default:
            FUN3(VAR3, "");
        }
        FUN4(VAR5, &VAR3->VAR7.VAR16);
    }
    VAR5 = FUN5(FUN6(VAR4));
    FUN7(VAR5, &VAR3->VAR7.VAR16);
}