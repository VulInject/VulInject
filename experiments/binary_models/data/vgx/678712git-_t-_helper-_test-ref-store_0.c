static int FUN1(struct VAR1 *VAR2, const char **argv)
{
const char *VAR3 = FUN2(*argv++, "");
struct strbuf VAR4 = VAR5;
int VAR6;

VAR6 = FUN3(VAR2, VAR3, NULL, NULL, &VAR4);
if (VAR4.VAR7)
FUN4(VAR4.VAR8);
return VAR6;
}