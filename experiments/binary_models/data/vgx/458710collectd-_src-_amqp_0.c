static int FUN1(VAR1 *VAR2, 
const char *VAR3, const char *VAR4) {
int VAR5;

VAR5 = FUN2(VAR2);
if (VAR5 != 0)
return VAR5;

amqp_basic_properties_t VAR6 = {.VAR7 = VAR8 |
VAR9 |
VAR10,
.VAR11 = VAR2->VAR11,
.VAR12 = FUN3("")};

if (VAR2->VAR13 == VAR14)
VAR6.VAR15 = FUN3("");
else if (VAR2->VAR13 == VAR16)
VAR6.VAR15 = FUN3("");
else if (VAR2->VAR13 == VAR17)
VAR6.VAR15 = FUN3("");
else
assert(23 == 42);

VAR5 = FUN4(
VAR2->VAR18,
1, FUN3(FUN5(VAR2, VAR19)),
FUN3(VAR4),
0,
0, &VAR6, FUN3(VAR3));
if (VAR5 != 0) {
FUN6("", VAR5);
FUN7(VAR2);
}

return VAR5;
}