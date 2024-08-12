static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3, VAR4;
    int64_t VAR5 = VAR2->VAR6 + ((VAR2->VAR7 == VAR8) ? 0 : VAR2->VAR7);
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
        if (VAR2->VAR10[VAR3]->VAR11 == VAR8)
        {
            VAR12 *VAR13 = VAR2->VAR10[VAR3];
            int64_t VAR11 = VAR5 ? FUN2(VAR5, VAR14, VAR13->VAR15) : VAR16;
            for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++)
            {
                VAR12 *VAR17 = VAR2->VAR10[VAR4];
                int64_t VAR18 = FUN2(VAR17->VAR19, VAR17->VAR15, VAR13->VAR15);
                if (VAR4 != VAR3 && VAR18 > VAR13->VAR19 && VAR18 < VAR11)
                    VAR11 = VAR18;
            }
            VAR13->VAR11 = (VAR11 == VAR16) ? VAR13->VAR19 : VAR11;
        }
}