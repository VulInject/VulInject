void FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
if (!VAR3)
return;


struct VAR2 *VAR4;


for (unsigned int VAR5 = FUN2(VAR3->VAR6); VAR5--; ) {
VAR4 = FUN3(VAR3->VAR6, VAR5);
FUN4(VAR4, VAR3);
}


for (unsigned int VAR5 = FUN2(VAR3->VAR7); VAR5--; ) {
VAR4 = FUN3(VAR3->VAR7, VAR5);
FUN4(VAR3, VAR4);
}


if (VAR3->VAR8 && VAR3->VAR9)
(*VAR3->VAR8)(VAR3->VAR9);


FUN5(VAR3->VAR7);
FUN5(VAR3->VAR6);


for (unsigned int VAR5 = FUN2(VAR1->VAR10); VAR5--; )
if (FUN3(VAR1->VAR10, VAR5) == VAR3) {
FUN6(VAR1->VAR10, VAR5);
break;
}


FUN7(VAR11, VAR3);
}