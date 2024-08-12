int main(int argc, char **argv) {
int VAR1 = 32;
if (argc < 2) {
FUN1 ("", argv[0]);
return 1;
} else if (argc == 3)
VAR1 = FUN2 (argv[2]);
return FUN3 (argv[1], VAR1);
}