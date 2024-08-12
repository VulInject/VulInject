bool FUN1(void *VAR1, int VAR2)
{
unsigned char *VAR3 = VAR1;
bool VAR4;

VAR4 = FUN2(VAR1, VAR2, VAR5);
if (!VAR4 && VAR6) {
FUN3(VAR7, "",
VAR8, 16, 1, VAR3, VAR3[0], true);
VAR4 = true;
}
return VAR4;
}