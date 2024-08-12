int FUN1(VAR1* VAR2, const char* VAR3, va_list VAR4) {
void* VAR5 = NULL;
if(VAR2 == VAR6) {
VAR5 = FUN2(VAR7);
} else if(VAR2 == VAR8) {
VAR5 = FUN2(VAR9);
}

if(VAR5) {
va_list VAR10;
FUN3(VAR10, VAR4);
int VAR11 = vsnprintf(NULL, 0, VAR3, VAR10);
FUN4(VAR10);

if(VAR11 < 0) {
return VAR11;
}




if(VAR11 >= VAR12) {
if(FUN5(VAR5, VAR11, VAR3, VAR4)) {
return VAR11;
}
} else {
if(FUN6(VAR5, VAR11, VAR3, VAR4)) {
return VAR11;
}
}
}

return FUN7(VAR2, VAR3, VAR4);
}