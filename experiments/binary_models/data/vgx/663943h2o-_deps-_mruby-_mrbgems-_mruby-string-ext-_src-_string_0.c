static VAR1
FUN1(VAR2 *VAR3, mrb_value VAR4)
{
const VAR1 *argv;
mrb_int argc, VAR5;
FUN2(VAR3, "", &argv, &argc);

for (VAR5 = 0; VAR5 < argc; VAR5++) {
size_t VAR6, VAR7;
int VAR8 = FUN3(VAR3);
mrb_value VAR9 = argv[VAR5];
FUN4(VAR3, VAR9);
FUN5(VAR3, VAR8);
VAR6 = FUN6(VAR4);
VAR7 = FUN6(VAR9);
if (VAR6 >= VAR7) {
if (memcmp(FUN7(VAR4), FUN7(VAR9), VAR7) == 0) {
return FUN8();
}
}
}
return FUN9();
}