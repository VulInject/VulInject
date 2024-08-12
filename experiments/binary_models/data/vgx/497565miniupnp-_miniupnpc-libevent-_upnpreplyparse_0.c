void
FUN1(char * VAR1, int VAR2)
{
struct NameValueParserData VAR3;
struct VAR4 * VAR5;
FUN2(VAR1, VAR2, &VAR3);
for(VAR5 = VAR3.VAR6;
VAR5 != NULL;
VAR5 = VAR5->VAR7)
{
FUN3("", VAR5->VAR8, VAR5->VAR9);
}
FUN4(&VAR3);
}