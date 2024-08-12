static int FUN1(const char *VAR1, uid_t VAR2, gid_t VAR3)
{
char *VAR4;
int (*VAR5)(const char *VAR1, uid_t VAR2, gid_t VAR3);

FUN2();
VAR5 = (int (*)(const char *, VAR6, VAR7))FUN3(VAR8, "");
VAR4 = FUN2();
if (VAR4)
return FUN4(-1, "", VAR4);

return FUN5(VAR1, VAR2, VAR3);
}