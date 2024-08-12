void FUN1(int VAR1, unsigned int *VAR2,
int VAR3)
{
unsigned long long VAR4;
unsigned long VAR5;
int VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
unsigned long long VAR11 = VAR1;
unsigned long long VAR12 = VAR11 << 32;
struct VAR13 *VAR14;


FUN2(&VAR15, VAR5);
VAR14 = FUN3(NULL, VAR1);
if (!VAR14) {

FUN4(""
"", VAR1);
goto VAR16;
}

VAR8 = VAR14->VAR8;
VAR10 = VAR14->VAR10;
FUN5(&VAR17);
for (VAR6 = 0; VAR6 < VAR3; VAR6++) {
unsigned int VAR18 = *(VAR2+VAR6);
int VAR19 = 0;
VAR4 = 0;
if (VAR18 == 0)
continue;
VAR4 = FUN6( VAR8, VAR18, VAR10, &VAR19);


if (VAR19 && VAR19 != VAR20[VAR1].VAR21) {
VAR20[VAR1].VAR21 = VAR19;

break;
}


if (VAR20[VAR1].VAR22)
FUN7((VAR4 | VAR12),
VAR1);
}
FUN8(&VAR17);
VAR16:
FUN9(&VAR15, VAR5);
}