static int FUN1(const char *VAR1, void VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2();
if (!VAR5) {
FUN3("", VAR6);
return -VAR7;
}

VAR5->read = VAR8;
VAR5->write = VAR9;
VAR5->VAR10 = VAR3;
snprintf(VAR5->VAR1, sizeof(VAR5->VAR1), "", VAR1);

return FUN4(VAR5);
}