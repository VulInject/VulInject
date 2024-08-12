struct VAR1 *FUN1(struct VAR1 *VAR1)
{
FUN2(&VAR1->VAR2);
if (!(VAR1->VAR3 & (VAR4|VAR5))) {
FUN3(VAR1);
FUN4(&VAR1->VAR2);
} else {
FUN4(&VAR1->VAR2);

VAR1 = NULL;
}
return VAR1;
}