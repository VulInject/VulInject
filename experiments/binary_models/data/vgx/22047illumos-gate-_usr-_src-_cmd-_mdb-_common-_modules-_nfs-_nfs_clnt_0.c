int
FUN1(VAR1 *VAR2)
{
servinfo_t VAR3;
uintptr_t VAR4 = VAR2->VAR5;

if (VAR4 == 0)
return (VAR6);

if (FUN2(&VAR3, sizeof (VAR3), VAR4) == -1) {
FUN3("");
return (VAR7);
}

VAR2->VAR5 = (VAR8)VAR3.VAR9;
return (VAR2->FUN4(VAR4, &VAR3, VAR2->VAR10));
}