static VAR1 FUN1(const VAR2 *VAR3, bool VAR4, uint32_t VAR5)
{
if (VAR5 < 4) {
bool VAR6 = (VAR4 ?
VAR3->VAR7->VAR4.VAR8 :
VAR3->VAR7->VAR9.VAR8) == 32;
return VAR6 ? 0xffff8000 : 0xffffc000;
} else if (VAR5 == 4) {
return FUN2(VAR3, VAR4, VAR5) << 2;
} else if (VAR5 <= 6) {
uint32_t VAR10 = FUN2(VAR3, VAR4, VAR5);
bool VAR11 = VAR4 ?
VAR3->VAR7->VAR4.VAR11 :
VAR3->VAR7->VAR9.VAR11;

if (VAR11) {
return VAR10 << (VAR5 == 5 ? 2 : 3);
} else {
return VAR10 << 1;
}
} else {
return 0xfffff000;
}
}