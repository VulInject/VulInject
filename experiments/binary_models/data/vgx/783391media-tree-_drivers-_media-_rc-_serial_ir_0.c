static int FUN1(struct VAR1 *VAR2, unsigned int *VAR3,
unsigned int VAR4)
{
unsigned long VAR5;
ktime_t VAR6;
s64 VAR7;
int VAR8;

FUN2(&VAR9[VAR10].VAR11, VAR5);
if (VAR10 == VAR12) {

FUN3();
}

VAR6 = FUN4();
for (VAR8 = 0; VAR8 < VAR4; VAR8++) {
if (VAR8 % 2)
VAR9[VAR10].FUN5();
else
VAR9[VAR10].FUN6(VAR3[VAR8], VAR6);

VAR6 = FUN7(VAR6, VAR3[VAR8]);
VAR7 = FUN8(VAR6, FUN4());
if (VAR7 > 25) {
FUN9(&VAR9[VAR10].VAR11, VAR5);
FUN10(VAR7 - 25, VAR7 + 25);
FUN2(&VAR9[VAR10].VAR11, VAR5);
} else if (VAR7 > 0) {
FUN11(VAR7);
}
}
FUN12();
FUN9(&VAR9[VAR10].VAR11, VAR5);
return VAR4;
}