unsigned long FUN1(void)
{
u32 VAR1, VAR2, VAR3, VAR4, VAR5;
unsigned long VAR6;
int VAR7;

if (VAR8.VAR9 != VAR10)
return 0;

VAR7 = FUN2(VAR8.VAR11, VAR8.VAR12);
if (VAR7 < 0)
return 0;

if (VAR13[VAR7].VAR14) {
FUN3(VAR15, VAR1, VAR2);
VAR3 = (VAR1 >> 8) & 0xff;
} else {
FUN3(VAR16, VAR1, VAR2);
VAR3 = (VAR2 >> 8) & 0x1f;
}


FUN3(VAR17, VAR1, VAR2);
VAR4 = VAR1 & 0x7;
VAR5 = FUN4(VAR7, VAR4);


VAR6 = VAR5 * VAR3;

VAR18 = (VAR5 * 1000) / VAR19;


FUN5(VAR20);


FUN5(VAR21);

return VAR6;
}