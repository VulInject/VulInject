static void
FUN1(xmlSchematronParserCtxtPtr VAR1,
xmlDocPtr VAR2, xmlNodePtr VAR3)
{
if (VAR1->VAR4 == NULL) {
VAR1->VAR5 = 10;
VAR1->VAR4 = (VAR6 *)
FUN2(VAR1->VAR5 * 2 * sizeof(VAR6));
if (VAR1->VAR4 == NULL) {
FUN3(NULL, "",
NULL);
return;
}
VAR1->VAR7 = 0;
} else if (VAR1->VAR7 + 2 >= VAR1->VAR5) {
VAR6 *VAR8;

VAR8 = (VAR6 *)
FUN4(VAR1->VAR4, VAR1->VAR5 * 4 *
sizeof(VAR6));
if (VAR8 == NULL) {
FUN3(NULL, "",
NULL);
return;
}
VAR1->VAR4 = VAR8;
VAR1->VAR5 *= 2;
}
VAR1->VAR4[2 * VAR1->VAR7] = VAR3;
VAR1->VAR4[2 * VAR1->VAR7 + 1] = (VAR6) VAR2;
VAR1->VAR7++;
}