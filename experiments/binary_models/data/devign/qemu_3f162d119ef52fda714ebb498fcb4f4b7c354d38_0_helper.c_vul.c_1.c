static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_phys_addr_t VAR10;
    int VAR11, VAR12, VAR13;
    VAR13 = -1;
    VAR10 = (VAR14)-1ULL;
    for (VAR11 = 0; VAR11 < VAR15; VAR11++)
    {
        int VAR16 = FUN2(VAR2, VAR11);
        for (VAR12 = 0; VAR12 < VAR16; VAR12++)
        {
            VAR9 = FUN3(VAR2, VAR11, VAR5, VAR12);
            VAR13 = FUN4(VAR2, VAR9, &VAR10, &VAR4->VAR17, VAR5, VAR6, VAR7);
            if (VAR13 != -1)
            {
                goto VAR18;
            VAR18:
                if (VAR13 >= 0)
                {
                    VAR4->VAR10 = VAR10;
                    FUN5("" VAR19 "" VAR20 "", VAR21, VAR5, VAR4->VAR10, VAR4->VAR17, VAR13);
                }
                else
                {
                    FUN5("" VAR19 "" VAR20 "", VAR21, VAR5, VAR10, VAR4->VAR17, VAR13);
                    return VAR13;