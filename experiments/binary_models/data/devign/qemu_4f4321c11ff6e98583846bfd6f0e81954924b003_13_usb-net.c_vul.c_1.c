static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 8;
    if (VAR4->VAR6 < 8)
        return VAR7;
    ((VAR8 *)VAR4->VAR9)[0] = FUN2(1);
    ((VAR8 *)VAR4->VAR9)[1] = FUN2(0);
    if (!VAR2->VAR10.VAR11)
        VAR5 = VAR12;
    fprintf(VAR13, "", VAR4->VAR6, VAR5);
    {
        int VAR14;
        fprintf(VAR13, "");
        for (VAR14 = 0; VAR14 < VAR5; VAR14++)
        {
            if (!(VAR14 & 15))
                fprintf(VAR13, "", VAR14);
            fprintf(VAR13, "", VAR4->VAR9[VAR14]);
        }
        fprintf(VAR13, "");
    }
    return VAR5;
}