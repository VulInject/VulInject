char** FUN1(int argc, char** argv) {
struct uv__process_title VAR1;
char** VAR2;
size_t VAR3;
char* VAR4;
int VAR5;

if (argc <= 0)
return argv;

VAR1.VAR6 = argv[0];
VAR1.VAR7 = strlen(argv[0]);
VAR1.VAR8 = VAR1.VAR7 + 1;


VAR3 = VAR1.VAR8;
for (VAR5 = 1; VAR5 < argc; VAR5++)
VAR3 += strlen(argv[VAR5]) + 1;


VAR3 += (argc + 1) * sizeof(char*);

VAR2 = FUN2(VAR3);
if (VAR2 == NULL)
return argv;


VAR5 = 0;
VAR4 = (char*) &VAR2[argc + 1];
VAR3 = VAR1.VAR8;
goto VAR9;

for (; VAR5 < argc; VAR5++) {
VAR3 = strlen(argv[VAR5]) + 1;
VAR9:
memcpy(VAR4, argv[VAR5], VAR3);
VAR2[VAR5] = VAR4;
VAR4 += VAR3;
}
VAR2[VAR5] = NULL;

VAR1.VAR8 = argv[VAR5 - 1] + VAR3 - argv[0];

VAR10 = VAR2;
VAR11 = VAR1;

return VAR2;
}