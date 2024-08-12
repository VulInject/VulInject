int FUN1(VAR1* VAR2)
{
struct VAR3* VAR4;

VAR4 = (struct VAR3*)FUN2(sizeof(struct VAR3));
if (VAR4 == NULL) {
VAR5;
return -1;
}
if (FUN3(&VAR4->VAR6, VAR7) < 0) goto VAR8;
FUN4(VAR2, VAR4);
return 0;

VAR8:
if (VAR4) {
FUN5(&VAR4->VAR6);
FUN6(VAR4);
}
return -1;
}