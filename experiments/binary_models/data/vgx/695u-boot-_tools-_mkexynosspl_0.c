int main(int argc, char **argv)
{
unsigned char *VAR1;
int VAR2, VAR3, VAR4;
uint32_t VAR5 = 0;
off_t	VAR6;
int	VAR7, VAR8, VAR9;
struct stat VAR10;
const int VAR11 = argc - 2; 
const int VAR12 = argc - 1; 


VAR13 = strrchr(argv[0], '');
if (VAR13)
VAR13++;
else
VAR13 = argv[0];

if ((argc < 3) ||
(argc > 4) ||
((argc == 4) && strcmp(argv[1], ""))) {
fprintf(VAR14, "",
VAR13);
FUN1(VAR15);
}


VAR7 = (argc == 4);

VAR3 = open(argv[VAR11], VAR16);
if (VAR3 < 0) {
fprintf(VAR14, "",
VAR13, argv[VAR11], strerror(VAR17));
FUN1(VAR15);
}

VAR4 = open(argv[VAR12], VAR18 | VAR19 | VAR20, VAR21);
if (VAR4 < 0) {
fprintf(VAR14, "",
VAR13, argv[VAR12], strerror(VAR17));
FUN1(VAR15);
}

if (FUN2(VAR3, &VAR10)) {
fprintf(VAR14, "",
VAR13, argv[VAR11], strerror(VAR17));
FUN1(VAR15);
}

VAR6 = VAR10.VAR22;

if (VAR7) {
VAR8 = VAR6;
VAR9 = VAR6;
} else {
if (VAR6 > VAR23) {
fprintf(VAR14,
"",
VAR13, argv[VAR11], VAR23);
FUN1(VAR15);
}
VAR9 = VAR23;
VAR8 = VAR6;
}

VAR1 = malloc(VAR9);
if (!VAR1) {
fprintf(VAR14,
"",
VAR13, VAR9, argv[VAR11]);
FUN1(VAR15);
}

if (read(VAR3, VAR1, VAR8) != VAR8) {
fprintf(VAR14, "",
VAR13, argv[VAR11], strerror(VAR17));
FUN1(VAR15);
}


if (VAR8 < VAR9)
memset((char *)VAR1 + VAR8, 0xff, VAR9 - VAR8);

for (VAR2 = 0, VAR5 = 0; VAR2 < VAR9; VAR2++)
VAR5 += VAR1[VAR2];
VAR5 = FUN3(VAR5);

if (VAR7) {

struct var_size_header VAR24;
uint32_t VAR25;

memset(&VAR24, 0, sizeof(VAR24));
memcpy(&VAR24.VAR26, &VAR5, sizeof(VAR5));

VAR25 = FUN3(VAR9 + sizeof(struct VAR27));
memcpy(&VAR24.VAR25, &VAR25, sizeof(VAR25));
FUN4(VAR4, &VAR24, sizeof(VAR24));
}

FUN4(VAR4, VAR1, VAR9);


if (!VAR7)
FUN4(VAR4, &VAR5, sizeof(VAR5));

close(VAR3);
close(VAR4);
free(VAR1);

return VAR28;
}