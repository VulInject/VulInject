int
FUN1(const void *VAR1, int VAR2, uint8_t VAR3, int32_t VAR4)
{
struct VAR5 *VAR6;
struct hid_item VAR7;
uint32_t VAR8 = ~0;

VAR6 = FUN2(VAR1, VAR2, VAR9);
if (VAR6 == NULL)
return (0);

while (FUN3(VAR6, &VAR7)) {
if (VAR7.VAR10 == VAR11 &&
VAR7.VAR12 == VAR13)
VAR8 = VAR7.VAR4;

if (VAR7.VAR10 == VAR14)
VAR8 = ~0;

if (VAR7.VAR10 == VAR9 &&
VAR8 == VAR4 &&
VAR7.VAR15 == VAR3) {
FUN4(VAR6);
return (1);
}
}
FUN4(VAR6);

return (0);
}