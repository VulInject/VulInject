VAR1
FUN1(struct VAR2 *VAR3)
{
uint32_t VAR4, VAR5;

if (VAR6) {
FUN2((VAR7 *)&(VAR3->VAR8.VAR9), &VAR5);
FUN2((VAR7 *)&(VAR3->VAR10), &VAR4);
return ((VAR1)((VAR5 << 16) | VAR4));
} else {
FUN2((VAR7 *)&(VAR3->VAR10), &VAR4);
return ((VAR1)VAR4);
}
}