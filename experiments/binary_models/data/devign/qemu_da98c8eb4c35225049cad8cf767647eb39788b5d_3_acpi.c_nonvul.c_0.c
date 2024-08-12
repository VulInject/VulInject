void FUN1(VAR1 *VAR2, uint16_t VAR3)
{
    VAR2->VAR4.VAR5.VAR5 = VAR3 & ~(VAR6);
    if (VAR3 & VAR6)
    {
        uint16_t VAR7 = (VAR3 >> 10) & 7;
        switch (VAR7)
        {
        case 0:
            FUN2();
            break;
        case 1:
            FUN3();
            break;
        default:
            break;
        }
    }
}