static int FUN1(VAR1 **VAR2)
{
    int VAR3, VAR4 = 0;
    for (VAR3 = 0; VAR3 < 2 && !VAR4; VAR3++)
    {
        int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
        if (sscanf(*VAR2, "", &VAR5, &VAR6, &VAR7, &VAR8, &VAR9, &VAR10, &VAR11, &VAR12) == 8)
        {
            VAR6 += 60 * VAR5;
            VAR10 += 60 * VAR9;
            VAR7 += 60 * VAR6;
            VAR11 += 60 * VAR10;
            VAR8 += 1000 * VAR7;
            VAR12 += 1000 * VAR11;
            VAR4 = VAR12 - VAR8;
        }
        *VAR2 += strcspn(*VAR2, "") + 1;
    }
    return VAR4;
}