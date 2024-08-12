VAR1 *FUN1(struct VAR2 *VAR2)
{
VAR1 *VAR3 = FUN2(); 
if (VAR3 == NULL) {
FUN3(VAR4|VAR5, VAR2,
"");
return NULL;
}

if (FUN4() || FUN5(VAR3)) {
SECStatus VAR6 = FUN6(VAR3, VAR7,
FUN7(VAR2));
if (VAR6 != VAR8) {
const char *VAR9 = FUN8(VAR3);
FUN3(VAR4|VAR5, VAR2,
""%VAR10\"", VAR9);
FUN9(VAR3); 
return NULL;
}
}
return VAR3;
}