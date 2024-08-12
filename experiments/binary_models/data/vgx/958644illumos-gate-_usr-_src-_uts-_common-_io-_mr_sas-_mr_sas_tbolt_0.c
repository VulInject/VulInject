int
FUN1(struct VAR1 *VAR2)
{
uint32_t	VAR3;


VAR3 = FUN2(VAR2);
FUN3(VAR4, (VAR5,
"", VAR3));

if (!(VAR3 & VAR6)) {
return (VAR7);
}

if (FUN4(VAR2->VAR8) != VAR9) {
FUN5(VAR2->VAR10, VAR11);
return (VAR7);
}

if ((VAR3 & 1) || (VAR3 & VAR6)) {

FUN6(VAR3, VAR2);

(void) FUN2(VAR2);
}
return (VAR12);
}