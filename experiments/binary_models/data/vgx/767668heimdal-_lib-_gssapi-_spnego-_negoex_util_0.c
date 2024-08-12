VAR1
FUN1(VAR1 *VAR2, gssspnego_ctx VAR3)
{
struct VAR4 *VAR5;

if (VAR3->VAR6 != NULL) {

if (VAR3->VAR7 != VAR8) {
VAR5 = FUN2(&VAR3->VAR9);
FUN3(VAR5 != NULL && VAR5->VAR10 == VAR8,
"");
VAR5->VAR10 = VAR3->VAR7;
VAR3->VAR7 = VAR8;
}
return VAR11;
}

VAR3->VAR6 = FUN4();
if (VAR3->VAR6 == NULL) {
*VAR2 = VAR12;
return VAR13;
}

FUN5(VAR3->VAR6,
VAR14);

return VAR11;
}