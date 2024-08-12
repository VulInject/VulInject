void
FUN1(VAR1 *VAR2)
{
if (VAR2 != NULL) {
if (VAR2->VAR3 != NULL) {	
FUN2((void **)VAR2->VAR3,
VAR4);
free(VAR2->VAR3);
}
if (VAR2->VAR5 != NULL) {		
free(VAR2->VAR5);
}
if (VAR2->VAR6 != NULL)		
free(VAR2->VAR6);
free(VAR2);
}
}