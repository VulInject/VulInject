main (int argc, char **argv)
{
static const char VAR1[] =
""$VAR2/VAR3-VAR4.VAR5\""$VAR2/VAR3-VAR4.VAR5\"";
int VAR6 = FUN1 (argv[1]);
int VAR7 = FUN1 (argv[2]);
int VAR8 = FUN1 (argv[3]);
int VAR9 = FUN1 (argv[4]);
int VAR10 = FUN1 (argv[5]);
int VAR11 = FUN1 (argv[6]);
int VAR12 = FUN1 (argv[7]);
void *VAR13 = malloc (VAR6);
void *VAR14 = malloc (VAR8);
void *VAR15 = malloc (VAR10);
void *VAR16 = malloc (VAR12);

size_t VAR17 = 0;

FUN2 (fread (VAR13, 1, VAR6, stdin) == VAR6);
FUN2 (memcmp (VAR13, VAR1 + VAR17, VAR6) == 0);
VAR17 += VAR6;


FUN2 (FUN3 (stdin, VAR7) == 0);
VAR17 += VAR7;

FUN2 (fread (VAR14, 1, VAR8, stdin) == VAR8);
FUN2 (memcmp (VAR14, VAR1 + VAR17, VAR8) == 0);
VAR17 += VAR8;


FUN4 (fgetc (stdin), stdin);
FUN2 (FUN3 (stdin, VAR9) == 0);
VAR17 += VAR9;

FUN2 (fread (VAR15, 1, VAR10, stdin) == VAR10);
FUN2 (memcmp (VAR15, VAR1 + VAR17, VAR10) == 0);
VAR17 += VAR10;


fgetc (stdin);
FUN4 ('', stdin);
FUN2 (FUN3 (stdin, VAR11) == 0);
VAR17 += VAR11;

FUN2 (fread (VAR16, 1, VAR12, stdin) == VAR12);
FUN2 (memcmp (VAR16, VAR1 + VAR17, VAR12) == 0);
VAR17 += VAR12;


FUN2 (FUN3 (stdin, strlen (VAR1) - VAR17) == 0);
FUN2 (fgetc (stdin) == VAR18);
FUN2 (!FUN5 (stdin));


FUN2 (FUN3 (stdin, 1000000) == 0);
FUN2 (fgetc (stdin) == VAR18);
FUN2 (!FUN5 (stdin));

free (VAR16);
free (VAR15);
free (VAR14);
free (VAR13);

return 0;
}