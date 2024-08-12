static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4 = 0;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < 5 && (!VAR6->VAR11 || !VAR6->VAR12); VAR10++)
    {
        unsigned int VAR13 = FUN2(VAR9);
        VAR3 = FUN3(VAR9);
        VAR4 = FUN3(VAR9);
        switch (VAR3)
        {
        case VAR14:
            VAR3 = FUN3(VAR9);
            if (VAR3 == VAR15)
            {
                FUN4(VAR9, 4);
            }
            else if (VAR3 != VAR16)
            {
                FUN5(VAR2, VAR17, "");
                return 0;
            }
            FUN6(VAR2);
            break;
        case VAR18:
            FUN7(VAR2);
            break;
        }
        FUN8(VAR9, VAR13 + VAR4, VAR19);
    }
    FUN8(VAR9, 0, VAR19);
    return 1;
}