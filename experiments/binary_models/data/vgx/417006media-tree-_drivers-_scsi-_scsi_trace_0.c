static const char *
FUN1(struct VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
const char *VAR5 = FUN2(VAR2), *VAR6;
sector_t VAR7 = 0;
u32 VAR8 = 0;

switch (FUN3(VAR3)) {
case VAR9:
VAR6 = "";
break;
case VAR10:
VAR6 = "";
break;
default:
FUN4(VAR2, "");
goto VAR11;
}

VAR7 |= ((VAR12)VAR3[2] << 56);
VAR7 |= ((VAR12)VAR3[3] << 48);
VAR7 |= ((VAR12)VAR3[4] << 40);
VAR7 |= ((VAR12)VAR3[5] << 32);
VAR7 |= (VAR3[6] << 24);
VAR7 |= (VAR3[7] << 16);
VAR7 |= (VAR3[8] << 8);
VAR7 |=  VAR3[9];
VAR8 |= (VAR3[10] << 24);
VAR8 |= (VAR3[11] << 16);
VAR8 |= (VAR3[12] << 8);
VAR8 |=  VAR3[13];

FUN5(VAR2, "", VAR6,
(unsigned long long)VAR7, VAR8);

VAR11:
FUN6(VAR2, 0);

return VAR5;
}