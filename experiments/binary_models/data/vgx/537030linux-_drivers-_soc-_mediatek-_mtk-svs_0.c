static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR2->private;
struct VAR6 *VAR7;
unsigned long VAR8;
u32 VAR9, VAR10, VAR11, VAR12;

for (VAR10 = 0; VAR10 < VAR5->VAR13; VAR10++)
if (VAR5->VAR14 && VAR5->VAR14[VAR10])
FUN2(VAR2, "",
VAR10, VAR5->VAR14[VAR10]);

for (VAR10 = 0; VAR10 < VAR5->VAR15; VAR10++)
if (VAR5->VAR16)
FUN2(VAR2, "",
VAR10, VAR5->VAR16[VAR10]);

for (VAR12 = 0, VAR9 = 0; VAR9 < VAR5->VAR17; VAR9++, VAR12++) {
VAR7 = &VAR5->VAR18[VAR9];

for (VAR10 = VAR19; VAR10 <= VAR20; VAR10++) {
FUN2(VAR2, "", VAR12);

if (VAR10 == VAR19 || VAR10 == VAR21)
FUN2(VAR2, "", VAR10);
else if (VAR10 == VAR20)
FUN3(VAR2, "");
else
FUN3(VAR2, "");

for (VAR11 = VAR22; VAR11 < VAR23; VAR11++) {
VAR8 = (unsigned long)(VAR5->VAR24 +
VAR5->VAR25[VAR11]);
FUN2(VAR2, "",
VAR8, VAR7->VAR26[VAR10][VAR11]);
}
}
}

return 0;
}