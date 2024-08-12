static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    int VAR6;
    if ((VAR3 & 1) == 0)
    {
        return 0xff;
    }
    else
    {
        switch (VAR5->VAR7)
        {
        case VAR8:
        case VAR9:
        case VAR10:
        case VAR11:
        case VAR12:
        case VAR13:
        case VAR14:
            VAR6 = VAR5->VAR15[VAR5->VAR7];
            break;
        case VAR16:
            VAR6 = VAR5->VAR15[VAR5->VAR7];
            break;
        case VAR17:
            VAR6 = VAR5->VAR15[VAR5->VAR7];
            FUN2(VAR5->VAR18);
            if (VAR5->VAR19)
            {
                FUN3();
                FUN4(VAR5->VAR18);
                if (FUN5())
                    VAR5->VAR19--;
                break;
            }
            VAR5->VAR15[VAR17] = 0x00;
            break;
        default:
            VAR6 = VAR5->VAR15[VAR5->VAR7];
            break;
        }
        FUN6("", VAR5->VAR7, VAR6);
        return VAR6;
    }
}