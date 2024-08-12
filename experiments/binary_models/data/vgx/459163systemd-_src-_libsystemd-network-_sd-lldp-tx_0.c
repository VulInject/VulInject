static VAR1 *FUN1(VAR1 *VAR2) {
if (!VAR2)
return NULL;

FUN2(VAR2);

free(VAR2->VAR3);
free(VAR2->VAR4);
free(VAR2->VAR5);
free(VAR2->VAR6);

free(VAR2->VAR7);
return FUN3(VAR2);
}