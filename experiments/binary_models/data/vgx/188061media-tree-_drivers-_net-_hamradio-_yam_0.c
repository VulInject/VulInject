static unsigned char *FUN1(unsigned char *VAR1, int VAR2,
unsigned int VAR3)
{
const char *VAR4[2] = {VAR5, VAR6};
const struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13;

switch (VAR3) {
case 0:
VAR8 = NULL;
break;
case VAR14:
case VAR15:
VAR3--;
VAR10 = FUN2("", 0, NULL, 0);
if (FUN3(VAR10)) {
FUN4(VAR16 "");
return NULL;
}
VAR13 = FUN5(&VAR8, VAR4[VAR3], &VAR10->VAR17);
FUN6(VAR10);
if (VAR13) {
FUN4(VAR16 ""%VAR18\"",
VAR4[VAR3]);
return NULL;
}
if (VAR8->VAR19 != VAR20) {
FUN4(VAR16 ""%VAR18\"",
VAR8->VAR19, VAR4[VAR3]);
FUN7(VAR8);
return NULL;
}
VAR1 = (unsigned char *)VAR8->VAR21;
break;
default:
FUN4(VAR16 "", VAR3);
return NULL;
}


VAR12 = VAR22;
while (VAR12) {
if (VAR12->VAR2 == VAR2) {
memcpy(VAR12->VAR1, VAR1, VAR20);
goto VAR23;
}
VAR12 = VAR12->VAR24;
}


if ((VAR12 = FUN8(sizeof(struct VAR11), VAR25)) == NULL) {
FUN7(VAR8);
return NULL;
}
memcpy(VAR12->VAR1, VAR1, VAR20);
VAR12->VAR2 = VAR2;
VAR12->VAR24 = VAR22;
VAR22 = VAR12;
VAR23:
FUN7(VAR8);
return VAR12->VAR1;
}