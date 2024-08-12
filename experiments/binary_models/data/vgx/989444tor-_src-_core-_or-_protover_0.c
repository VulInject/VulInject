int
FUN1(const char *VAR1,
protocol_type_t VAR2,
uint32_t VAR3)
{

VAR4 *VAR5 = FUN2(VAR1);
if (!VAR5) {
return 0;
}
const char *VAR6 = FUN3(VAR2);

int VAR7 = 0;
const uint64_t VAR8 = FUN4(VAR3, 63);

FUN5(VAR5, VAR9 *, VAR10) {
if (FUN6(VAR10->VAR11, VAR6))
continue;
if (0 != (VAR10->VAR12 & VAR8)) {
VAR7 = 1;
goto VAR13;
}
} FUN7(VAR10);

VAR13:
FUN8(VAR5, VAR9 *, VAR14, FUN9(VAR14));
FUN10(VAR5);
return VAR7;
}