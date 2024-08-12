static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6;
    VAR7 *VAR8 = VAR9 + 256;
    VAR4 = 0;
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        for (VAR6 = 0; VAR6 < 16; VAR6 += 8)
        {
            VAR4 += VAR8[VAR2[0]];
            VAR4 += VAR8[VAR2[1]];
            VAR4 += VAR8[VAR2[2]];
            VAR4 += VAR8[VAR2[3]];
            VAR4 += VAR8[VAR2[4]];
            VAR4 += VAR8[VAR2[5]];
            VAR4 += VAR8[VAR2[6]];
            VAR4 += VAR8[VAR2[7]];
            register uint64_t VAR10 = *(VAR11 *)VAR2;
            VAR4 += VAR8[VAR10 & 0xff];
            VAR4 += VAR8[(VAR10 >> 8) & 0xff];
            VAR4 += VAR8[(VAR10 >> 16) & 0xff];
            VAR4 += VAR8[(VAR10 >> 24) & 0xff];
            VAR4 += VAR8[(VAR10 >> 32) & 0xff];
            VAR4 += VAR8[(VAR10 >> 40) & 0xff];
            VAR4 += VAR8[(VAR10 >> 48) & 0xff];
            VAR4 += VAR8[(VAR10 >> 56) & 0xff];
            register uint32_t VAR10 = *(VAR7 *)VAR2;
            VAR4 += VAR8[VAR10 & 0xff];
            VAR4 += VAR8[(VAR10 >> 8) & 0xff];
            VAR4 += VAR8[(VAR10 >> 16) & 0xff];
            VAR4 += VAR8[(VAR10 >> 24) & 0xff];
            VAR10 = *(VAR7 *)(VAR2 + 4);
            VAR4 += VAR8[VAR10 & 0xff];
            VAR4 += VAR8[(VAR10 >> 8) & 0xff];
            VAR4 += VAR8[(VAR10 >> 16) & 0xff];
            VAR4 += VAR8[(VAR10 >> 24) & 0xff];
            VAR2 += 8;
        }
        VAR2 += VAR3 - 16;
    }
    return VAR4;
}