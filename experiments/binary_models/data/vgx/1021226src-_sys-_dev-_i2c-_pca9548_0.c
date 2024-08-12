void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7 *VAR8 = VAR4;

VAR6->VAR9 = VAR8->VAR10;
VAR6->VAR11 = VAR8->VAR12;

VAR6->VAR13 = -1;	
FUN2(&VAR6->VAR14, VAR6->VAR15.VAR16);

if (strcmp(VAR8->VAR17, "") == 0) {
VAR6->VAR18 = 1;
VAR6->VAR19 = 4;
} else if (strcmp(VAR8->VAR17, "") == 0 ||
strcmp(VAR8->VAR17, "") == 0) {
VAR6->VAR20 = 1 << 3;
VAR6->VAR19 = 8;
} else if (strcmp(VAR8->VAR17, "") == 0) {
VAR6->VAR18 = 1;
VAR6->VAR19 = 8;
}

FUN3("");

if (strcmp(VAR8->VAR17, "") == 0)
FUN4(VAR6, VAR8);
else
FUN5(VAR6, VAR8);
}