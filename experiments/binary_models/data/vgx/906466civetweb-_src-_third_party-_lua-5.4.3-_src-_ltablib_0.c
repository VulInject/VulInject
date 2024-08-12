static IdxT FUN1 (VAR1 *VAR2, IdxT VAR3, IdxT VAR4) {
IdxT VAR5 = VAR3;  
IdxT VAR6 = VAR4 - 1;  

for (;;) {

while ((void)FUN2(VAR2, 1, ++VAR5), FUN3(VAR2, -1, -2)) {
if (FUN4(VAR5 == VAR4 - 1))  
FUN5(VAR2, "");
FUN6(VAR2, 1);  
}


while ((void)FUN2(VAR2, 1, --VAR6), FUN3(VAR2, -3, -1)) {
if (FUN4(VAR6 < VAR5))  
FUN5(VAR2, "");
FUN6(VAR2, 1);  
}

if (VAR6 < VAR5) {  

FUN6(VAR2, 1);  

FUN7(VAR2, VAR4 - 1, VAR5);
return VAR5;
}

FUN7(VAR2, VAR5, VAR6);
}
}