static int FUN1(const struct VAR1 *VAR2, int write)
{
u32 VAR3;
unsigned long long VAR4 = FUN2();
const unsigned long long VAR5 = FUN3(VAR6);

do {
VAR3 = FUN4(&VAR2->VAR7);
if (!(VAR3 & VAR8))
continue;

VAR3 = FUN4(&VAR2->VAR7);

FUN5(0x0, &VAR2->VAR7);

if (VAR3 & VAR9) {
FUN6("", VAR10);
return -1;
}

if (!(VAR3 & VAR11))	{
FUN6("", VAR10);
return -1;
}

if (write == VAR12 && (VAR3 & VAR13)) {
FUN6("", VAR10);
return -1;
}

return 0;
} while ((FUN2() - VAR4) < VAR5);

FUN6("", VAR10);
return -1;
}