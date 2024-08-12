int main(int argc, char *argv[])
{
int VAR1;
struct VAR2 *VAR3;

int VAR4 = FUN1(argv[1]);

FUN2();

VAR3 = FUN3("", false, NULL);
if(VAR3 == NULL){
return 1;
}

VAR1 = FUN4(VAR3, "", VAR4, 60);

while(VAR5 == -1){
FUN5(VAR3, -1, 1);
}
FUN6(VAR3);

FUN7();
return VAR5;
}