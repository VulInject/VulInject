static int FUN1(VAR1 *VAR2, const char *VAR3, void **VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR4;
    VAR7 *VAR8 = FUN2(VAR6, VAR7, VAR9);
    VAR10 **VAR11 = VAR6->VAR11;
    VAR10 *VAR9[VAR12];
    int VAR13, VAR14 = 0;
    int VAR15;
    VAR13 = FUN3(VAR3, VAR9, VAR16, VAR12);
    if (VAR13 == 0)
    {
        VAR15 = -VAR17;
        if (VAR13 > VAR12)
        {
            VAR15 = -VAR18;
            for (VAR14 = 0; VAR14 < VAR13; VAR14++)
            {
                if (VAR9[VAR14] == NULL)
                {
                    VAR15 = -VAR17;
                    if (VAR9[VAR14]->VAR19)
                    {
                        VAR15 = -VAR20;
                        VAR11[VAR14] = VAR9[VAR14];
                        VAR11[VAR14]->VAR21 = VAR14;
                        VAR8->VAR13 = VAR13;
                        return 0;
                    VAR22:
                        return VAR15