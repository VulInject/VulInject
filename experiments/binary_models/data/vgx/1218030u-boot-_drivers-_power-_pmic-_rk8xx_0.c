static int FUN1(struct VAR1 *VAR2, uint VAR3, const VAR4 *VAR5,
int VAR6)
{
int VAR7;

VAR7 = FUN2(VAR2, VAR3, VAR5, VAR6);
if (VAR7) {
FUN3("", VAR2, VAR3);
return VAR7;
}

return 0;
}