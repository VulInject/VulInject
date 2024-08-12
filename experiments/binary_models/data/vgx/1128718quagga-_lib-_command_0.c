FUN1 (const char *VAR1, struct VAR2 *VAR3)
{
const char *VAR4 = VAR3->VAR5;

switch (VAR3->VAR6)
{
case VAR7:
return VAR4;

case VAR8:
if (FUN2 (VAR4, VAR1))
return VAR4;
else
return NULL;

case VAR9:
if (FUN3 (VAR1))
return VAR4;
else
return NULL;

case VAR10:
if (FUN4 (VAR1))
return VAR4;
else
return NULL;

case VAR11:
if (FUN5 (VAR1))
return VAR4;
else
return NULL;

case VAR12:
if (FUN6 (VAR1))
return VAR4;
else
return NULL;


case VAR13:
case VAR14:
return VAR4;

case VAR15:

if (VAR1 == NULL)
return VAR4;

if (FUN7 (VAR1, VAR4, strlen (VAR1)) == 0)
return VAR4;
else
return NULL;

default:
assert(0);
return NULL;
}
}