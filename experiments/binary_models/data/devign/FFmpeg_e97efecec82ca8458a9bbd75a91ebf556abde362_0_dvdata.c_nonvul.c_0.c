const VAR1 *FUN1(const VAR1 *VAR2, const VAR3 *VAR4, unsigned VAR5)
{
    int VAR6, VAR7, VAR8;
    if (VAR5 < 80 * 5 + 48 + 4)
        return NULL;
    VAR7 = (VAR4[3] & 0x80) >> 7;
    VAR8 = VAR4[80 * 5 + 48 + 3] & 0x1f;
    if (VAR7 == 1 && VAR8 == 0 && VAR4[4] & 0x07)
    {
        return &VAR9[2];
    }
    for (VAR6 = 0; VAR6 < FUN2(VAR9); VAR6++)
        if (VAR7 == VAR9[VAR6].VAR7 && VAR8 == VAR9[VAR6].VAR10)
            return &VAR9[VAR6];
    if (VAR2 && VAR5 == VAR2->VAR11)
        return VAR2;
    return NULL;
}