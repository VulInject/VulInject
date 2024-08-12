static VAR1 FUN1(VAR2 *VAR3, unsigned VAR4)
{
    uint32_t VAR5 = 0;
    int VAR6;
    if ((VAR3->VAR7 & VAR8) == 0)
    {
        FUN2("");
        return 0;
    }
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        VAR5 |= VAR3->VAR9[VAR3->VAR10] << VAR6 * 8;
        VAR3->VAR10++;
        if ((VAR3->VAR10) >= (VAR3->VAR11 & 0x0fff))
        {
            FUN3("", VAR3->VAR10);
            VAR3->VAR7 &= ~VAR8;
            VAR3->VAR10 = 0;
            if (VAR3->VAR12 & VAR13)
            {
                VAR3->VAR14--;
            }
            if ((VAR3->VAR12 & VAR15) == 0 || ((VAR3->VAR12 & VAR13) && (VAR3->VAR14 == 0)) || (VAR3->VAR16 == VAR17 && !(VAR3->VAR7 & VAR18)))
            {
                FUN4(VAR3);
            }
            else
            {
                FUN5(VAR3);
            }
            break;
        }
    }
    return VAR5;
}