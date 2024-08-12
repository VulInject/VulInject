extern int FUN1(const char *VAR1, http_request_method_t VAR2,
VAR3 *VAR4, VAR3 *VAR5, int VAR6,
VAR3 *VAR7, void *VAR8)
{
VAR9 *VAR10 = FUN2(VAR1, VAR2, VAR4, VAR5,
VAR6, VAR7, VAR8);

if (VAR10->VAR11)
;
else if (VAR2 == VAR12)
FUN3(VAR10);
else if (VAR2 == VAR13)
FUN4(VAR10, (VAR6 != VAR14));
else {
FUN5(VAR10, VAR15, VAR16,
"",
FUN6(VAR2));
}

return FUN7(VAR10);
}