int main(int argc, char **argv)
{
const char *VAR1 = NULL;
struct Tracks VAR2 = { 0 };
int VAR3;

for (VAR3 = 1; VAR3 < argc; VAR3++) {
if (!strcmp(argv[VAR3], "")) {
VAR1 = argv[VAR3 + 1];
VAR3++;
} else if (argv[VAR3][0] == '') {
return FUN1(argv[0], 1);
} else {
if (FUN2(&VAR2, argv[VAR3]))
return 1;
}
}
if (!VAR2.VAR4 || !VAR1)
return FUN1(argv[0], 1);

FUN3(&VAR2, VAR1);

FUN4(&VAR2);

return 0;
}