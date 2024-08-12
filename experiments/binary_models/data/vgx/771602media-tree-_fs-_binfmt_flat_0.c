static void FUN1(unsigned long VAR1)
{
static const char *VAR2[] = { "", "", "", "" };
flat_v2_reloc_t	VAR3;
unsigned long VAR4 *VAR5;
unsigned long VAR6;

VAR3.VAR7 = VAR1;
VAR5 = (unsigned long VAR4 *)(VAR8->VAR9->VAR10 + VAR3.VAR11.VAR12);
VAR5 = (unsigned long VAR4 *)(VAR8->VAR9->VAR13 + VAR3.VAR11.VAR12);
FUN2(VAR6, VAR5);

FUN3(""
"",
VAR3.VAR11.VAR12, VAR5, VAR6, VAR2[VAR3.VAR11.VAR14]);

switch (VAR3.VAR11.VAR14) {
case VAR15:
VAR6 += VAR8->VAR9->VAR10;
break;
case VAR16:
VAR6 += VAR8->VAR9->VAR13;
break;
case VAR17:
VAR6 += VAR8->VAR9->VAR18;
break;
default:
FUN4("", VAR3.VAR11.VAR14);
break;
}
FUN5(VAR6, VAR5);

FUN3("", VAR6);
}