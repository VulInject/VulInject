unsigned int FUN1(const VAR1 *VAR2[4], enum CodecID VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR2 && VAR2[VAR4]; VAR4++)
    {
        int VAR5 = FUN2(VAR2[VAR4], VAR3);
        if (VAR5)
            return VAR5;
    }
    return 0;
}