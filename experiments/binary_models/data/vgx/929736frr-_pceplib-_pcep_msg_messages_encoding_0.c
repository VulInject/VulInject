static VAR1 FUN1(const VAR2 *VAR3,
VAR2 *VAR4, VAR2 *VAR5,
VAR2 *VAR6)
{





*VAR4 = (VAR3[0] >> 5) & 0x07;
*VAR5 = (VAR3[0] & 0x1f);
*VAR6 = VAR3[1];
uint16_t VAR7;
memcpy(&VAR7, VAR3 + 2, sizeof(VAR7));
return FUN2(VAR7);
}