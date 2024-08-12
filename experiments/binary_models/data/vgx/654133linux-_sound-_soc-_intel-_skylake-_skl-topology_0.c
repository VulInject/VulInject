static int FUN1(struct VAR1 *VAR2,
char *VAR3,	struct VAR4 *VAR5,
struct VAR6 *VAR7, int VAR8)
{
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13 = 0, VAR14;
int VAR15 = 0, VAR16 = 0;
bool VAR17 = true;

if (VAR8 <= 0)
return -VAR18;

while (VAR16 < VAR8) {
VAR10 = (struct VAR9 *)(VAR3 + VAR15);

VAR15 += VAR10->VAR19;

switch (VAR10->VAR20) {
case VAR21:
FUN2(VAR2, "");
continue;

case VAR22:
if (VAR17) {
VAR14 = FUN3(VAR2, (VAR23 *)VAR7->VAR24,
VAR10->VAR25);
VAR17 = false;
} else {
VAR14 = FUN4(VAR2, VAR10->VAR26, VAR5,
VAR7);
}

if (VAR14 < 0)
return VAR14;

VAR16 += sizeof(*VAR10->VAR25);

continue;

default:
VAR12 = VAR10->VAR26;
VAR13 = 0;
break;
}

while (VAR13 <= (VAR10->VAR27 - 1)) {
VAR14 = FUN4(VAR2, VAR12,
VAR5, VAR7);

if (VAR14 < 0)
return VAR14;

VAR13 = VAR13 + VAR14;
VAR12++;
}

VAR16 += VAR13 * sizeof(*VAR12);
}

return VAR15;
}