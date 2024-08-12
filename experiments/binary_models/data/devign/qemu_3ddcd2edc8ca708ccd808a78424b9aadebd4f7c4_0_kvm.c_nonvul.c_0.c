static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    if (VAR4->VAR7 && FUN3(VAR2->VAR8, VAR9) <= 0)
    {
        VAR4->VAR7 = false;
    }
    if (VAR4->VAR10)
    {
        VAR6->VAR11[VAR12] |= VAR13;
    }
    if (VAR4->VAR14)
    {
        VAR6->VAR11[VAR12] |= VAR13;
        VAR6->VAR11[VAR12] |= VAR15;
    }
    if (VAR4->VAR7)
    {
        VAR6->VAR11[VAR12] |= VAR13;
        VAR6->VAR11[VAR12] |= VAR16;
        VAR6->VAR11[VAR12] |= 0x200;
    }
    if (VAR4->VAR17 && VAR18)
    {
        VAR6->VAR11[VAR19] |= VAR20;
    }
    VAR6->VAR11[VAR19] |= VAR21;
    if (VAR4->VAR22 && VAR23)
    {
        VAR6->VAR11[VAR12] |= VAR24;
    }
    if (VAR4->VAR25 && VAR26)
    {
        VAR6->VAR11[VAR12] |= VAR27;
    }
    if (VAR4->VAR28 && VAR29)
    {
        VAR6->VAR11[VAR12] |= VAR30;
    }
    if (VAR4->VAR31)
    {
        int VAR32;
        if (!VAR33 || FUN4(VAR2, VAR34, 0))
        {
            fprintf(VAR35, "");
            return -VAR36;
        }
        VAR6->VAR11[VAR12] |= VAR37;
        VAR6->VAR38 = VAR39;
        for (VAR32 = 0; VAR32 < FUN5(VAR6->VAR40); VAR32++)
        {
            VAR6->VAR40[VAR32] = VAR41;
        }
    }
    if (VAR4->VAR42)
    {
        if (!VAR43)
        {
            fprintf(VAR35, "");
            return -VAR36;
        }
        VAR6->VAR11[VAR12] |= VAR44;
    }
    return 0;
}