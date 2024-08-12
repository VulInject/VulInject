static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    VAR6 = (VAR3 >> VAR5->VAR7) & (VAR8 - 1);
    FUN2("", VAR6, VAR5->VAR9[VAR6]);
    switch (VAR6)
    {
    case VAR10:
        if (VAR5->VAR11 > 0)
        {
            VAR5->VAR11--;
            if ((VAR5->VAR9[VAR12] & VAR13) == 0)
            {
                fprintf(VAR14, "");
                VAR5->VAR9[VAR10] = 0;
            }
            else
            {
                VAR5->VAR9[VAR10] = VAR5->VAR15[VAR5->VAR16++];
            }
            FUN3(VAR5);
        }
        if (VAR5->VAR11 == 0)
        {
            VAR5->VAR16 = 0;
            VAR5->VAR17 = 0;
        }
        break;
    case VAR18:
        VAR5->VAR9[VAR12] &= ~(VAR19 | VAR20);
        FUN4(VAR5);
        break;
    default:
        break;
    }
    return VAR5->VAR9[VAR6];
}