static int
FUN1(unsigned long VAR1, u32 VAR2, struct VAR3 *VAR4)
{
unsigned int VAR5 = FUN2(VAR2);
unsigned int VAR6;
int VAR7;

if ((VAR2 & 0xfe000000) == 0xe8000000) {

VAR6 = (VAR2 >> 8) & 0xf;
VAR7 = !!(FUN3(VAR2));
} else if (((VAR5 & 1) == 1) || (VAR5 == 14))
goto VAR8;
else {
VAR7 = ((VAR2 & 0xf0) == 0xd0);
VAR6 = VAR5 + 1;
}

VAR9 += 1;

if (FUN4(VAR4))
goto VAR10;

if (VAR7) {
unsigned long VAR11;
FUN5(VAR11, VAR1);
VAR4->VAR12[VAR5] = VAR11;
FUN5(VAR11, VAR1 + 4);
VAR4->VAR12[VAR6] = VAR11;
} else {
FUN6(VAR4->VAR12[VAR5], VAR1);
FUN6(VAR4->VAR12[VAR6], VAR1 + 4);
}

return VAR13;

VAR10:
if (VAR7) {
unsigned long VAR11, VAR14;
unsigned int VAR15 = FUN7();

FUN8(VAR11, VAR1);
FUN8(VAR14, VAR1 + 4);

FUN9(VAR15);

VAR4->VAR12[VAR5] = VAR11;
VAR4->VAR12[VAR6] = VAR14;
} else {
unsigned int VAR15 = FUN7();
FUN10(VAR4->VAR12[VAR5], VAR1);
FUN10(VAR4->VAR12[VAR6], VAR1 + 4);
FUN9(VAR15);
}

return VAR13;
VAR8:
return VAR16;
VAR17:
return VAR18;
}