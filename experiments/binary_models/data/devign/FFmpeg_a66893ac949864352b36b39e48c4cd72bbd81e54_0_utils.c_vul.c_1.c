VAR1 *FUN1(VAR2 *VAR3, const VAR4 *VAR5)
{
    VAR1 *VAR6;
    int VAR7;
    VAR1 **VAR8;
    if (VAR3->VAR9 >= VAR10 / sizeof(*VAR8))
        VAR8 = FUN2(VAR3->VAR8, VAR3->VAR9 + 1, sizeof(*VAR8));
    if (!VAR8)
        VAR3->VAR8 = VAR8;
    VAR6 = FUN3(sizeof(VAR1));
    if (!VAR6)
        if (!(VAR6->VAR11 = FUN3(sizeof(*VAR6->VAR11))))
        {
            VAR6->VAR11->VAR12 = VAR13;
            VAR6->VAR14 = FUN4(VAR5);
            if (VAR3->VAR15)
            {
                VAR6->VAR14->VAR16 = 0;
                FUN5(VAR6, 33, 1, 90000);
                VAR6->VAR17 = VAR3->VAR9;
                VAR6->VAR18 = VAR13;
                VAR6->VAR19 = VAR13;
                VAR6->VAR20 = VAR3->VAR15 ? VAR21 : 0;
                VAR6->VAR22 = VAR13;
                VAR6->VAR23 = VAR24;
                VAR6->VAR25 = VAR13;
                VAR6->VAR26 = VAR27;
                VAR6->VAR28 = VAR13;
                VAR6->VAR29 = VAR13;
                for (VAR7 = 0; VAR7 < VAR30 + 1; VAR7++)
                    VAR6->VAR31[VAR7] = VAR13;
                VAR6->VAR32 = (VAR33){0, 1};
                VAR6->VAR11->VAR12 = VAR13;
                VAR6->VAR11->VAR34 = VAR13;
                VAR6->VAR11->VAR35 = VAR13;
                VAR6->VAR36 = VAR3->VAR37->VAR36;
                VAR3->VAR8[VAR3->VAR9++] = VAR6;
                return VAR6;