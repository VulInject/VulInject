int FUN1(char *VAR1, char *VAR2, void *VAR3) {
carrier_t VAR4;
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
int VAR7 = 0;

VAR4 = FUN2(VAR1, VAR6->VAR8, &(VAR6->VAR9), &(VAR6->VAR10), VAR6->VAR11);

if (VAR4<=0) {
FUN3("", VAR1, VAR2, VAR4);
if (VAR4 < 0) {
VAR7 = VAR4; 
} else {
VAR7 = VAR12; 
}
}
else {
FUN3("", VAR1, (long int)VAR4, FUN4(VAR4));
VAR7 = VAR13;
}
return VAR7; 
}