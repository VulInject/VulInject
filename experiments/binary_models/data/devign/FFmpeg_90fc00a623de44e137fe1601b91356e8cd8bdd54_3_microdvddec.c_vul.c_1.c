static int FUN1(VAR1 *VAR2)
{
    unsigned char VAR3;
    const VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    if (FUN2(VAR5) == 0xEFBBBF)
        VAR5 += 3;
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        if (sscanf(VAR5, "", &VAR3) != 1 && sscanf(VAR5, "", &VAR3) != 1 && sscanf(VAR5, "", &VAR3) != 1)
            return 0;
        VAR5 += strcspn(VAR5, "") + 1;
    }
    return VAR8;
}