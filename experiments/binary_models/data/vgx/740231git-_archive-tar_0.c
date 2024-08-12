static void FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = VAR2->VAR5;
struct strbuf VAR6 = VAR7;
struct ustar_header VAR8;
unsigned int VAR9;

if (VAR4)
FUN2(&VAR6, "",
FUN3(VAR4),
VAR10->VAR11);
if (VAR2->VAR12 > VAR13) {
FUN4(&VAR6, "",
VAR2->VAR12);
VAR2->VAR12 = VAR13;
}

if (!VAR6.VAR14)
return;

memset(&VAR8, 0, sizeof(VAR8));
*VAR8.VAR15 = VAR16;
VAR9 = 0100666;
FUN5(VAR8.VAR17, sizeof(VAR8.VAR17), "");
FUN6(VAR2, &VAR8, VAR9, VAR6.VAR14);
FUN7(&VAR8, sizeof(VAR8));
FUN7(VAR6.VAR18, VAR6.VAR14);
FUN8(&VAR6);
}