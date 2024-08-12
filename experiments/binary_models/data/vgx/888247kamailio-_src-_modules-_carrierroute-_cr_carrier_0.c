struct VAR1 * FUN1(int VAR2, VAR3 *VAR4, int VAR5) {
struct VAR1 * VAR6;
if ((VAR6 = FUN2(sizeof(struct VAR1))) == NULL) {
VAR7;
return NULL;
}
memset(VAR6, 0, sizeof(struct VAR1));
VAR6->VAR8 = VAR2;
VAR6->VAR9 = VAR4;
VAR6->VAR10 = VAR5;
if(VAR5 > 0){
if ((VAR6->VAR5 = FUN2(sizeof(struct VAR11 *) * VAR5)) == NULL) {
VAR7;
FUN3(VAR6);
return NULL;
}
memset(VAR6->VAR5, 0, sizeof(struct VAR11 *) * VAR5);
}
return VAR6;
}