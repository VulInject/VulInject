static void FUN1(enum print_arg_type VAR1,
const char *VAR2,
const char *VAR3,
const char *VAR4,
const char *VAR5)
{
const char *VAR6 = "";
VAR7 *VAR8;
unsigned long long VAR9;
unsigned VAR10 = 0;

if (VAR1 == VAR11)
VAR6 = "";

VAR8 = FUN2(4);
if (!VAR8)
FUN3("");

VAR9 = FUN4(VAR4);

FUN5(VAR8, VAR10++, FUN6(VAR2));
FUN5(VAR8, VAR10++, FUN6(VAR3));
FUN5(VAR8, VAR10++, FUN7(VAR9));
FUN5(VAR8, VAR10++, FUN6(VAR5));

FUN8(VAR6, VAR8);

FUN9(VAR8);
}