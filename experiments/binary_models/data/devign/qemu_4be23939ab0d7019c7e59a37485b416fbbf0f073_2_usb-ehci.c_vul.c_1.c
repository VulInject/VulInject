static int FUN1(VAR1 *VAR2, int VAR3)
{
    EHCIqh VAR4;
    int VAR5 = 0;
    int VAR6 = 0;
    uint32_t VAR7 = VAR2->VAR8;
    if (VAR3)
    {
        FUN2(VAR2, VAR9);
    }
    FUN3(VAR2, VAR3);
    for (VAR5 = 0; VAR5 < VAR10; VAR5++)
    {
        FUN4(VAR2, FUN5(VAR7), (VAR11 *)&VAR4, sizeof(VAR12) >> 2);
        FUN6(NULL, FUN5(VAR7), &VAR4);
        if (VAR4.VAR13 & VAR14)
        {
            if (VAR3)
            {
                VAR7 |= (VAR15 << 1);
            }
            FUN7(VAR2, VAR3, VAR7);
            FUN8(VAR2, VAR3, VAR16);
            VAR6 = 1;
            goto VAR17;
        }
        VAR7 = VAR4.VAR18;
        if (VAR7 == VAR2->VAR8)
        {
            break;
        }
    }
    FUN8(VAR2, VAR3, VAR19);
VAR17:
    return VAR6;
}