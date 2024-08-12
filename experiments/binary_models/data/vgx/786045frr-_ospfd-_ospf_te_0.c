static void FUN1(
void (*VAR1)(struct VAR2 *VAR3, enum lsa_opcode VAR4),
enum lsa_opcode VAR4)
{
struct VAR5 *VAR6, *VAR7;
struct VAR5 *VAR8;
struct VAR2 *VAR3;
struct VAR9 *VAR10;

for (FUN2(VAR11.VAR12, VAR6, VAR7, VAR3)) {

if (FUN3(VAR3->VAR13))
continue;
if ((VAR10 = VAR3->VAR10) == NULL)
continue;
if (FUN4(VAR3->VAR14, VAR15))
continue;

if (VAR1 != NULL)
(*VAR1)(VAR3, VAR4);

for (VAR8 = FUN5(VAR6); VAR8;
VAR8 = FUN5(VAR8))
if ((VAR3 = FUN6(VAR8)) != NULL)
if (VAR3->VAR10 != NULL)
if (FUN7(&VAR3->VAR10->VAR16,
&VAR10->VAR16))
FUN8(VAR3->VAR14,
VAR15);
}

for (FUN9(VAR11.VAR12, VAR6, VAR3))
if (VAR3->VAR10 != NULL)
FUN10(VAR3->VAR14, VAR15);

return;
}