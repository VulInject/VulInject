static void FUN1 (VAR1 *, VAR2 *, void *);



((struct VAR3 *)					\
FUN2 (&(VAR4)->VAR5, (VAR6), (VAR7), (copy)))



(VAR8							\
(&(VAR4)->VAR5,							\
(FUN3 (*) (struct VAR9 *, void *)) (VAR10),		\
(VAR11)))



static struct cref_hash_table VAR12;



static bfd_boolean VAR13;



static size_t VAR14;



static struct VAR9 *
FUN4 (struct VAR9 *VAR15,
struct VAR16 *VAR4,
const char *VAR6)
{
struct VAR3 *VAR17 = (struct VAR3 *) VAR15;


if (VAR17 == NULL)
VAR17 = ((struct VAR3 *)
FUN5 (VAR4, sizeof (struct VAR3)));
if (VAR17 == NULL)
return NULL;


VAR17 = ((struct VAR3 *)
FUN6 ((struct VAR9 *) VAR17, VAR4, VAR6));
if (VAR17 != NULL)
{

VAR17->VAR18 = NULL;
VAR17->VAR19 = NULL;


++VAR14;
}

return &VAR17->VAR5;
}