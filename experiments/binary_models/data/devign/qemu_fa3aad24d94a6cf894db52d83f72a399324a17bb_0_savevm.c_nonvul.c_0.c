int FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    if (VAR6 > VAR4->VAR6)
    {
        return -VAR10;
    }
    if (VAR6 < VAR4->VAR11)
    {
        return -VAR10;
    }
    if (VAR6 < VAR4->VAR12)
    {
        return VAR4->FUN2(VAR2, VAR5, VAR6);
    }
    while (VAR8->VAR13)
    {
        if (VAR8->VAR6 <= VAR6)
        {
            void *VAR14 = VAR5 + VAR8->VAR15;
            int VAR16, VAR17, VAR18 = 1;
            if (VAR8->VAR19 & VAR20)
            {
                VAR18 = VAR8->VAR21;
            }
            else if (VAR8->VAR19 & VAR22)
            {
                VAR18 = *(VAR23 *)(VAR5 + VAR8->VAR24);
            }
            if (VAR8->VAR19 & VAR25)
            {
                VAR14 = *(void **)VAR14;
            }
            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
            {
                void *VAR26 = VAR14 + VAR8->VAR27 * VAR17;
                if (VAR8->VAR19 & VAR28)
                {
                    VAR16 = FUN1(VAR2, VAR8->VAR4, VAR26, VAR8->VAR4->VAR6);
                }
                else
                {
                    VAR16 = VAR8->VAR29->FUN3(VAR2, VAR26, VAR8->VAR27);
                }
                if (VAR16 < 0)
                {
                    return VAR16;
                }
            }
        }
        VAR8++;
    }
    if (VAR4->VAR30)
        return VAR4->FUN4(VAR5);
    return 0;
}