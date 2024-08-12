static int FUN1(struct VAR1 *VAR2, int VAR3,
int *VAR4)
{
int VAR5;
int VAR6 = -1;
int VAR7 = -1;
struct VAR8 *VAR9 = FUN2(VAR2->VAR10);


VAR5 = FUN3(VAR2->VAR10, VAR11,
VAR12,
VAR3 << VAR13);
if (VAR5) {
FUN4(VAR9, "");
return VAR5;
}

VAR6 = FUN5(VAR2,
VAR14);
if (VAR6 < 0)
return VAR6;

if (VAR3 == 1) {
*VAR4 = VAR6;
return 0;
}

VAR7 = FUN5(VAR2,
VAR15);
if (VAR7 < 0)
return VAR7;

if (VAR6 >= VAR7)
*VAR4 = VAR6 - VAR7;
else
*VAR4 = 0;

return 0;
}

static ssize_t VAR16
(struct VAR8 *VAR9, struct VAR17 *VAR18,
char *VAR19)
{
struct VAR20 *VAR21 = FUN6(VAR9);
struct VAR1 *VAR2 = FUN7(VAR21);
unsigned int VAR22;
int VAR23 = 0;

FUN8(&VAR2->VAR24);
for (VAR22 = 0; VAR22 < FUN9(VAR25[VAR2->VAR26]); ++VAR22)
VAR23 += sprintf(VAR19 + VAR23, "",
VAR25[VAR2->VAR26][VAR22].VAR27,
VAR25[VAR2->VAR26][VAR22].VAR28);
FUN10(&VAR2->VAR24);

VAR19[VAR23 - 1] = '';

return VAR23;
}