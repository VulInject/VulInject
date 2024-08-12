static void FUN1(struct VAR1 *VAR2, void *VAR3, int VAR4, int VAR5, const VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR3;

FUN2(VAR5);
FUN2(VAR7);

if(VAR4 == 0){
if(VAR9->VAR10){
FUN3(VAR2, NULL, VAR9->VAR10, VAR9->VAR11.VAR12);
free(VAR9->VAR10);
VAR9->VAR10 = NULL;
}
}else{
if(VAR9->VAR11.VAR13 == VAR14){
if(VAR4 == VAR15){
fprintf(VAR16, "", FUN4(VAR4));
}else{
fprintf(VAR16, "", FUN4(VAR4));
}
}else{
fprintf(VAR16, "", FUN5(VAR4));
}
VAR17 = 0;
FUN6(VAR2, 0, NULL);
}
}