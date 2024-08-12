static void FUN1(VAR1 *VAR2)
{
    hwaddr VAR3, VAR4, VAR5;
    if (VAR2->VAR6 == NULL)
    {
        return;
    }
    if (VAR2->VAR7)
    {
        FUN2(VAR2->VAR6, &VAR2->VAR8);
        FUN3(FUN4(&VAR2->VAR8));
        VAR2->VAR7 = false;
        VAR2->VAR9 = 0xf;
    }
    if ((VAR2->VAR10[VAR11] & VAR12) == VAR12 && VAR2->VAR10[VAR13] & VAR14)
    {
        VAR4 = 0;
        switch ((VAR2->VAR15[VAR16] >> 2) & 3)
        {
        case 0:
            VAR3 = 0xa0000;
            VAR5 = 0x20000;
            break;
        case 1:
            VAR3 = 0xa0000;
            VAR5 = 0x10000;
            VAR4 = VAR2->VAR17;
            break;
        case 2:
            VAR3 = 0xb0000;
            VAR5 = 0x8000;
            break;
        case 3:
        default:
            VAR3 = 0xb8000;
            VAR5 = 0x8000;
            break;
        }
        assert(VAR4 + VAR5 <= VAR2->VAR18);
        FUN5(&VAR2->VAR8, FUN6(&VAR2->VAR19), "", &VAR2->VAR19, VAR4, VAR5);
        FUN7(VAR2->VAR6, VAR3, &VAR2->VAR8, 2);
        VAR2->VAR7 = true;
    }
}