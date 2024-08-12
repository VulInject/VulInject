static const char *FUN1(VAR1 *VAR2, void *VAR3, const char *VAR4)
{
VAR5 *VAR6 = VAR2->VAR7;
VAR8 *VAR9 = FUN2(VAR6->VAR10,
&VAR11);

VAR9->VAR12 = FUN3(VAR2->VAR13, VAR4);

if (!VAR9->VAR12) {
return FUN4(VAR2->VAR13, "",
VAR4, NULL);
}

return NULL;
}