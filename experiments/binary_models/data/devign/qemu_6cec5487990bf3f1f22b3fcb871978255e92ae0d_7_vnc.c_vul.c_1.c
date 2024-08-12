static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    uint8_t VAR6, VAR7, VAR8;
    VAR6 = ((VAR5 >> VAR2->VAR9) & VAR2->VAR10) * (VAR2->VAR11 + 1) / (VAR2->VAR10 + 1);
    VAR7 = ((VAR5 >> VAR2->VAR12) & VAR2->VAR13) * (VAR2->VAR14 + 1) / (VAR2->VAR13 + 1);
    VAR8 = ((VAR5 >> VAR2->VAR15) & VAR2->VAR16) * (VAR2->VAR17 + 1) / (VAR2->VAR16 + 1);
    VAR5 = (VAR6 << VAR2->VAR18) | (VAR7 << VAR2->VAR19) | (VAR8 << VAR2->VAR20);
    switch (VAR2->VAR21)
    {
    case 1:
        VAR4[0] = VAR5;
        break;
    case 2:
        if (VAR2->VAR22)
        {
            VAR4[0] = VAR5 >> 8;
            VAR4[1] = VAR5;
        }
        else
        {
            VAR4[1] = VAR5 >> 8;
            VAR4[0] = VAR5;
        }
        break;
    default:
    case 4:
        if (VAR2->VAR22)
        {
            VAR4[0] = VAR5 >> 24;
            VAR4[1] = VAR5 >> 16;
            VAR4[2] = VAR5 >> 8;
            VAR4[3] = VAR5;
        }
        else
        {
            VAR4[3] = VAR5 >> 24;
            VAR4[2] = VAR5 >> 16;
            VAR4[1] = VAR5 >> 8;
            VAR4[0] = VAR5;
        }
        break;
    }
}