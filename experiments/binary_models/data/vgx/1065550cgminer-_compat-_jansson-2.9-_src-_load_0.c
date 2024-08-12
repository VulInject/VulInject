VAR1 *FUN1(const char *VAR2, size_t VAR3, VAR4 *VAR5)
{
lex_t VAR6;
VAR1 *VAR7;
string_data_t VAR8;

FUN2(VAR5, "");

if (VAR2 == NULL) {
FUN3(VAR5, NULL, "");
return NULL;
}

VAR8.VAR9 = VAR2;
VAR8.VAR10 = 0;

if(FUN4(&VAR6, VAR11, VAR3, (void *)&VAR8))
return NULL;

VAR7 = FUN5(&VAR6, VAR3, VAR5);

FUN6(&VAR6);
return VAR7;
}