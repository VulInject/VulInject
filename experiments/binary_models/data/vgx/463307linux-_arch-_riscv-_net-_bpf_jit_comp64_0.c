static void FUN1(u8 VAR1, s64 VAR2, struct VAR3 *VAR4)
{

s64 VAR5 = (VAR2 + (1 << 11)) >> 12;

s64 VAR6 = ((VAR2 & 0xfff) << 52) >> 52;
int VAR7;

if (FUN2(VAR2)) {
if (VAR5)
FUN3(VAR1, VAR5, VAR4);

if (!VAR5) {
FUN4(VAR1, VAR6, VAR4);
return;
}

FUN5(VAR1, VAR1, VAR6, VAR4);
return;
}

VAR7 = FUN6(VAR5);
VAR5 >>= VAR7;
VAR7 += 12;

FUN1(VAR1, VAR5, VAR4);

FUN7(VAR1, VAR1, VAR7, VAR4);
if (VAR6)
FUN8(VAR1, VAR1, VAR6, VAR4);
}