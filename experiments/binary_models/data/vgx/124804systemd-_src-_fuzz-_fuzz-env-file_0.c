int FUN1(const VAR1 *VAR2, size_t VAR3) {
_cleanup_fclose_ VAR4 *VAR5 = NULL;
_cleanup_strv_free_ char **VAR6 = NULL, **VAR7 =  NULL;

if (FUN2(VAR3, 0, 65536))
return 0;

VAR5 = FUN3(VAR2, VAR3);
FUN4(VAR5);


if (!getenv(""))
FUN5(VAR8);

(void) FUN6(VAR5, NULL, &VAR6);
FUN4(FUN7(VAR5, 0, VAR9) == 0);
(void) FUN8(VAR5, NULL, &VAR7);

return 0;
}