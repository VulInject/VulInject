static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    uint8_t VAR6;
    if (VAR2->VAR7)
    {
        if (VAR3 == '')
        {
            FUN2("");
            FUN3(VAR2, (VAR8 *)VAR2->VAR9, VAR2->VAR7);
        }
        else if (VAR3 == '')
            FUN2("");
        else
            FUN2("", VAR3);
        if (VAR3 == '' || VAR3 == '')
            VAR2->VAR7 = 0;
        if (VAR3 != '')
            return;
    }
    if (VAR10)
    {
        FUN4(VAR11);
    }
    else
    {
        switch (VAR2->VAR12)
        {
        case VAR13:
            if (VAR3 == '')
            {
                VAR2->VAR14 = 0;
                VAR2->VAR12 = VAR15;
            }
            break;
        case VAR15:
            if (VAR3 == '')
            {
                VAR2->VAR12 = VAR16;
            }
            else if (VAR2->VAR14 >= sizeof(VAR2->VAR17) - 1)
            {
                VAR2->VAR12 = VAR13;
            }
            else
            {
                VAR2->VAR17[VAR2->VAR14++] = VAR3;
            }
            break;
        case VAR16:
            VAR2->VAR17[VAR2->VAR14] = '';
            VAR2->VAR18 = FUN5(VAR3) << 4;
            VAR2->VAR12 = VAR19;
            break;
        case VAR19:
            VAR2->VAR18 |= FUN5(VAR3);
            VAR5 = 0;
            for (VAR4 = 0; VAR4 < VAR2->VAR14; VAR4++)
            {
                VAR5 += VAR2->VAR17[VAR4];
            }
            if (VAR2->VAR18 != (VAR5 & 0xff))
            {
                VAR6 = '';
                FUN3(VAR2, &VAR6, 1);
                VAR2->VAR12 = VAR13;
            }
            else
            {
                VAR6 = '';
                FUN3(VAR2, &VAR6, 1);
                VAR2->VAR12 = FUN6(VAR2, VAR2->VAR17);
            }
            break;
        default:
            FUN7();
        }
    }
}