static int FUN1(struct VAR1 *VAR2, unsigned VAR3,
struct VAR4 *VAR5, unsigned VAR6, u32 VAR7)
{
if (VAR3 == 0)	
return 0;


for (; VAR6 < VAR2->VAR8; VAR6 += VAR3) {
union fotg210_shadow VAR9;
__hc32 VAR10;
struct VAR11 *VAR12;

VAR9 = VAR2->VAR13[VAR6];
VAR10 = FUN2(VAR2, VAR2->VAR14[VAR6]);
while (VAR9.VAR15) {
switch (FUN3(VAR2, VAR10)) {
case VAR16:
VAR10 = FUN2(VAR2, VAR9.VAR17->VAR18);
VAR9 = VAR9.VAR17->VAR19;
continue;
case VAR20:
VAR12 = VAR9.VAR21->VAR12;
if (FUN4(VAR5, VAR9.VAR21->VAR5)) {
u32 VAR22;

VAR22 = FUN3(VAR2,
VAR12->VAR23);

VAR22 |= VAR22 >> 8;
if (VAR22 & VAR7)
break;
}
VAR10 = FUN2(VAR2, VAR12->VAR18);
VAR9 = VAR9.VAR21->VAR24;
continue;

default:
FUN5(VAR2,
"",
VAR6, VAR10);
}


return 0;
}
}


return 1;
}