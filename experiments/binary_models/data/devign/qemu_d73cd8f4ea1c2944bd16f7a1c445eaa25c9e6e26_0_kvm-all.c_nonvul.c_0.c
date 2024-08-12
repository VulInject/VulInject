static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    fprintf(VAR5, "");
    if (FUN2(VAR6, VAR7))
    {
        int VAR8;
        fprintf(VAR5, "", VAR4->VAR9.VAR10);
        for (VAR8 = 0; VAR8 < VAR4->VAR9.VAR11; ++VAR8)
        {
            fprintf(VAR5, "" VAR12 "", VAR8, (VAR13)VAR4->VAR9.VAR14[VAR8]);
        }
    }
    else
    {
        fprintf(VAR5, "");
    }
    if (VAR4->VAR9.VAR10 == VAR15)
    {
        fprintf(VAR5, "");
        if (!FUN3(VAR2))
        {
            FUN4(VAR2, VAR5, fprintf, VAR16);
            return VAR17;
        }
    }
    return -1;
}