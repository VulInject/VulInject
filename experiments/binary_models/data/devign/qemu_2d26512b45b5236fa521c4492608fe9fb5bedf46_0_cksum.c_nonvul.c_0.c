int FUN1(struct VAR1 *VAR2, int VAR3)
{
    register VAR4 *VAR5;
    register int VAR6 = 0;
    register int VAR7 = 0;
    int VAR8 = 0;
    union
    {
        uint8_t VAR9[2];
        uint16_t VAR10;
    } VAR11;
    union
    {
        uint16_t VAR10[2];
        uint32_t VAR12;
    } VAR13;
    if (VAR2->VAR14 == 0)
        goto VAR15;
    VAR5 = FUN2(VAR2, VAR4 *);
    VAR7 = VAR2->VAR14;
    if (VAR3 < VAR7)
        VAR7 = VAR3;
    VAR3 -= VAR7;
    if ((1 & (VAR16)VAR5) && (VAR7 > 0))
    {
        VAR17;
        VAR6 <<= 8;
        VAR11.VAR9[0] = *(VAR18 *)VAR5;
        VAR5 = (VAR4 *)((VAR19 *)VAR5 + 1);
        VAR7--;
        VAR8 = 1;
    }
    while ((VAR7 -= 32) >= 0)
    {
        VAR6 += VAR5[0];
        VAR6 += VAR5[1];
        VAR6 += VAR5[2];
        VAR6 += VAR5[3];
        VAR6 += VAR5[4];
        VAR6 += VAR5[5];
        VAR6 += VAR5[6];
        VAR6 += VAR5[7];
        VAR6 += VAR5[8];
        VAR6 += VAR5[9];
        VAR6 += VAR5[10];
        VAR6 += VAR5[11];
        VAR6 += VAR5[12];
        VAR6 += VAR5[13];
        VAR6 += VAR5[14];
        VAR6 += VAR5[15];
        VAR5 += 16;
    }
    VAR7 += 32;
    while ((VAR7 -= 8) >= 0)
    {
        VAR6 += VAR5[0];
        VAR6 += VAR5[1];
        VAR6 += VAR5[2];
        VAR6 += VAR5[3];
        VAR5 += 4;
    }
    VAR7 += 8;
    if (VAR7 == 0 && VAR8 == 0)
        goto VAR15;
    VAR17;
    while ((VAR7 -= 2) >= 0)
    {
        VAR6 += *VAR5++;
    }
    if (VAR8)
    {
        VAR17;
        VAR6 <<= 8;
        if (VAR7 == -1)
        {
            VAR11.VAR9[1] = *(VAR18 *)VAR5;
            VAR6 += VAR11.VAR10;
            VAR7 = 0;
        }
        else
            VAR7 = -1;
    }
    else if (VAR7 == -1)
        VAR11.VAR9[0] = *(VAR18 *)VAR5;
VAR15:
    if (VAR3)
    {
        FUN3((VAR20, ""));
        FUN3((VAR20, "", VAR3));
    }
    if (VAR7 == -1)
    {
        VAR11.VAR9[1] = 0;
        VAR6 += VAR11.VAR10;
    }
    VAR17;
    return (~VAR6 & 0xffff);
}