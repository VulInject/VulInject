void FUN1(unsigned int VAR1,
unsigned int VAR2)
{
unsigned int VAR3;
u32 VAR4;
u32 VAR5[VAR6] = {};
VAR7 *VAR8[VAR6] = {};
struct ccsr_ddr VAR9 *VAR10;

for (VAR3 = VAR1; VAR3 <= VAR2; VAR3++) {
switch (VAR3) {
case 0:
VAR10 = (void *)VAR11;
break;
case 1:
VAR10 = (void *)VAR12;
break;
case 2:
VAR10 = (void *)VAR13;
break;
case 3:
VAR10 = (void *)VAR14;
break;
default:
FUN2("", VAR15, VAR3);
return;
}
VAR4 = FUN3(&VAR10->VAR16[19]);
VAR8[VAR3] = &VAR10->VAR16[1];
while (!(VAR4 & VAR17)) {

FUN4(100);
VAR4 = FUN3(&VAR10->VAR16[19]);
}
VAR5[VAR3] = FUN3(&VAR10->VAR16[1]) | VAR18;
}

for (VAR3 = VAR1; VAR3 <= VAR2; VAR3++)
FUN5(VAR8[VAR3], VAR5[VAR3]);
}