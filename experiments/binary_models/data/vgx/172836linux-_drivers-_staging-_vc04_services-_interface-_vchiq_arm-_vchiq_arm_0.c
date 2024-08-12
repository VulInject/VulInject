int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = FUN2();
char VAR4[80];
int VAR5;
int VAR6;

if (!VAR3)
return -VAR7;



FUN3();
for (VAR6 = 0; VAR6 < VAR3->VAR8; VAR6++) {
struct VAR9 *VAR10;
struct VAR11 *VAR12;

VAR10 = FUN4(VAR3->VAR13[VAR6]);
if (!VAR10 || VAR10->VAR14.VAR15 != VAR16)
continue;

VAR12 = VAR10->VAR12;
if (VAR12)
VAR12->VAR17 = 0;
}
FUN5();

for (VAR6 = 0; VAR6 < VAR3->VAR8; VAR6++) {
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR18;

FUN3();
VAR10 = FUN4(VAR3->VAR13[VAR6]);
if (!VAR10 || VAR10->VAR14.VAR15 != VAR16) {
FUN5();
continue;
}

VAR12 = VAR10->VAR12;
if (!VAR12 || VAR12->VAR17) {
FUN5();
continue;
}
FUN5();

VAR5 = snprintf(VAR4, sizeof(VAR4),
"",
VAR12, VAR12->VAR19,
VAR12->VAR20 ? "" :
"",
VAR12->VAR21 -
VAR12->VAR22,
VAR23);
VAR18 = FUN6(VAR1, VAR4, VAR5 + 1);
if (VAR18)
return VAR18;
VAR12->VAR17 = 1;
}
return 0;
}