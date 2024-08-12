static const VAR1 *FUN1 (VAR2 *VAR3, const VAR1 *VAR4, int VAR5) {
VAR6 *VAR7 = FUN2(VAR3, VAR4);
for (;;) {  
if (FUN3(VAR4, VAR7, VAR5))
return FUN4(VAR7);  
else {
int VAR8 = FUN5(VAR7);
if (VAR8 == 0)
return &VAR9;  
VAR7 += VAR8;
}
}
}