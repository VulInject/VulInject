int FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4;
dev_t VAR5;

VAR6 = FUN2(VAR7, "");
if (FUN3(VAR6)) {
VAR4 = FUN4(VAR6);
VAR6 = NULL;
return VAR4;
}

VAR4 = FUN5(&VAR5, 0, VAR3, "");
if (VAR4) {
FUN6(VAR6);
VAR6 = NULL;
return VAR4;
}

VAR8 = FUN7(VAR5);
VAR9 = VAR3;

return 0;
}