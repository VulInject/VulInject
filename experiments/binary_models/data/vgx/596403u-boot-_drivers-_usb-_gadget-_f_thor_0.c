static int FUN1(long long int VAR1, int VAR2)
{
struct VAR3 *VAR3;
void *VAR4;
int VAR5;

FUN2("", VAR6, VAR1, VAR2);

VAR3 = FUN3(VAR7);
if (!VAR3) {
FUN4("", VAR7);
return -VAR8;
}

VAR4 = FUN5(VAR3);
if (!VAR4) {
FUN4("");
return -VAR9;
}

if (VAR1) {
VAR5 = FUN6(VAR3, VAR4, VAR1, VAR2++);
if (VAR5) {
FUN4("", VAR5, VAR1);
return VAR5;
}
}


VAR5 = FUN7(VAR3, VAR4, 0, VAR2);
if (VAR5)
FUN4("");

return VAR5;
}