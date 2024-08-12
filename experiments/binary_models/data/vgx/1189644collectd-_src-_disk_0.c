static signed long long FUN1(CFDictionaryRef VAR1, const char *VAR2) {
signed long long VAR3;
CFNumberRef VAR4;
CFStringRef VAR5;


VAR5 = FUN2(VAR6, VAR2,
VAR7);
if (VAR5 == NULL) {
FUN3("", VAR2);
return -1LL;
}


VAR4 = (VAR8)FUN4(VAR1, VAR5);

FUN5(VAR5);

if (VAR4 == NULL) {
FUN3("", VAR2);
return -1LL;
}

if (!FUN6(VAR4, VAR9, &VAR3)) {
FUN3("", VAR2);
return -1LL;
}

return VAR3;
}