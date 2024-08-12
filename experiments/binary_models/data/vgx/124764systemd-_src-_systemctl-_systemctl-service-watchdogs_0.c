int FUN1(int argc, char *argv[], void *VAR1) {
VAR2 *VAR3;
FUN2(VAR4) sd_bus_error VAR5 = VAR6;
int VAR7, VAR8;

assert(argv);

VAR8 = FUN3(VAR9, &VAR3);
if (VAR8 < 0)
return VAR8;

if (argc == 1) {

VAR8 = FUN4(VAR3, VAR10, "", &VAR5, '', &VAR7);
if (VAR8 < 0)
return FUN5(VAR8, "", FUN6(&VAR5, VAR8));

FUN7("", FUN8(!!VAR7));

} else {

assert(argc == 2);

VAR7 = FUN9(argv[1]);
if (VAR7 < 0)
return FUN5(VAR7, "");

VAR8 = FUN10(VAR3, VAR10, "", &VAR5, "", VAR7);
if (VAR8 < 0)
return FUN5(VAR8, "", FUN6(&VAR5, VAR8));
}

return 0;
}