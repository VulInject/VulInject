int FUN1(VAR1 *VAR2, LookupScope VAR3, LookupPathsFlags VAR4, const char *VAR5) {
int VAR6;

VAR6 = FUN2(VAR2, VAR3, VAR4, VAR5);
if (VAR6 < 0)
return FUN3(VAR6, "",
FUN4(VAR5) ? "" : "", FUN5(VAR5));
return VAR6;
}