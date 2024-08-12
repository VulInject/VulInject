int
main(int argc, char **argv)
{
VAR1 *VAR2;
VAR3 *VAR4;
kdb_incr_update_t VAR5;
const char *VAR6;

if (argc != 2) {
fprintf(VAR7, "", argv[0]);
FUN1(1);
}
VAR6 = argv[1];
unlink(VAR6);

if (FUN2(VAR8, VAR6, 10) != 0)
FUN3();
VAR2 = VAR8->VAR9;
VAR4 = VAR2->VAR4;


VAR4->VAR10 = VAR2->VAR11;
VAR4->VAR12 = (VAR13)-1;
VAR4->VAR14 = VAR4->VAR12 - VAR4->VAR10 + 1;


memset(&VAR5, 0, sizeof(VAR15));
if (FUN4(VAR8, &VAR5) != 0)
FUN3();
assert(VAR4->VAR10 == 2);
assert(VAR4->VAR14 == 1);
assert(VAR4->VAR12 == 2);
return 0;
}