int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
struct VAR7 *VAR8,
unsigned int VAR9,
enum pubkey_source VAR10,
unsigned char *VAR11,
char *VAR12, size_t VAR13,
const char *VAR14)
{
unsigned char VAR15[1024 + 4];
size_t        VAR16;
const char *VAR17;
snprintf(VAR12, VAR13, "");

VAR4->VAR18 = VAR19;
VAR4->VAR20 = VAR21;
if (VAR8->VAR22 && VAR11) {
VAR4->VAR23 = VAR8->VAR22;   

switch(VAR10) {
case VAR24:
case VAR25:
FUN2(VAR26, "",
FUN3(VAR6), VAR14, VAR9);
if(VAR12) {
snprintf(VAR12, VAR13, "");
}
break;

case VAR27:
FUN2(VAR26, "",
FUN3(VAR6), VAR14, VAR9);
if(VAR12) {
snprintf(VAR12, VAR13, "");
}
break;

case VAR28:
break;

case VAR29:
VAR17 = FUN4((char *)VAR11, 0, (char *)VAR15, sizeof(VAR15),
&VAR16);

if(VAR12) {
FUN5(VAR12, VAR13, VAR15, VAR16);
}



if (VAR17) {
FUN2(VAR30, "",
FUN3(VAR6), VAR14, VAR9, VAR17);
return 1;
}
else {
FUN6(VAR4->VAR31, VAR15, VAR16, "");
return 0;
}
}
}


return 2;
}