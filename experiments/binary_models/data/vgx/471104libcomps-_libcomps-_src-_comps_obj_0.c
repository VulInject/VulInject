char* FUN1(VAR1 *VAR2) {
char *VAR3;
if (VAR2 && VAR2->VAR4->VAR5 != NULL) {
return VAR2->VAR4->FUN2(VAR2);
} else {
VAR3 = malloc(sizeof(char));
VAR3[0]=0;
return VAR3;;
}
}