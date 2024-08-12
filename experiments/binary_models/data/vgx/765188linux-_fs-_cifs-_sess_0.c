enum VAR1
FUN1(struct VAR2 *VAR3, enum securityEnum VAR4)
{
switch (VAR3->VAR5) {
case VAR6:
switch (VAR4) {
case VAR7:
case VAR8:
return VAR4;
case VAR9:
if (VAR3->VAR10 &&
(VAR11 & VAR12))
return VAR8;
if ((VAR3->VAR13 || VAR3->VAR14) &&
(VAR11 & VAR15))
return VAR7;
VAR16;
default:
return VAR9;
}
case VAR17:
switch (VAR4) {
case VAR18:
return VAR4;
case VAR9:
if (VAR11 & VAR19)
return VAR18;
break;
default:
break;
}
VAR16;
default:
return VAR9;
}
}

struct VAR20 {
unsigned int VAR21;
struct VAR22 *VAR23;
struct VAR2 *VAR3;
struct VAR24 *VAR25;
void (*VAR26)(struct VAR20 *);
int VAR27;


int VAR28;
struct kvec VAR29[3];
};