static VAR1 FUN1(
VAR2 *VAR3,
VAR4 *VAR5, size_t VAR6)
{
if (FUN2(VAR3->VAR7) == VAR8) {
uint8_t VAR9[VAR10];
int VAR11 = FUN3(&VAR3->VAR12.VAR13, VAR9);
if (VAR11 == 0) {
memcpy(VAR5, VAR9, VAR6);
}
FUN4(VAR9, sizeof(VAR9));
return FUN5(VAR11);
} else
if (FUN6(VAR3->VAR7)) {
return FUN7(&VAR3->VAR12.VAR14,
VAR5, VAR6);
} else
{

(void) VAR3;
(void) VAR5;
(void) VAR6;
return VAR15;
}
}