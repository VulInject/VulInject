static inline VAR1 FUN1(const VAR2 *VAR3)
{
    uint8_t VAR4 = 0;
    int VAR5;
    for (VAR5 = 0; VAR5 < FUN2(VAR3->VAR6); VAR5++)
    {
        VAR4 = (((VAR4 & 0xfe) >> 1) | ((VAR4 & 0x01) ? 0x80 : 0)) + VAR3->VAR6[VAR5];
    }
    return VAR4;
}