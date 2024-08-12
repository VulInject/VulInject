struct VAR1* FUN1(void)
{

struct VAR1* VAR1 = (struct VAR1*)calloc(1, sizeof(*VAR1));
if(!VAR1) {
int VAR2 = VAR3;
FUN2("");
VAR3 = VAR2;
return NULL;
}
VAR1->VAR4 = FUN3();
if(VAR1->VAR4 == VAR5) {
free(VAR1);
FUN2("", FUN4(FUN5()));
}
if(!FUN6(VAR1->VAR4)) {
FUN2("", FUN4(FUN5()));
}
FUN7(&VAR1->VAR6);
FUN8(VAR7, "");
return VAR1;
}