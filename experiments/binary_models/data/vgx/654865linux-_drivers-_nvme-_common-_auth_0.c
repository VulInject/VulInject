static int FUN1(int VAR1, VAR2 *VAR3, size_t VAR4, VAR2 *VAR5)
{
const char *VAR6;
struct VAR7 *VAR8;
int VAR9;

VAR6 = FUN2(VAR1);
if (!VAR6) {
FUN3("", VAR10,
VAR1);
return -VAR11;
}
VAR8 = FUN4(VAR6, 0, 0);
if (FUN5(VAR8))
return -VAR12;

VAR9 = FUN6(VAR8, VAR3, VAR4, VAR5);
if (VAR9 < 0)
FUN3("", VAR10,
VAR4);

FUN7(VAR8);
return VAR9;
}