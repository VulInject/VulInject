FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5, struct VAR6 *VAR7)
{
    uint16_t VAR8;
    int VAR9, VAR10;
    FUN2("");
    FUN3((VAR11, "", (long)VAR2, VAR5));
    for (; VAR5 > 0; VAR5 -= VAR10, VAR4 += VAR10)
    {
        VAR9 = VAR4[0];
        if (VAR9 == VAR12)
            break;
        if (VAR9 == VAR13)
            VAR10 = 1;
        else
        {
            VAR10 = VAR4[1];
            if (VAR10 <= 0)
                break;
        }
        switch (VAR9)
        {
        default:
            continue;
        case VAR14:
            if (VAR10 != VAR15)
                continue;
            if (!(VAR7->VAR16 & VAR17))
                continue;
            memcpy((char *)&VAR8, (char *)VAR4 + 2, sizeof(VAR8));
            FUN4(VAR8);
            (void)FUN5(VAR2, VAR8);
            break;
        }
    }
}