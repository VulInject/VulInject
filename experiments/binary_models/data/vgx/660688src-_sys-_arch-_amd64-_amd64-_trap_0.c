static void
FUN1(struct VAR1 *VAR2, int VAR3)
{
if (VAR3 < VAR4)
FUN2("", VAR5[VAR3]);
else
FUN2("", VAR3);
FUN2("", FUN3(VAR2->VAR6, VAR2->VAR7) ?
"" : "");
FUN2(""
"",
VAR3, VAR2->VAR8, VAR2->VAR9, VAR2->VAR6,
VAR2->VAR7, FUN4(), FUN5()->VAR10, VAR2->VAR11);
FUN2("",
(void *)FUN6(VAR12), (void *)FUN6(VAR13));
}