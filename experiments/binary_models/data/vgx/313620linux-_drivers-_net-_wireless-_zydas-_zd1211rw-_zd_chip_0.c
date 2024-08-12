static void FUN1(struct VAR1 *VAR2)
{
const zd_addr_t VAR3[4] = {
FUN2(VAR2, VAR4),
FUN2(VAR2, VAR5),
FUN2(VAR2, VAR6),
FUN2(VAR2, VAR7),
};

int VAR8;
u16 VAR9[4];

VAR8 = FUN3(VAR2, VAR9, (const VAR10*)VAR3,
FUN4(VAR3));
if (VAR8) {
FUN5(FUN6(VAR2), "",
VAR8);
return;
}

FUN5(FUN6(VAR2), "", VAR9[0]);
FUN5(FUN6(VAR2), "", VAR9[1]);
FUN5(FUN6(VAR2), "", VAR9[2]);
FUN5(FUN6(VAR2), "", VAR9[3]);
}