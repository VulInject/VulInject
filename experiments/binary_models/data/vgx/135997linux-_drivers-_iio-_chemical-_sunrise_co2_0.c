static int FUN1(struct VAR1 *VAR1,
const struct VAR2 *VAR3,
int *VAR4, int *VAR5, long VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR1);
u16 VAR9;
int VAR10;

switch (VAR6) {
case VAR11:
switch (VAR3->VAR12) {
case VAR13:
FUN3(&VAR8->VAR14);
VAR10 = FUN4(VAR8, VAR15,
&VAR9);
FUN5(&VAR8->VAR14);

if (VAR10)
return VAR10;

*VAR4 = VAR9;
return VAR16;

case VAR17:
FUN3(&VAR8->VAR14);
VAR10 = FUN4(VAR8, VAR18,
&VAR9);
FUN5(&VAR8->VAR14);

if (VAR10)
return VAR10;

*VAR4 = VAR9;
return VAR16;

default:
return -VAR19;
}

case VAR20:
switch (VAR3->VAR12) {
case VAR13:

*VAR4 = 1;
*VAR5 = 10000;
return VAR21;

case VAR17:

*VAR4 = 10;
return VAR16;

default:
return -VAR19;
}

default:
return -VAR19;
}
}