int main(int argc, char *argv[]) {
decimal64 VAR1;                     
decNumber VAR2;                     
decContext VAR3;                  
char VAR4[VAR5];   
char VAR6[25];                  
int VAR7;                           

if (argc<2) {                    
FUN1("");
return 1;
}
FUN2(&VAR3, VAR8); 

FUN3(&VAR1, argv[1], &VAR3);

for (VAR7=0; VAR7<8; VAR7++) {
sprintf(&VAR6[VAR7*3], "", VAR1.VAR9[VAR7]);
}
FUN4(&VAR1, &VAR2);
FUN5(&VAR2, VAR4);
FUN1("", argv[1], VAR6, VAR4);
return 0;
}