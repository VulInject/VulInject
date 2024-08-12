void FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR4->VAR8;
    if (VAR4->VAR9)
    {
        VAR4->FUN2(VAR5);
        while (VAR7->VAR10)
        {
            if (!VAR7->VAR11 || VAR7->FUN3(VAR5, VAR4->VAR12))
            {
                void *VAR13 = FUN4(VAR5, VAR7);
                int VAR14, VAR15 = FUN5(VAR5, VAR7);
                int VAR16 = FUN6(VAR5, VAR7);
                for (VAR14 = 0; VAR14 < VAR15; VAR14++)
                {
                    void *VAR17 = VAR13 + VAR16 * VAR14;
                    if (VAR7->VAR18 & VAR19)
                    {
                        VAR17 = *(void **)VAR17;
                        if (VAR7->VAR18 & VAR20)
                        {
                            FUN1(VAR2, VAR7->VAR4, VAR17);
                            VAR7->VAR21->FUN7(VAR2, VAR17, VAR16);
                            VAR7++;
                            FUN8(VAR2, VAR4, VAR5);