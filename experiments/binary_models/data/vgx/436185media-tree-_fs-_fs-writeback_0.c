static bool FUN1(struct VAR1 *VAR2)
{
if (FUN2(VAR2)) {
return false;
} else {
FUN3(VAR3, &VAR2->VAR4);
FUN4(!VAR2->VAR5);
FUN5(VAR2->VAR5,
&VAR2->VAR6->VAR7);
return true;
}
}