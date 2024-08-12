int
main(int argc, char *argv[])
{
char VAR1[1024];
char VAR2[1024];
struct str_match VAR3;
const char *VAR4 = NULL;
int VAR5;
size_t VAR6;


VAR7 = "";


if (argc != 3) {

FUN1(VAR1, sizeof(VAR1));
FUN1(VAR2, sizeof(VAR2));
FUN2();
} else {

FUN3(VAR1, argv[1], sizeof(VAR1));
FUN3(VAR2, argv[2], sizeof(VAR2));
}


FUN4("", VAR1);
FUN4("", VAR2);


VAR5 = FUN5(VAR1, VAR2, &VAR3, &VAR4);
if (VAR4 != NULL)
FUN6(1, "", VAR4);


FUN4("", VAR5, VAR3.VAR8);
for (VAR6=0; VAR6<VAR3.VAR8; VAR6++) {
FUN4("", VAR6, VAR3.VAR9[VAR6]);
}

FUN7(&VAR3);

return (VAR10);
}