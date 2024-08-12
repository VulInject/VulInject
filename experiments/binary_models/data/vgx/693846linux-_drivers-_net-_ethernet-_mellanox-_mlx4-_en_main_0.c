FUN1("");
FUN2("");
FUN3("");
FUN4(VAR1);

static const char VAR2[] =
VAR3 ""
VAR1 "";

static unsigned int VAR4 = VAR5;\
FUN5(VAR4 , VAR6, 0444); \
FUN6(VAR4, VAR7);





FUN7(VAR8, 1,
"");


FUN7(VAR9, 0, ""
"");
FUN7(VAR10, 0, ""
"");

FUN7(VAR11, VAR12,
"");


void FUN8(const char *VAR13, const struct VAR14 *VAR15,
const char *VAR16, ...)
{
va_list VAR17;
struct va_format VAR18;

FUN9(VAR17, VAR16);

VAR18.VAR19 = VAR16;
VAR18.VAR20 = &VAR17;
if (VAR15->VAR21)
FUN10("",
VAR13, VAR3, VAR15->VAR22->VAR23, &VAR18);
else
FUN10("",
VAR13, VAR3, FUN11(&VAR15->VAR24->VAR25->VAR22),
VAR15->VAR26, &VAR18);
FUN12(VAR17);
}