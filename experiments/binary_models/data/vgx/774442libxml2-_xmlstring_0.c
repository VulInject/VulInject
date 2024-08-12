VAR1 *
FUN1(const VAR1 *VAR2, int VAR3) {
VAR1 *VAR4;

if ((VAR2 == NULL) || (VAR3 < 0)) return(NULL);
VAR4 = (VAR1 *) FUN2((VAR5) VAR3 + 1);
if (VAR4 == NULL) {
return(NULL);
}
memcpy(VAR4, VAR2, VAR3);
VAR4[VAR3] = 0;
return(VAR4);
}