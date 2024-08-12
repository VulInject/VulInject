static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    int VAR6 = (1 << VAR3->VAR7->VAR8) - 1;
    for (VAR5 = 0; VAR5 < FUN2(VAR3->VAR9); VAR5++)
    {
        VAR1 *VAR10 = &VAR3->VAR9[VAR5];
        if (VAR10->VAR11->VAR12[0] && (VAR10->VAR13 == VAR3->VAR14))
        {
            if ((VAR10->VAR4 & VAR6) == VAR4)
                return VAR10;
        }
    }
    for (VAR5 = 0; VAR5 < FUN2(VAR3->VAR9); VAR5++)
    {
        VAR1 *VAR10 = &VAR3->VAR9[VAR5];
        if (VAR10->VAR11->VAR12[0] && VAR10->VAR13 == VAR3->VAR14)
        {
            if (VAR10->VAR4 == VAR4 || (VAR10->VAR4 & VAR6) == VAR4)
                return VAR10;
        }
    }
    if (VAR3->VAR15 != VAR16 && !FUN3(VAR3))
        FUN4(VAR3->VAR17, VAR18, "", VAR4);
    return NULL;
}