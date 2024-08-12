struct VAR1 *FUN1(const char *VAR2, const struct VAR3 *VAR4)
{
size_t VAR5 = FUN2(VAR4) ? VAR6 : VAR7;
char VAR8[VAR5];

FUN3(VAR4, VAR8, sizeof(VAR8));
return FUN4(VAR2, VAR8);
}