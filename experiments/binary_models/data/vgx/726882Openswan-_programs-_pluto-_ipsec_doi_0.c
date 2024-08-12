bool
FUN1(struct VAR1 *VAR2, const VAR3 *VAR4)
{
switch (VAR2->VAR5)
{
case VAR6:
case VAR7:

{
err_t VAR8 = FUN2(VAR4->VAR9, FUN3(VAR4)
, VAR2->VAR5 == VAR6? VAR10 : VAR11
, &VAR2->VAR12);

if (VAR8 != NULL)
{
FUN4(VAR13, ""
, FUN5(&VAR14, VAR2->VAR5), VAR8);

return VAR15;
}
}
break;

case VAR16:
if (memchr(VAR4->VAR9, '', FUN3(VAR4)) == NULL)
{
FUN4(VAR13, ""
, (int) FUN3(VAR4)
, VAR4->VAR9);

}

case VAR17:
if (memchr(VAR4->VAR9, '', FUN3(VAR4)) != NULL)
{
FUN4(VAR13, ""
, FUN5(&VAR14, VAR2->VAR5));
return VAR15;
}



FUN6(VAR2->VAR18, VAR4->VAR9, FUN3(VAR4));
break;

case VAR19:
FUN6(VAR2->VAR18, VAR4->VAR9, FUN3(VAR4));
FUN7(VAR20,
FUN8("", VAR2->VAR18));
break;

case VAR21:
FUN6(VAR2->VAR18, VAR4->VAR9, FUN3(VAR4));
FUN7(VAR20,
FUN8("", VAR2->VAR18));
break;

default:

FUN4(VAR13, ""
, FUN5(&VAR14, VAR2->VAR5));
return VAR15;
}

return VAR22;
}