int
FUN1(xmlNodePtr VAR1, VAR2 *VAR3, const VAR4 *VAR5)
{
xmlChar VAR6[VAR7] = {0};
uint64_t VAR8;
int64_t VAR9;
uchar_t VAR10;
double VAR11;
const char *VAR12;

pool_value_class_t VAR13;

if (FUN2(VAR1, VAR3) == NULL && FUN3(VAR1->VAR14,
(const char *) VAR1->VAR3, (const char *) VAR3) == VAR15) {
FUN4(VAR16);
return (VAR17);
}

if (FUN2(VAR1, BAD_CAST VAR18) == NULL) {
FUN4(VAR19);
return (VAR17);
}
VAR13 = FUN5(VAR1, VAR3);
if (VAR13 != VAR5->VAR20) {
FUN4(VAR16);
return (VAR17);
}
switch (VAR5->VAR20) {
case VAR21:
(void) FUN6(VAR5, &VAR8);
(void) snprintf((char *)VAR6, sizeof (VAR6), "",
(VAR22)VAR8);
break;
case VAR23:
(void) FUN7(VAR5, &VAR9);
(void) snprintf((char *)VAR6, sizeof (VAR6), "",
(VAR24)VAR9);
break;
case VAR25:
(void) FUN8(VAR5, &VAR11);
(void) snprintf((char *)VAR6, sizeof (VAR6), "", VAR11);
break;
case VAR26:
(void) FUN9(VAR5, &VAR10);
if (VAR10 == VAR15)
(void) snprintf((char *)VAR6, sizeof (VAR6),
"");
else
(void) snprintf((char *)VAR6, sizeof (VAR6),
"");
break;
case VAR27:
(void) FUN10(VAR5, &VAR12);
if (VAR12 != NULL)
(void) snprintf((char *)VAR6, sizeof (VAR6), "",
VAR12);
break;
case VAR28:
default:
break;
}
if (FUN11(VAR1, VAR3, VAR6) == NULL) {
FUN4(VAR29);
return (VAR17);
}
return (VAR30);
}