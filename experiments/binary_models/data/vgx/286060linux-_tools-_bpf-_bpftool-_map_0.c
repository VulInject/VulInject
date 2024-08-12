static int FUN1(int argc, char **argv)
{
struct bpf_map_info VAR1 = {};
__u32 VAR2 = sizeof(VAR1);
__u32 VAR3 = 0;
int VAR4;
int VAR5;

if (VAR6) {
VAR7 = FUN2(VAR8,
VAR9, NULL);
if (FUN3(VAR7)) {
FUN4("");
return -1;
}
FUN5(VAR7, VAR10);
}
FUN6(&VAR11, VAR10);

if (argc == 2)
return FUN7(argc, argv);

if (argc)
return FUN8();

if (VAR12)
FUN9(VAR13);
while (true) {
VAR4 = FUN10(VAR3, &VAR3);
if (VAR4) {
if (VAR14 == VAR15)
break;
FUN4("", strerror(VAR14),
VAR14 == VAR16 ? "" : "");
break;
}

VAR5 = FUN11(VAR3);
if (VAR5 < 0) {
if (VAR14 == VAR15)
continue;
FUN4("",
VAR3, strerror(VAR14));
break;
}

VAR4 = FUN12(VAR5, &VAR1, &VAR2);
if (VAR4) {
FUN4("", strerror(VAR14));
close(VAR5);
break;
}

if (VAR12)
FUN13(VAR5, &VAR1);
else
FUN14(VAR5, &VAR1);
}
if (VAR12)
FUN15(VAR13);

FUN16(VAR11);

if (VAR6)
FUN17(VAR7);

return VAR14 == VAR15 ? 0 : -1;
}