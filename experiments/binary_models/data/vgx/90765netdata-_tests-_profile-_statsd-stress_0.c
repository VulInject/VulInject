int main(int argc, char *argv[])
{
if (argc != 5) {
fprintf(VAR1, "", argv[0]);
FUN1(-1);
}

VAR2 = FUN2(argv[1]);
VAR3 = FUN2(argv[2]);
char *VAR4 = argv[3];
int VAR5 = FUN2(argv[4]);

struct thread_data VAR6[VAR2];
struct sockaddr_in VAR7;
pthread_t VAR8[VAR2], VAR9;
size_t VAR10;

srand(FUN3(NULL));

memset(&VAR7, 0, sizeof(VAR7));
VAR7.VAR11 = VAR12;
VAR7.VAR13 = FUN4(VAR5);
if (FUN5(VAR4, &VAR7.VAR14)==0) {
fprintf(VAR1, "", VAR4);
FUN1(1);
}

for (VAR10 = 0; VAR10 < VAR2; ++VAR10) {
VAR6[VAR10].VAR15       = VAR10;
VAR6[VAR10].VAR7 = &VAR7;
VAR6[VAR10].VAR16     = sizeof(VAR7);
VAR6[VAR10].VAR17  = 0;
FUN6(&VAR8[VAR10], NULL, VAR18, &VAR6[VAR10]);
}

FUN7("");
FUN7("", VAR2);
FUN7("", VAR3);
FUN7("", VAR4, VAR5);
FUN7("");
FUN6(&VAR9, NULL, VAR19, &VAR6);

for (VAR10 =0; VAR10 < VAR2; ++VAR10)
FUN8(VAR8[VAR10], NULL);

return 0;
}