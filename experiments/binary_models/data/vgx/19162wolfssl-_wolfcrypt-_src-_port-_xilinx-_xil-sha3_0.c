int FUN1(VAR1* VAR2, void* VAR3, int VAR4)
{
VAR5* VAR6;

(void)VAR3;
(void)VAR4;

if (VAR2 == NULL) {
return VAR7;
}

if ((VAR6 = FUN2(0)) == NULL) {
FUN3("");
return VAR8;
}


if (FUN4(&(VAR2->VAR9), VAR6, VAR6->VAR10) !=
VAR11) {
FUN3("");
return VAR8;
}

FUN5(&(VAR2->VAR12), &(VAR2->VAR9));
FUN6(&(VAR2->VAR12));

return 0;
}