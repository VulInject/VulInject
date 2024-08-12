VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const unsigned char *VAR6,
size_t VAR7)
{
int VAR8 = 0;

if(VAR6 && VAR7) {
if(VAR7 == VAR9 &&
!memcmp(VAR10, VAR6, VAR9)) {
VAR3->VAR11->VAR12 = VAR13;
}
else if(VAR7 == VAR14 &&
!memcmp(VAR15, VAR6, VAR14)) {
VAR3->VAR11->VAR12 = VAR16;
}
else if(VAR7 == VAR17 &&
!memcmp(VAR18, VAR6, VAR17)) {
VAR3->VAR11->VAR12 = VAR19;
VAR8 = 1;
}
else if(VAR7 == VAR20 &&
!memcmp(VAR21, VAR6, VAR20)) {
VAR3->VAR11->VAR12 = VAR22;
VAR8 = 1;
}
else {
VAR3->VAR11->VAR12 = VAR23;
FUN2(VAR5, "", (int)VAR7, VAR6);


goto VAR24;
}
FUN3(VAR5, VAR25, (int)VAR7, VAR6);
}
else {
VAR3->VAR11->VAR12 = VAR23;
FUN3(VAR5, VAR26);
}

VAR24:
FUN4(VAR5, VAR8? VAR27 : VAR28);
return VAR29;
}