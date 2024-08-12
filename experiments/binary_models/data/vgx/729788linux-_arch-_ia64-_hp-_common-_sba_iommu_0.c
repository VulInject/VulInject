static int
FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR4 = VAR3;
unsigned long *VAR5 = (unsigned long *)VAR4->VAR6;
int VAR7, VAR8 = 0;

FUN2(VAR2, "",
VAR4->VAR9, ((VAR4->VAR10 >> 4) & 0xF), (VAR4->VAR10 & 0xF));
if (VAR4->VAR11 != VAR12)
FUN2(VAR2, "", VAR4->VAR11);
FUN2(VAR2, "", ((VAR4->VAR13 >> 3) * VAR14)/(1024*1024));
FUN2(VAR2, "", VAR14/1024);

for (VAR7 = 0; VAR7 < (VAR4->VAR15 / sizeof(unsigned long)); ++VAR7, ++VAR5)
VAR8 += FUN3(*VAR5);

FUN2(VAR2, "", VAR4->VAR13 >> 3);
FUN2(VAR2, "", VAR8);

{
unsigned long VAR7 = 0, VAR16 = 0, VAR17, VAR18;
VAR17 = VAR18 = VAR4->VAR19[0];
for (VAR7 = 0; VAR7 < VAR20; VAR7++) {
VAR16 += VAR4->VAR19[VAR7];
if (VAR4->VAR19[VAR7] > VAR18) VAR18 = VAR4->VAR19[VAR7];
if (VAR4->VAR19[VAR7] < VAR17) VAR17 = VAR4->VAR19[VAR7];
}
VAR16 /= VAR20;
FUN2(VAR2, "",
VAR17, VAR16, VAR18);
}
FUN2(VAR2, "");
return 0;
}