static void *
FUN1(unsigned VAR1)
{
struct VAR2 *VAR3;
if (!(VAR3 = FUN2(sizeof(struct VAR2))))
return NULL;
if (FUN3(&VAR3->VAR4, VAR5)==0) {
FUN4(VAR3);
return NULL;
}
if ((VAR3->VAR6 = FUN5(NULL,VAR7,VAR8,NULL)) == NULL) {
FUN6(&VAR3->VAR4);
FUN4(VAR3);
return NULL;
}
VAR3->VAR9 = VAR3->VAR10 = VAR3->VAR11 = 0;
return VAR3;
}