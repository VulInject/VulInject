main (int argc, char **argv)
{
gdImagePtr VAR1;
gdImagePtr VAR2;
VAR3 *VAR4, *VAR5;
if (argc != 3) {
fprintf(VAR6, "");
FUN1 (1);
}
VAR4 = fopen (argv[1], "");
if (!VAR4) {
fprintf(VAR6, "");
FUN1 (1);
}
VAR2 = FUN2 (VAR4);
fclose (VAR4);
if (!VAR2) {
fprintf(VAR6, "");
FUN1 (1);
}

VAR4 = fopen (argv[2], "");
if (!VAR4) {
fprintf(VAR6, "");
FUN1 (1);
}
VAR1 = FUN2 (VAR4);
fclose (VAR4);
if (!VAR1) {
fprintf(VAR6, "");
FUN1 (1);
}

FUN3 (VAR1, VAR2);

VAR5 = fopen (argv[2], "");
if (!VAR5) {
fprintf(VAR6, "");
FUN4 (VAR1);
FUN1 (1);
}
FUN5 (VAR1, VAR5, 128, 2);
fclose (VAR5);
FUN4 (VAR2);
FUN4 (VAR1);

return 0;
}