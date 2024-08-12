static void FUN1(struct VAR1 *VAR1,
const char **argv, const char *VAR2,
int VAR3,
const char **VAR4)
{
const char *VAR5 = "";
struct object_id VAR6;


if (argv[0]) {
if (!strcmp(argv[0], "")) {
argv++; 
} else if (argv[1] && !strcmp(argv[1], "")) {
VAR5 = argv[0];
argv += 2;
}

else if ((!argv[1] && !FUN2(argv[0], &VAR6)) ||
(argv[1] && !FUN3(argv[0], &VAR6))) {

FUN4(VAR2, argv[0]);
VAR5 = *argv++;
} else {

FUN5(VAR2, argv[0], 1);
}
}
*VAR4 = VAR5;

FUN6(VAR1, 0,
VAR7 |
(VAR3 ? VAR8 : 0),
VAR2, argv);
}