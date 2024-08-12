static int FUN1 (VAR1 *VAR2) {
int VAR3 = FUN2(VAR2);  
int VAR4;
for (VAR4 = 1; VAR4 <= VAR3; VAR4++) {  
size_t VAR5;
const char *VAR6 = FUN3(VAR2, VAR4, &VAR5);  
if (VAR4 > 1)  
FUN4("", 1);  
FUN4(VAR6, VAR5);  
FUN5(VAR2, 1);  
}
FUN6();
return 0;
}



static int FUN7 (VAR1 *VAR2) {
int VAR3 = FUN2(VAR2);  
int VAR4;
FUN8(VAR2, 1);  
for (VAR4 = 2; VAR4 <= VAR3; VAR4++)
FUN8(VAR2, VAR4);  
for (VAR4 = 1; VAR4 < VAR3; VAR4++)  
FUN9(VAR2, FUN10(VAR2, VAR4), 1);
FUN9(VAR2, FUN10(VAR2, VAR3), 0);  
return 0;
}