VAR1 *FUN1(int VAR2, int VAR3) {
VAR1 *VAR4;
int VAR5 = VAR2;
ptrdiff_t VAR6;

VAR6 = FUN2(VAR5, VAR3);
if (VAR6 < 0) {
VAR7 = VAR8;
return NULL;
}
if (VAR6 == 0) {
VAR6 = VAR9; 
}

VAR4 = (VAR1 *) malloc(sizeof(VAR1));
if (!VAR4) {
return NULL;
}
VAR4->VAR2 = VAR2;
VAR4->VAR3 = VAR3;
VAR4->VAR5 = VAR5;
VAR4->VAR10 = (VAR11 *) calloc(1, VAR6);
if (!VAR4->VAR10) {
free(VAR4);
return NULL;
}
VAR4->VAR12 = VAR4->VAR10;
return VAR4;
}