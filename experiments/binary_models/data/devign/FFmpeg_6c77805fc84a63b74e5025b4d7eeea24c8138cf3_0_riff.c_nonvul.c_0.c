enum VAR1 FUN1(const VAR2 *VAR3[4], unsigned int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR3 && VAR3[VAR5]; VAR5++)
    {
        enum CodecID VAR6 = FUN2(VAR3[VAR5], VAR4);
        if (VAR6 != VAR7)
            return VAR6;
    }
    return VAR7;
}