int
FUN1(struct VAR1 *VAR2)
{
int VAR3 = VAR2->VAR4 - 1;
int VAR5;

if (VAR2->VAR6 != FUN2()) {
FUN3("", VAR2);
FUN4();
}

VAR5 = FUN5();
VAR2->VAR6 = NULL;
FUN6();
VAR2->VAR4 = 0;
FUN7(VAR5);

return (VAR3);
}