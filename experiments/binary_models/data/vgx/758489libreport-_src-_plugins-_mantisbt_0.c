static int
FUN1(const char *VAR1)
{
xmlDocPtr VAR2 = FUN2(BAD_CAST VAR1);
if (VAR2 == NULL)
FUN3(FUN4(""));

xmlTextReaderPtr VAR3 = FUN5(VAR2);
if (VAR3 == NULL)
FUN3(FUN4(""));

const VAR4 *VAR5 = NULL;
const VAR4 *VAR6 = NULL;


FUN6(VAR3, "");


while (FUN7(VAR3) == 1)
{

if (FUN8(VAR3, "") == false)
continue;

if ((VAR5 = FUN9(VAR3)) == NULL)
continue;


if (FUN10(VAR5, VAR7 "") != 0)
continue;


FUN6(VAR3, "");


if (FUN8(VAR3, "") == false)
continue;


if ((VAR6 = FUN9(VAR3)) != NULL)
break;
}
FUN11(VAR3);

return (VAR6 == NULL) ? -1 : FUN12((const char *) VAR6);
}