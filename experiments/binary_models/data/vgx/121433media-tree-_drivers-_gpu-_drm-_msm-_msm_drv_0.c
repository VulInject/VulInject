static char *VAR1 = "";
FUN1(VAR1, "");
FUN2(VAR1, VAR2, 0);

bool VAR3 = false;
FUN1(VAR3, "");
FUN2(VAR3, bool, 0600);



struct VAR4 *FUN3(struct VAR5 *VAR6, const char *VAR7)
{
struct VAR4 *VAR4;
char VAR8[32];

VAR4 = FUN4(&VAR6->VAR9, VAR7);
if (!FUN5(VAR4) || FUN6(VAR4) == -VAR10)
return VAR4;

snprintf(VAR8, sizeof(VAR8), "", VAR7);

VAR4 = FUN4(&VAR6->VAR9, VAR8);
if (!FUN5(VAR4))
FUN7(&VAR6->VAR9, ""
""%VAR11\""%VAR11\"", VAR7, VAR8);

return VAR4;
}